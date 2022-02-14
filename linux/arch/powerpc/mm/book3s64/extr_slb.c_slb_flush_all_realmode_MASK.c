
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(void)
{
 asm volatile("slbmte %0,%0; slbia" : : "r" (0));
}
