
/* { dg-do assemble } */
/* { dg-skip-if "test P-ext insns" { *-*-* } { "*" } { "-march=rv64*p*" } } */
/* { dg-options "-O2 --save-temps" } */

#include <riscv-dsp.h>

uint32x2_t test_v_uclip32(int32x2_t a, const uint32_t b) {
    return __rv__v_uclip32 (a, 1);
}

/* { dg-final { scan-assembler "\tuclip32" } }*/

/* { dg-final { cleanup-saved-temps } } */
