
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*,int ) ;
 char* VAR_0 ;
 char* FUNC_2 (char*) ;

int
FUNC_3(char *VAR_1)
{
 char *VAR_2 = VAR_0;

 for (;;) {
  VAR_2 = FUNC_2(VAR_2);
  if (!*VAR_2)
   return (0);
  if (FUNC_1(VAR_2, VAR_1, FUNC_0(VAR_1)) == 0) {
   VAR_2 += FUNC_0(VAR_1);
   if (!*VAR_2 || *VAR_2 == ':')
    return (1);
   else if (*VAR_2 == '@')
    return (0);
  }
 }
}
