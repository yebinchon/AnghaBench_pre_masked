
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



void FUNC_0(u32 VAR_0, u32 VAR_1, u32 VAR_2,
       u32 *VAR_3, u32 *VAR_4)
{
 u32 VAR_5 = 0;
 u32 VAR_6;
 u32 VAR_7;

 VAR_6 = (VAR_0 * VAR_1) / 100;
 VAR_7 = VAR_6 >> VAR_2;

 while (VAR_7) {
  VAR_5++;
  VAR_7 >>= 1;
 }

 *VAR_4 = (VAR_5 + 1) / 2;
 *VAR_3 = VAR_6 / (1 << (2 * (*VAR_4)));
}
