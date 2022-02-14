
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_0, const u8 *VAR_1, int VAR_2,
  int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = 0;
 u8 VAR_8[64];
 u8 *VAR_9 = VAR_0 + (VAR_4 * 4 + VAR_3) * 64;

 if (VAR_2 == 1) {
  for (VAR_6 = 7; VAR_6 >= 0; VAR_6--) {
   const u8 *VAR_10 = VAR_1 + VAR_4 * 256 + VAR_3 * 8 + VAR_6 * 32;
   for (VAR_5 = 0; VAR_5 < 64; VAR_5++) {
    VAR_8[VAR_5] <<= 1;
    VAR_8[VAR_5] |= (VAR_10[VAR_5/8] >> (VAR_5 % 8)) & 0x01;
   }
  }
 } else if (VAR_2 == 8) {
  for (VAR_6 = 7; VAR_6 >= 0; VAR_6--) {
   const u8 *VAR_11 = VAR_1 + (VAR_4 * 256 + VAR_3 * 8 + VAR_6 * 32) * 8;
   for (VAR_5 = 0; VAR_5 < 64; VAR_5++) {
    VAR_8[VAR_5] <<= 1;
    VAR_8[VAR_5] |= (VAR_11[VAR_5] & 0x80) ? 0x01 : 0x00;
   }
  }
 } else {

  FUNC_0(1);
  return 0;
 }

 for (VAR_5 = 0; VAR_5 < 64; VAR_5++)
  if (VAR_8[VAR_5] != VAR_9[VAR_5]) {
   VAR_7 = 1;
   VAR_9[VAR_5] = VAR_8[VAR_5];
  }
 return VAR_7;
}
