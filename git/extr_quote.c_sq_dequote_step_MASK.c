
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 int FUNC_1 (char) ;

__attribute__((used)) static char *FUNC_2(char *VAR_0, char **VAR_1)
{
 char *VAR_2 = VAR_0;
 char *VAR_3 = VAR_0;
 char VAR_4;

 if (*VAR_3 != '\'')
  return ((void*)0);
 for (;;) {
  VAR_4 = *++VAR_3;
  if (!VAR_4)
   return ((void*)0);
  if (VAR_4 != '\'') {
   *VAR_2++ = VAR_4;
   continue;
  }

  switch (*++VAR_3) {
  case '\0':
   *VAR_2 = 0;
   if (VAR_1)
    *VAR_1 = ((void*)0);
   return VAR_0;
  case '\\':






   if (FUNC_1(VAR_3[1]) && VAR_3[2] == '\'') {
    *VAR_2++ = VAR_3[1];
    VAR_3 += 2;
    continue;
   }

  default:
   if (!VAR_1 || !FUNC_0(*VAR_3))
    return ((void*)0);
   do {
    VAR_4 = *++VAR_3;
   } while (FUNC_0(VAR_4));
   *VAR_2 = 0;
   *VAR_1 = VAR_3;
   return VAR_0;
  }
 }
}
