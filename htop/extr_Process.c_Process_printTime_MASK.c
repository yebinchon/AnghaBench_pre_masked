
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RichString ;


 int * VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (char*,int,char*,int,...) ;

void FUNC_2(RichString* VAR_3, unsigned long long VAR_4) {
   unsigned long long VAR_5 = VAR_4 / 100;

   unsigned long long VAR_6 = VAR_5 / 3600;
   int VAR_7 = (VAR_5 / 60) % 60;
   int VAR_8 = VAR_5 % 60;
   int VAR_9 = VAR_4 - (VAR_5 * 100);
   char VAR_10[11];
   if (VAR_6 >= 100) {
      FUNC_1(VAR_10, 10, "%7lluh ", VAR_6);
      FUNC_0(VAR_3, VAR_0[VAR_2], VAR_10);
   } else {
      if (VAR_6) {
         FUNC_1(VAR_10, 10, "%2lluh", VAR_6);
         FUNC_0(VAR_3, VAR_0[VAR_2], VAR_10);
         FUNC_1(VAR_10, 10, "%02d:%02d ", VAR_7, VAR_8);
      } else {
         FUNC_1(VAR_10, 10, "%2d:%02d.%02d ", VAR_7, VAR_8, VAR_9);
      }
      FUNC_0(VAR_3, VAR_0[VAR_1], VAR_10);
   }
}
