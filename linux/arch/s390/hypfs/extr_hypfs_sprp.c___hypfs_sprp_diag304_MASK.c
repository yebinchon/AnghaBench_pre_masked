
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline unsigned long FUNC_0(void *VAR_0, unsigned long VAR_1)
{
 register unsigned long VAR_2 asm("2") = (unsigned long) VAR_0;
 register unsigned long VAR_3 asm("3");
 register unsigned long VAR_4 asm("4") = VAR_1;

 asm volatile("diag %1,%2,0x304\n"
       : "=d" (VAR_3) : "d" (VAR_2), "d" (VAR_4) : "memory");

 return VAR_3;
}
