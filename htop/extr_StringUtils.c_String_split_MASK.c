
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*,char const*,int) ;
 char** FUNC_3 (int const,int) ;
 char* FUNC_4 (int) ;
 char** FUNC_5 (char**,int) ;

char** FUNC_6(const char* VAR_0, char VAR_1, int* VAR_2) {
   *VAR_2 = 0;
   const int VAR_3 = 10;
   char** VAR_4 = FUNC_3(VAR_3, sizeof(char*));
   int VAR_5 = 0;
   int VAR_6 = VAR_3;
   char* VAR_7;
   while ((VAR_7 = FUNC_0(VAR_0, VAR_1)) != ((void*)0)) {
      int VAR_8 = VAR_7 - VAR_0;
      char* VAR_9 = FUNC_4(VAR_8 + 1);
      FUNC_2(VAR_9, VAR_0, VAR_8);
      VAR_9[VAR_8] = '\0';
      VAR_4[VAR_5] = VAR_9;
      VAR_5++;
      if (VAR_5 == VAR_6) {
         VAR_6 += VAR_3;
         VAR_4 = (char**) FUNC_5(VAR_4, sizeof(char*) * VAR_6);
      }
      VAR_0 += VAR_8 + 1;
   }
   if (VAR_0[0] != '\0') {
      int VAR_10 = FUNC_1(VAR_0);
      char* VAR_11 = FUNC_4(VAR_10 + 1);
      FUNC_2(VAR_11, VAR_0, VAR_10 + 1);
      VAR_4[VAR_5] = VAR_11;
      VAR_5++;
   }
   VAR_4 = FUNC_5(VAR_4, sizeof(char*) * (VAR_5 + 1));
   VAR_4[VAR_5] = ((void*)0);
   *VAR_2 = VAR_5;
   return VAR_4;
}
