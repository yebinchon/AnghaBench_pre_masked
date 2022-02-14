
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(unsigned long VAR_0)
{
 __asm__ volatile ("1: dec.l #1,%0\n\t"
     "bne 1b":"=r"(VAR_0):"0"(VAR_0));
}
