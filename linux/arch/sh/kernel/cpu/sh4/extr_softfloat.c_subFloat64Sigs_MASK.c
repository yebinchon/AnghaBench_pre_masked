
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16 ;
typedef int float64 ;
typedef int flag ;
typedef int bits64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int,int,int) ;
 int FUNC_5 (int,int,int ) ;
 int FUNC_6 (int,int,int*) ;

__attribute__((used)) static float64 FUNC_7(float64 VAR_1, float64 VAR_2, flag VAR_3)
{
 int16 VAR_4, VAR_5, VAR_6;
 bits64 VAR_7, VAR_8, VAR_9;
 int16 VAR_10;

 VAR_7 = FUNC_2(VAR_1);
 VAR_4 = FUNC_1(VAR_1);
 VAR_8 = FUNC_2(VAR_2);
 VAR_5 = FUNC_1(VAR_2);
 VAR_10 = VAR_4 - VAR_5;
 VAR_7 <<= 10;
 VAR_8 <<= 10;
 if (0 < VAR_10)
  goto aExpBigger;
 if (VAR_10 < 0)
  goto bExpBigger;
 if (VAR_4 == 0) {
  VAR_4 = 1;
  VAR_5 = 1;
 }
 if (VAR_8 < VAR_7)
  goto aBigger;
 if (VAR_7 < VAR_8)
  goto bBigger;
 return FUNC_5(FUNC_3() == VAR_0, 0, 0);
      bExpBigger:
 if (VAR_5 == 0x7FF) {
  return FUNC_5(VAR_3 ^ 1, 0x7FF, 0);
 }
 if (VAR_4 == 0) {
  ++VAR_10;
 } else {
  VAR_7 |= FUNC_0(0x4000000000000000);
 }
 FUNC_6(VAR_7, -VAR_10, &VAR_7);
 VAR_8 |= FUNC_0(0x4000000000000000);
      bBigger:
 VAR_9 = VAR_8 - VAR_7;
 VAR_6 = VAR_5;
 VAR_3 ^= 1;
 goto normalizeRoundAndPack;
      aExpBigger:
 if (VAR_4 == 0x7FF) {
  return VAR_1;
 }
 if (VAR_5 == 0) {
  --VAR_10;
 } else {
  VAR_8 |= FUNC_0(0x4000000000000000);
 }
 FUNC_6(VAR_8, VAR_10, &VAR_8);
 VAR_7 |= FUNC_0(0x4000000000000000);
      aBigger:
 VAR_9 = VAR_7 - VAR_8;
 VAR_6 = VAR_4;
      normalizeRoundAndPack:
 --VAR_6;
 return FUNC_4(VAR_3, VAR_6, VAR_9);

}
