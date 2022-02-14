
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tsd_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (int *,scalar_t__) ;
 scalar_t__ VAR_7 ;

tsd_t *
FUNC_10(tsd_t *VAR_8, bool VAR_9) {
 FUNC_0(!FUNC_4(VAR_8));

 if (FUNC_8(VAR_8) == VAR_4) {






 } else if (FUNC_8(VAR_8) == VAR_3) {
  FUNC_7(VAR_8);
 } else if (FUNC_8(VAR_8) == VAR_7) {
  if (!VAR_9) {
   if (VAR_0) {
    FUNC_9(VAR_8, VAR_2);
    FUNC_7(VAR_8);

    FUNC_6(VAR_8);
    FUNC_2(VAR_8);
   }
  } else {
   FUNC_9(VAR_8, VAR_1);
   FUNC_6(VAR_8);
   FUNC_3(VAR_8);
  }
 } else if (FUNC_8(VAR_8) == VAR_1) {
  if (!VAR_9) {

   FUNC_9(VAR_8, VAR_2);
   FUNC_0(*FUNC_5(VAR_8) >= 1);
   (*FUNC_5(VAR_8))--;
   FUNC_7(VAR_8);
   FUNC_2(VAR_8);
  } else {
   FUNC_1(VAR_8);
  }
 } else if (FUNC_8(VAR_8) == VAR_5) {
  FUNC_9(VAR_8, VAR_6);
  FUNC_6(VAR_8);
  FUNC_3(VAR_8);
 } else {
  FUNC_0(FUNC_8(VAR_8) == VAR_6);
 }

 return VAR_8;
}
