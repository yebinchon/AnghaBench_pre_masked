
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static void FUNC_0(u8 VAR_0, u32 *VAR_1, u32 *VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5;

 VAR_4 = 8;
 VAR_5 = 0;
 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  if ((VAR_0 & (1 << VAR_3)) != 0) {
   if (VAR_4 > VAR_3)
    VAR_4 = VAR_3;
   if (VAR_5 < VAR_3)
    VAR_5 = VAR_3;
  }
 }

 *VAR_1 = VAR_4;
 *VAR_2 = VAR_5;
}
