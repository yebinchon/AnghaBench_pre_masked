
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long* VAR_0 ;

void FUNC_0(void)
{
 unsigned long VAR_1;


 VAR_1 = VAR_0[0];

 asm volatile ("mcr p15, 0, %0, c15, c0, 0"
        : : "r" (VAR_1)
        : "cc");


 VAR_1 = VAR_0[1];

 asm volatile ("mcr p15, 0, %0, c15, c0, 1"
        : : "r" (VAR_1)
        : "cc");
}
