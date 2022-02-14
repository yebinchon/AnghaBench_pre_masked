
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;

inline void FUNC_1(unsigned long VAR_0)
{
 asm volatile("dcache.cval1 %0\n"::"r"(VAR_0):"memory");
 FUNC_0();
}
