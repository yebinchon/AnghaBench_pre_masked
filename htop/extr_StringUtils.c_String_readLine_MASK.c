
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (int *) ;
 char* FUNC_1 (char*,int const,int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (int const) ;
 char* FUNC_5 (char*,int) ;

char* FUNC_6(FILE* VAR_0) {
   const int VAR_1 = 1024;
   int VAR_2 = VAR_1;
   char* VAR_3 = FUNC_4(VAR_1 + 1);
   char* VAR_4 = VAR_3;
   for (;;) {
      char* VAR_5 = FUNC_1(VAR_4, VAR_1 + 1, VAR_0);
      if (!VAR_5) {
         FUNC_2(VAR_3);
         return ((void*)0);
      }
      char* VAR_6 = FUNC_3(VAR_4, '\n');
      if (VAR_6) {
         *VAR_6 = '\0';
         return VAR_3;
      } else {
         if (FUNC_0(VAR_0)) {
            return VAR_3;
         }
      }
      VAR_2 += VAR_1;
      VAR_3 = FUNC_5(VAR_3, VAR_2 + 1);
      VAR_4 = VAR_3 + VAR_2 - VAR_1;
   }
}
