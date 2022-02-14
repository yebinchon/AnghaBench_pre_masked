
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*) ;

void FUNC_2 (char *VAR_0, const char *VAR_1)
{
 char *VAR_2;




 VAR_2 = VAR_0 + FUNC_1(VAR_0) - 1;

 while (*VAR_2 != '/' && *VAR_2 != '\\' && VAR_2 != VAR_0)
 {
  if (*VAR_2 == '.')
   return;
  VAR_2--;
 }

 FUNC_0 (VAR_0, VAR_1);
}
