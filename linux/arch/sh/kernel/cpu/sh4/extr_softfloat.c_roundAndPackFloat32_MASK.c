
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sbits32 ;
typedef int int8 ;
typedef int int16 ;
typedef scalar_t__ float32 ;
typedef int flag ;
typedef int bits32 ;
typedef int bits16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int,int*) ;

__attribute__((used)) static float32 FUNC_4(flag VAR_4, int16 VAR_5, bits32 VAR_6)
{
 flag VAR_7;
 int8 VAR_8, VAR_9;
 flag VAR_10;


 VAR_7 = (FUNC_1() == VAR_3);
 VAR_8 = 0x40;
 if (!VAR_7) {
  VAR_8 = 0;
 }
 VAR_9 = VAR_6 & 0x7F;
 if (0xFD <= (bits16) VAR_5) {
  if ((0xFD < VAR_5)
      || ((VAR_5 == 0xFD)
   && ((sbits32) (VAR_6 + VAR_8) < 0))
      ) {
   FUNC_0(VAR_1 | VAR_0);
   return FUNC_2(VAR_4, 0xFF,
        0) - (VAR_8 == 0);
  }
  if (VAR_5 < 0) {
   VAR_10 = (VAR_5 < -1)
       || (VAR_6 + VAR_8 < 0x80000000);
   FUNC_3(VAR_6, -VAR_5, &VAR_6);
   VAR_5 = 0;
   VAR_9 = VAR_6 & 0x7F;
   if (VAR_10 && VAR_9)
    FUNC_0(VAR_2);
  }
 }
 if (VAR_9)
  FUNC_0(VAR_0);
 VAR_6 = (VAR_6 + VAR_8) >> 7;
 VAR_6 &= ~(((VAR_9 ^ 0x40) == 0) & VAR_7);
 if (VAR_6 == 0)
  VAR_5 = 0;
 return FUNC_2(VAR_4, VAR_5, VAR_6);

}
