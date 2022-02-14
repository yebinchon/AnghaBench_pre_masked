
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int) ;
 int VAR_13 ;
 int VAR_14 ;

void
FUNC_3(void)
{
 static int VAR_15 = 0;
 int VAR_16 = 0, VAR_17 = 0;
 int VAR_18 = 0, VAR_19 = 0;


 if ((VAR_11 & VAR_0) == 0 ||
     (VAR_11 & VAR_1) == 0) {

  VAR_14 = 0;
  return;
 }


 if (VAR_10 & VAR_2) {

  VAR_16 = VAR_5;
  VAR_17 = VAR_6;
 } else if (VAR_10 & VAR_3) {




  VAR_16 = VAR_7;
 } else {

  if (VAR_13 == VAR_7) {
   if (VAR_9)
    FUNC_1("TSX control not available\n");
   return;
  } else
   VAR_16 = VAR_8;
 }


 if (VAR_13 == VAR_4)
  VAR_17 = VAR_16;
 else
  VAR_17 = VAR_13;


 if (VAR_17 == VAR_14) {
  if (VAR_9)
   FUNC_1("No TSX change made\n");
  return;
 }


 if (VAR_17 == VAR_7)
  FUNC_2(1, 1);
 else if (VAR_14 == VAR_7)
  FUNC_2(0, 1);


 if (VAR_17 == VAR_8) {
  VAR_15 = VAR_12;
  VAR_18 = VAR_12 = 1;
  VAR_19 = 1;
 } else if (VAR_14 == VAR_8) {
  VAR_18 = VAR_12 = VAR_15;
  VAR_19 = 1;
 }
 if (VAR_19) {
  FUNC_0();
  if (VAR_18 != VAR_12) {
   if (VAR_9)
    FUNC_1("Cannot change MDS state for TAA\n");

   return;
  }
 }

 VAR_14 = VAR_17;
 return;
}
