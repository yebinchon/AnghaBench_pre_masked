
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static inline void FUNC_0(u32 *VAR_0)
{
 __asm__ __volatile__ (
  "mrrc	p0, 0, %0, %1, c0\n"
  : "=r" (VAR_0[0]), "=r" (VAR_0[1]));
}
