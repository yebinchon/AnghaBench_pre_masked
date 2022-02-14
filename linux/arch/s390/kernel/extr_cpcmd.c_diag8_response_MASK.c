
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long addr_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1, char *VAR_2, int *VAR_3)
{
 register unsigned long VAR_4 asm ("2") = (addr_t) VAR_0;
 register unsigned long VAR_5 asm ("3") = (addr_t) VAR_2;
 register unsigned long VAR_6 asm ("4") = VAR_1 | 0x40000000L;
 register unsigned long VAR_7 asm ("5") = *VAR_3;

 asm volatile(
  "	diag	%2,%0,0x8\n"
  "	brc	8,1f\n"
  "	agr	%1,%4\n"
  "1:\n"
  : "+d" (VAR_6), "+d" (VAR_7)
  : "d" (VAR_4), "d" (VAR_5), "d" (*VAR_3) : "cc");
 *VAR_3 = VAR_7;
 return VAR_6;
}
