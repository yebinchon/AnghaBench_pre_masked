
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sbits64 ;
typedef int int16 ;
typedef scalar_t__ float64 ;
typedef int flag ;
typedef int bits64 ;
typedef int bits16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int,int*) ;

__attribute__((used)) static float64 FUNC_5(flag VAR_4, int16 VAR_5, bits64 VAR_6)
{
 flag VAR_7;
 int16 VAR_8, VAR_9;
 flag VAR_10;


 VAR_7 = (FUNC_2() == VAR_3);
 VAR_8 = 0x200;
 if (!VAR_7) {
  VAR_8 = 0;
 }
 VAR_9 = VAR_6 & 0x3FF;
 if (0x7FD <= (bits16) VAR_5) {
  if ((0x7FD < VAR_5)
      || ((VAR_5 == 0x7FD)
   && ((sbits64) (VAR_6 + VAR_8) < 0))
      ) {
   FUNC_1(VAR_1 | VAR_0);
   return FUNC_3(VAR_4, 0x7FF,
        0) - (VAR_8 == 0);
  }
  if (VAR_5 < 0) {
   VAR_10 = (VAR_5 < -1)
       || (VAR_6 + VAR_8 <
    FUNC_0(0x8000000000000000));
   FUNC_4(VAR_6, -VAR_5, &VAR_6);
   VAR_5 = 0;
   VAR_9 = VAR_6 & 0x3FF;
   if (VAR_10 && VAR_9)
    FUNC_1(VAR_2);
  }
 }
 if (VAR_9)
  FUNC_1(VAR_0);
 VAR_6 = (VAR_6 + VAR_8) >> 10;
 VAR_6 &= ~(((VAR_9 ^ 0x200) == 0) & VAR_7);
 if (VAR_6 == 0)
  VAR_5 = 0;
 return FUNC_3(VAR_4, VAR_5, VAR_6);

}
