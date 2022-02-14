
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;



void FUNC_0(void)
{
    struct QEMU_PACKED {
        uint16_t fpuc;
        uint16_t dummy1;
        uint16_t fpus;
        uint16_t dummy2;
        uint16_t fptag;
        uint16_t dummy3;
        uint32_t ignored[4];
        long double fpregs[8];
    } VAR_0;

    asm volatile ("fnstenv %0\n" : "=m" (VAR_0));
    VAR_0 &= ~0x7f;
    asm volatile ("fldenv %0\n" : : "m" (VAR_0));
}
