
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(char *VAR_0, char *VAR_1)
{
 int VAR_2;

 if (VAR_0 == ((void*)0)) {
  *VAR_1 = '\0';
  return (((void*)0));
 }
 while ((VAR_2 = *VAR_0++) != '\0' && VAR_2 != ' ' && VAR_2 != '\t') {
  *VAR_1++ = VAR_2;
  if (VAR_2 == '"') {
    while ((VAR_2 = *VAR_0++) != '\0' && VAR_2 != '"')
     *VAR_1++ = VAR_2;
    if (VAR_2 == '"')
     *VAR_1++ = VAR_2;
   else
    VAR_0--;
   }
 }
 *VAR_1 = '\0';
 for (; VAR_2 == ' ' || VAR_2 == '\t'; VAR_2 = *VAR_0++)
  ;
 if (VAR_2 == '\0')
  return (((void*)0));
 return (VAR_0 - 1);
}
