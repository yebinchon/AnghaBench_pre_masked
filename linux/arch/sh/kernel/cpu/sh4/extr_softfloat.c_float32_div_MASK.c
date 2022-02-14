
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int int16 ;
typedef int float32 ;
typedef int flag ;
typedef int bits64 ;
typedef int bits32 ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int*,int*) ;
 int FUNC_5 (int,int,int ) ;
 int FUNC_6 (int,int,int) ;

float32 FUNC_7(float32 VAR_0, float32 VAR_1)
{
 flag VAR_2, VAR_3, VAR_4;
 int16 VAR_5, VAR_6, VAR_7;
 bits32 VAR_8, VAR_9;
 uint64_t VAR_10;

 VAR_8 = FUNC_2(VAR_0);
 VAR_5 = FUNC_1(VAR_0);
 VAR_2 = FUNC_3(VAR_0);
 VAR_9 = FUNC_2(VAR_1);
 VAR_6 = FUNC_1(VAR_1);
 VAR_3 = FUNC_3(VAR_1);
 VAR_4 = VAR_2 ^ VAR_3;
 if (VAR_5 == 0xFF) {
  if (VAR_6 == 0xFF) {
  }
  return FUNC_5(VAR_4, 0xFF, 0);
 }
 if (VAR_6 == 0xFF) {
  return FUNC_5(VAR_4, 0, 0);
 }
 if (VAR_6 == 0) {
  if (VAR_9 == 0) {
   return FUNC_5(VAR_4, 0xFF, 0);
  }
  FUNC_4(VAR_9, &VAR_6, &VAR_9);
 }
 if (VAR_5 == 0) {
  if (VAR_8 == 0)
   return FUNC_5(VAR_4, 0, 0);
  FUNC_4(VAR_8, &VAR_5, &VAR_8);
 }
 VAR_7 = VAR_5 - VAR_6 + 0x7D;
 VAR_8 = (VAR_8 | 0x00800000) << 7;
 VAR_9 = (VAR_9 | 0x00800000) << 8;
 if (VAR_9 <= (VAR_8 + VAR_8)) {
  VAR_8 >>= 1;
  ++VAR_7;
 }
 VAR_10 = (((bits64) VAR_8) << 32);
 FUNC_0(VAR_10, VAR_9);

 if ((VAR_10 & 0x3F) == 0) {
  VAR_10 |= (((bits64) VAR_9) * VAR_10 != ((bits64) VAR_8) << 32);
 }
 return FUNC_6(VAR_4, VAR_7, (bits32)VAR_10);

}
