
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char const*) ;

char*
FUNC_1(char *VAR_0, char *VAR_1, const char *VAR_2)
{
 char *VAR_3 = VAR_1;

 *VAR_3 = 0;
 if (FUNC_0(VAR_0, VAR_2) != 0) {
  *VAR_3 = ':';
  return (0);
 }
 *VAR_3 = ':';
 for (VAR_3++; *VAR_3 == ' ' || *VAR_3 == '\t'; VAR_3++)
  ;
 return (VAR_3);
}
