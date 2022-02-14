
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u16 ;



__attribute__((used)) static bool FUNC_0(u16 *VAR_0, size_t VAR_1)
{
 int VAR_2, VAR_3;
 uint16_t VAR_4 = 0, VAR_5 = VAR_0[7] & 0x000F;

 VAR_0[7] &= 0xFF00;

 for (VAR_2 = 0; VAR_2 < VAR_1 * 2; VAR_2++) {
  if (VAR_2 % 2 == 1)
   VAR_4 ^= VAR_0[VAR_2 >> 1] & 0x00FF;
  else
   VAR_4 ^= VAR_0[VAR_2 >> 1] >> 8;

  for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
   if (VAR_4 & 0x8000)
    VAR_4 = (VAR_4 << 1) ^ 0x3000;
   else
    VAR_4 <<= 1;
  }
 }

 VAR_4 = (VAR_4 >> 12) & 0x000F;

 return VAR_5 != 0x0000 && VAR_4 == VAR_5;
}
