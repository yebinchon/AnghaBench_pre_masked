
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 char* FUNC_4 (char**,char*) ;

int
FUNC_5(int VAR_0, const char **VAR_1)
{
 char *VAR_2;
 int VAR_3, VAR_4 = 0, VAR_5 = 0;

 for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++)
  VAR_5 += FUNC_3(VAR_1[VAR_3]) + 1;
 char VAR_6[VAR_5], *VAR_7 = VAR_6;
 FUNC_2(VAR_7, VAR_1[1]);
 for (VAR_3 = 2; VAR_3 < VAR_0; VAR_3++) {
  FUNC_1(VAR_7, " ");
  FUNC_1(VAR_7, VAR_1[VAR_3]);
 }

 while ((VAR_2 = FUNC_4(&VAR_7, ";")) != ((void*)0)) {
  VAR_4 = FUNC_0(VAR_2);
  if (VAR_4 != 0)
   return (VAR_4);
 }

 return (0);
}
