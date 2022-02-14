
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*,int ) ;
 char* VAR_0 ;
 char* FUNC_2 (char*,char**) ;
 char* FUNC_3 (char*) ;

char *
FUNC_4(char *VAR_1, char **VAR_2)
{
 char *VAR_3 = VAR_0;

 for (;;) {
  VAR_3 = FUNC_3(VAR_3);
  if (!*VAR_3)
   return (0);
  if (FUNC_1(VAR_3, VAR_1, FUNC_0(VAR_1)) != 0)
   continue;
  VAR_3 += FUNC_0(VAR_1);
  if (*VAR_3 == '@')
   return (0);
  if (*VAR_3 != '=')
   continue;
  VAR_3++;
  return (FUNC_2(VAR_3, VAR_2));
 }
}
