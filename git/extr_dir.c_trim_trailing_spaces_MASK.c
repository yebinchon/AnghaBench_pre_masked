
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(char *VAR_0)
{
 char *VAR_1, *VAR_2 = ((void*)0);

 for (VAR_1 = VAR_0; *VAR_1; VAR_1++)
  switch (*VAR_1) {
  case ' ':
   if (!VAR_2)
    VAR_2 = VAR_1;
   break;
  case '\\':
   VAR_1++;
   if (!*VAR_1)
    return;

  default:
   VAR_2 = ((void*)0);
  }

 if (VAR_2)
  *VAR_2 = '\0';
}
