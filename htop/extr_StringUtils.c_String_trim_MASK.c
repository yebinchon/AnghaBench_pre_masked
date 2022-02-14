
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (int) ;

char* FUNC_3(const char* VAR_0) {
   while (VAR_0[0] == ' ' || VAR_0[0] == '\t' || VAR_0[0] == '\n') {
      VAR_0++;
   }
   int VAR_1 = FUNC_0(VAR_0);
   while (VAR_1 > 0 && (VAR_0[VAR_1-1] == ' ' || VAR_0[VAR_1-1] == '\t' || VAR_0[VAR_1-1] == '\n')) {
      VAR_1--;
   }
   char* VAR_2 = FUNC_2(VAR_1+1);
   FUNC_1(VAR_2, VAR_0, VAR_1);
   VAR_2[VAR_1] = '\0';
   return VAR_2;
}
