
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned int,unsigned int) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 unsigned int FUNC_2 () ;
 unsigned int FUNC_3 () ;
 unsigned int FUNC_4 () ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_7(unsigned int VAR_15)
{
 unsigned int VAR_16 = 0, VAR_17 = 0, VAR_18;


 if (VAR_12)
  FUNC_1(VAR_2,
       (VAR_15 - 1) << VAR_3);
 if (VAR_13) {
  VAR_16 = FUNC_4();
  if (VAR_14 || (VAR_16 & VAR_5) ==
      VAR_7) {
   VAR_16 &= ~VAR_10;
   VAR_16 |= ((VAR_15 - 1) >> VAR_4) <<
    VAR_11;
  } else if ((VAR_16 & VAR_5) ==
      VAR_6) {
   VAR_16 &= ~VAR_8;
   VAR_16 |= ((VAR_15 - 1) >> VAR_4) <<
    VAR_9;
  }
  FUNC_5(VAR_16);
 }






 if (VAR_14) {
  VAR_18 = (FUNC_2() & VAR_0) >>
      VAR_1;
  if (VAR_15 - 1 <= VAR_18)
   VAR_18 = 0;
  FUNC_6(VAR_18 << VAR_1);
 }


 FUNC_0();
 if (VAR_12)
  VAR_17 = (FUNC_3() & VAR_2) >>
      VAR_3;
 if (VAR_16) {
  if (VAR_14 || (VAR_16 & VAR_5) ==
      VAR_7)
   VAR_17 |= ((VAR_16 & VAR_10) >>
    VAR_11) <<
    VAR_4;
  else if ((VAR_16 & VAR_5) ==
    VAR_6)
   VAR_17 |= ((VAR_16 & VAR_8) >>
    VAR_9) <<
    VAR_4;
 }
 return VAR_17 + 1;
}
