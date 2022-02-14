
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int* VAR_7 ;

__attribute__((used)) static void FUNC_3(unsigned char *VAR_8,
           const unsigned char *VAR_9,
           unsigned int VAR_10)
{
 u32 VAR_11;
 u32 VAR_12[VAR_3];
 int VAR_13, VAR_14, VAR_15;
 u8 VAR_16, VAR_17;

 switch (VAR_10) {
 case 130:
  VAR_17 = VAR_0;
  VAR_16 = VAR_4;
  break;
 case 129:
  VAR_17 = VAR_1;
  VAR_16 = VAR_5;
  break;
 case 128:
  VAR_17 = VAR_2;
  VAR_16 = VAR_6;
  break;
 default:
  return;
 }
 for (VAR_13 = 0; VAR_13 < VAR_17; VAR_13++)
  VAR_12[VAR_13] = FUNC_1(*(u32 *)&VAR_9[4 * VAR_13]);

 VAR_13 = 0;
 VAR_11 = VAR_12[VAR_17 - 1];
 while (VAR_13 + VAR_17 < (VAR_16 + 1) * 4) {
  if (!(VAR_13 % VAR_17)) {

   VAR_11 = (VAR_11 << 8) | (VAR_11 >> 24);
   VAR_11 = FUNC_0(VAR_11);
   VAR_11 ^= VAR_7[VAR_13 / VAR_17];
  } else if (VAR_17 == 8 && (VAR_13 % 4 == 0)) {
   VAR_11 = FUNC_0(VAR_11);
  }
  VAR_12[VAR_13 % VAR_17] ^= VAR_11;
  VAR_11 = VAR_12[VAR_13 % VAR_17];
  VAR_13++;
 }
 VAR_13--;
 for (VAR_15 = 0, VAR_14 = VAR_13 % VAR_17; VAR_15 < VAR_17; VAR_15++) {
  *((u32 *)VAR_8 + VAR_15) = FUNC_2(VAR_12[VAR_14]);
  VAR_14--;
  if (VAR_14 < 0)
   VAR_14 += VAR_17;
 }
}
