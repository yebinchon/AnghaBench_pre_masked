
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int ACPresence ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 double VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (double*,int *) ;
 int FUNC_1 (double*,int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(double* VAR_8, ACPresence* VAR_9) {
   time_t VAR_10 = FUNC_2(((void*)0));

   if (VAR_10 < VAR_6 + 10) {
      *VAR_8 = VAR_5;
      *VAR_9 = VAR_4;
      return;
   }

   if (VAR_7 == VAR_2) {
      FUNC_0(VAR_8, VAR_9);
      if (*VAR_8 == 0) {
         VAR_7 = VAR_3;
      }
   }
   if (VAR_7 == VAR_3) {
      FUNC_1(VAR_8, VAR_9);
      if (*VAR_8 == 0) {
         VAR_7 = VAR_1;
      }
   }
   if (VAR_7 == VAR_1) {
      *VAR_8 = -1;
      *VAR_9 = VAR_0;
   }
   if (*VAR_8 > 100.0) {
      *VAR_8 = 100.0;
   }
   VAR_5 = *VAR_8;
   VAR_4 = *VAR_9;
   VAR_6 = VAR_10;
}
