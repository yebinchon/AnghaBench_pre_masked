
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(u8 *VAR_0, u32 VAR_1, u32 VAR_2)
{
 u8 *VAR_3 = VAR_0, *VAR_4 = VAR_0;
 int VAR_5, VAR_6, VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  for (VAR_6 = 0; VAR_6 < VAR_1 / 8; VAR_6++) {
   u8 VAR_8 = 0x00;

   for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
    int VAR_9 = VAR_6 * 8 + VAR_7;

    VAR_8 >>= 1;
    if (VAR_3[VAR_5 * VAR_1 + VAR_9] >> 7)
     VAR_8 |= FUNC_0(7);
   }
   *VAR_4++ = VAR_8;
  }
}
