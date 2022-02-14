
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline void FUNC_0(volatile unsigned *VAR_0, int VAR_1)
{
 __asm__ __volatile__("stwbrx %1,0,%2; sync" : "=m" (*VAR_0)
        : "r" (VAR_1), "r" (VAR_0));
}
