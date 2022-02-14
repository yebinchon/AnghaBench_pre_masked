
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (char*,char) ;

char *
FUNC_1(char *VAR_0, char *VAR_1)
{
 char *VAR_2, *VAR_3, *VAR_4;
 int VAR_5;

 VAR_2 = VAR_0;
 for (;;) {
  if (*VAR_2 == '\0')
   return (((void*)0));
  if (*VAR_2 == '(') {
   int VAR_6 = 0;

   while (*VAR_2 != '\0') {
    switch (*VAR_2++) {
    case '(':
     VAR_6++;
     break;
    case ')':
     --VAR_6;
     break;
    }
    if (VAR_6 <= 0)
     break;
   }
  } else if (*VAR_2 == ' ' || *VAR_2 == '\t' || *VAR_2 == ',')
   VAR_2++;
  else
   break;
 }







 VAR_4 = VAR_2;
 VAR_5 = 0;





 while(*VAR_2 != '\0' && FUNC_0("@%!", *(VAR_2 + 1)) == ((void*)0))
  VAR_2++;





 while(VAR_2 != VAR_4 && FUNC_0(" \t,<>", *(VAR_2 - 1)) == ((void*)0)) {
  VAR_5++;
  VAR_2--;
 }


 VAR_3 = VAR_1;
 while(VAR_5 >= 0) {
  *VAR_3++=*VAR_2++;
  VAR_5--;
 }

 *VAR_3 = '\0';
 return (VAR_2);
}
