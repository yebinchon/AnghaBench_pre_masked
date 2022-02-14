
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int* VAR_0 ;

__attribute__((used)) static u8 FUNC_0(u32 VAR_1, u32 VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;
 int VAR_5;
 u8 VAR_6 = 0;
 int VAR_7;
 int VAR_8;

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  VAR_4 = VAR_0[VAR_7 * 2];
  VAR_3 = VAR_0[VAR_7 * 2 + 1];
  VAR_5 = 0;

  for (VAR_8 = 0; VAR_8 < 32; VAR_8++) {
   if ((VAR_4 >> VAR_8) & 1)
    VAR_5 ^= (VAR_1 >> VAR_8) & 1;
   if ((VAR_3 >> VAR_8) & 1)
    VAR_5 ^= (VAR_2 >> VAR_8) & 1;
  }

  VAR_6 |= VAR_5 << VAR_7;
 }

 return VAR_6;
}
