
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sbits32 ;
typedef int int16 ;
typedef int float32 ;
typedef int flag ;
typedef int bits32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int,int,int*) ;

__attribute__((used)) static float32 FUNC_5(float32 VAR_0, float32 VAR_1, flag VAR_2)
{
 int16 VAR_3, VAR_4, VAR_5;
 bits32 VAR_6, VAR_7, VAR_8;
 int16 VAR_9;

 VAR_6 = FUNC_1(VAR_0);
 VAR_3 = FUNC_0(VAR_0);
 VAR_7 = FUNC_1(VAR_1);
 VAR_4 = FUNC_0(VAR_1);
 VAR_9 = VAR_3 - VAR_4;
 VAR_6 <<= 6;
 VAR_7 <<= 6;
 if (0 < VAR_9) {
  if (VAR_3 == 0xFF) {
   return VAR_0;
  }
  if (VAR_4 == 0) {
   --VAR_9;
  } else {
   VAR_7 |= 0x20000000;
  }
  FUNC_4(VAR_7, VAR_9, &VAR_7);
  VAR_5 = VAR_3;
 } else if (VAR_9 < 0) {
  if (VAR_4 == 0xFF) {
   return FUNC_2(VAR_2, 0xFF, 0);
  }
  if (VAR_3 == 0) {
   ++VAR_9;
  } else {
   VAR_6 |= 0x20000000;
  }
  FUNC_4(VAR_6, -VAR_9, &VAR_6);
  VAR_5 = VAR_4;
 } else {
  if (VAR_3 == 0xFF) {
   return VAR_0;
  }
  if (VAR_3 == 0)
   return FUNC_2(VAR_2, 0, (VAR_6 + VAR_7) >> 6);
  VAR_8 = 0x40000000 + VAR_6 + VAR_7;
  VAR_5 = VAR_3;
  goto roundAndPack;
 }
 VAR_6 |= 0x20000000;
 VAR_8 = (VAR_6 + VAR_7) << 1;
 --VAR_5;
 if ((sbits32) VAR_8 < 0) {
  VAR_8 = VAR_6 + VAR_7;
  ++VAR_5;
 }
      roundAndPack:
 return FUNC_3(VAR_2, VAR_5, VAR_8);

}
