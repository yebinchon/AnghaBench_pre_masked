
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;



__attribute__((used)) static __inline void
FUNC_0(u_int VAR_0, u_int VAR_1, u_int *VAR_2)
{
 __asm __volatile("cpuid"
    : "=a" (VAR_2[0]), "=b" (VAR_2[1]), "=c" (VAR_2[2]), "=d" (VAR_2[3])
    : "0" (VAR_0), "c" (VAR_1) );
}
