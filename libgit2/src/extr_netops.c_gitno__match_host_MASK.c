
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (char const) ;

int FUNC_1(const char *VAR_0, const char *VAR_1)
{
 for (;;) {
  char VAR_2 = FUNC_0(*VAR_0++);

  if (VAR_2 == '\0')
   return *VAR_1 ? -1 : 0;

  if (VAR_2 == '*') {
   VAR_2 = *VAR_0;

   if (VAR_2 == '\0')
    return 0;







   while(*VAR_1) {
    char VAR_3 = FUNC_0(*VAR_1);
    if (VAR_2 == VAR_3)
     return FUNC_1(VAR_0, VAR_1++);
    if (VAR_3 == '.')
     return FUNC_1(VAR_0, VAR_1);
    VAR_1++;
   }
   return -1;
  }

  if (VAR_2 != FUNC_0(*VAR_1++))
   return -1;
 }

 return -1;
}
