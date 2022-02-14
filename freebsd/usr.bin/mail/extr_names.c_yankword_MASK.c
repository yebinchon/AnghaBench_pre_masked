
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (char*,char) ;

char *
FUNC_1(char *VAR_0, char *VAR_1)
{
 char *VAR_2, *VAR_3;

 VAR_2 = VAR_0;
 for (;;) {
  if (*VAR_2 == '\0')
   return (((void*)0));
  if (*VAR_2 == '(') {
   int VAR_4 = 0;

   while (*VAR_2 != '\0') {
    switch (*VAR_2++) {
    case '(':
     VAR_4++;
     break;
    case ')':
     --VAR_4;
     break;
    }
    if (VAR_4 <= 0)
     break;
   }
  } else if (*VAR_2 == ' ' || *VAR_2 == '\t' || *VAR_2 == ',')
   VAR_2++;
  else
   break;
 }
 if (*VAR_2 == '<')
  for (VAR_3 = VAR_1; *VAR_2 && (*VAR_3++ = *VAR_2++) != '>';)
   ;
 else
  for (VAR_3 = VAR_1; *VAR_2 != '\0' && FUNC_0(" \t,(", *VAR_2) == ((void*)0);
      *VAR_3++ = *VAR_2++)
   ;
 *VAR_3 = '\0';
 return (VAR_2);
}
