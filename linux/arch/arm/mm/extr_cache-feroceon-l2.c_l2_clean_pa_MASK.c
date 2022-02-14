
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0(unsigned long VAR_0)
{
 __asm__("mcr p15, 1, %0, c15, c9, 3" : : "r" (VAR_0));
}
