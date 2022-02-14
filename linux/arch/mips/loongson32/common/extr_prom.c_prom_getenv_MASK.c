
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;

char *FUNC_2(char *VAR_1)
{
 char **VAR_2 = VAR_0;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1);

 while (*VAR_2) {
  if (FUNC_1(VAR_1, *VAR_2, VAR_3) == 0 && *(*VAR_2 + VAR_3) == '=')
   return *VAR_2 + VAR_3 + 1;
  VAR_2++;
 }

 return 0;
}
