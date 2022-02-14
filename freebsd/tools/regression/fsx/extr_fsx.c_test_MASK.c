
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long,unsigned long) ;
 long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (char*,scalar_t__) ;
 int VAR_12 ;
 int FUNC_9 () ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_10 () ;

void
FUNC_11(void)
{
 unsigned long VAR_18;
 unsigned long VAR_19 = VAR_11;
 unsigned long VAR_20 = FUNC_9();
 unsigned long VAR_21 = VAR_20 % (3 + !VAR_7 + VAR_9);



 if (VAR_21 == 2 && !VAR_8)
     VAR_21 = 0;

 if (VAR_14 > 0 && VAR_17 == VAR_14)
  FUNC_10();

 VAR_17++;

 if (VAR_1)
  VAR_0 = (VAR_20 >> 3) < (1 << 28) / VAR_1;
 if (VAR_6)
  VAR_5 = (VAR_20 >> 3) < (1 << 28) / VAR_6;

 if (VAR_3 > 0 && VAR_17 >= VAR_3)
  VAR_2 = 1;

 if (!VAR_12 && VAR_17 < VAR_14 && VAR_17 % 100000 == 0)
  FUNC_8("%lu...\n", VAR_17);
 if (VAR_7 ? 0 : VAR_21 == 3 && VAR_16 == 0)
  FUNC_6(FUNC_9() % VAR_10);
 else {
  if (VAR_13)
   VAR_19 = FUNC_9() % (VAR_11+1);
  if (VAR_7 ? 0 : VAR_21 == 3)
   FUNC_6(VAR_19);
  else {
   VAR_18 = FUNC_9();
   if (VAR_21 == 1 || VAR_21 == (VAR_7 ? 3 : 4)) {
    VAR_18 %= VAR_10;
    if (VAR_18 + VAR_19 > VAR_10)
     VAR_19 = VAR_10 - VAR_18;
    if (VAR_21 != 1)
     FUNC_4(VAR_18, VAR_19);
    else
     FUNC_7(VAR_18, VAR_19);
   } else {
    if (VAR_4)
     VAR_18 %= VAR_4;
    else
     VAR_18 = 0;
    if (VAR_18 + VAR_19 > VAR_4)
     VAR_19 = VAR_4 - VAR_18;
    if (VAR_21 != 0)
     FUNC_3(VAR_18, VAR_19);
    else
     FUNC_5(VAR_18, VAR_19);
   }
  }
 }
 if (VAR_15 && VAR_17 > VAR_14)
  FUNC_0();
 if (VAR_5)
  FUNC_2();
 if (VAR_0)
  FUNC_1();
}
