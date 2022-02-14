
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(int VAR_16, bool VAR_17)
{
 u32 VAR_18 = 0;

 if (VAR_17) {

  if ((VAR_16 == 2) || (VAR_16 == 3))
   FUNC_2(VAR_5 << (VAR_16 - 2),
           VAR_15 + VAR_14);
  FUNC_1(100);


  FUNC_2(0x01 << VAR_16, VAR_15 + VAR_7);


  VAR_18 = VAR_0 | VAR_2
   | VAR_3;
  FUNC_2(VAR_18 << VAR_16, VAR_15 + VAR_8);

  VAR_18 |= VAR_1;
  FUNC_2(VAR_18 << VAR_16, VAR_15 + VAR_9);


  if ((VAR_16 == 2) || (VAR_16 == 3))
   FUNC_2(VAR_5 << (VAR_16 - 2),
           VAR_15 + VAR_10);
  FUNC_1(1);


  VAR_18 = FUNC_0(VAR_15 + VAR_12);
  VAR_18 &= ~(VAR_4 << VAR_16);
  FUNC_2(VAR_18, VAR_15 + VAR_12);


  VAR_18 = VAR_0 | VAR_2
   | VAR_3 | VAR_1;
  FUNC_2(VAR_18 << VAR_16, VAR_15 + VAR_8);
 } else {

  VAR_18 = FUNC_0(VAR_15 + VAR_12);
  VAR_18 |= (VAR_4 << VAR_16);
  FUNC_2(VAR_18, VAR_15 + VAR_12);


  FUNC_2(0x01 << VAR_16, VAR_15 + VAR_6);

  if ((VAR_16 == 2) || (VAR_16 == 3)) {

   FUNC_2(VAR_5 << (VAR_16 - 2),
           VAR_15 + VAR_11);
   FUNC_1(1);
  }


  VAR_18 = VAR_0 | VAR_2
   | VAR_3 | VAR_1;
  FUNC_2(VAR_18 << VAR_16, VAR_15 + VAR_9);

  if ((VAR_16 == 2) || (VAR_16 == 3)) {

   FUNC_2(VAR_5 << (VAR_16 - 2),
           VAR_15 + VAR_13);
   FUNC_1(100);
  }
 }
}
