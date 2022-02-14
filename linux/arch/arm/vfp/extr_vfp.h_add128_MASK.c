
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;



__attribute__((used)) static inline void FUNC_0(u64 *VAR_0, u64 *VAR_1, u64 VAR_2, u64 VAR_3, u64 VAR_4, u64 VAR_5)
{
 asm( "adds	%Q0, %Q2, %Q4\n\t"
  "adcs	%R0, %R2, %R4\n\t"
  "adcs	%Q1, %Q3, %Q5\n\t"
  "adc	%R1, %R3, %R5"
     : "=r" (VAR_3), "=r" (VAR_2)
     : "0" (VAR_3), "1" (VAR_2), "r" (VAR_5), "r" (VAR_4)
     : "cc");
 *VAR_0 = VAR_2;
 *VAR_1 = VAR_3;
}
