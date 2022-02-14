
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static inline void FUNC_0(volatile u16 *VAR_0, int VAR_1)
{
 __asm__ __volatile__("sth%U0%X0 %1,%0; sync"
        : "=m" (*VAR_0) : "r" (VAR_1));
}
