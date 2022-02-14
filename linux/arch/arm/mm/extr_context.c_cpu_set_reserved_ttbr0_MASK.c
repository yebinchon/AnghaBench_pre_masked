
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(void)
{
 u32 VAR_0;





 asm volatile(
 "	mrc	p15, 0, %0, c2, c0, 1		@ read TTBR1\n"
 "	mcr	p15, 0, %0, c2, c0, 0		@ set TTBR0\n"
 : "=r" (VAR_0));
 FUNC_0();
}
