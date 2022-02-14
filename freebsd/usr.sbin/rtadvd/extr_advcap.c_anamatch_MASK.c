
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;

int
FUNC_0(char *VAR_1)
{
 char *VAR_2, *VAR_3;

 VAR_3 = VAR_0;
 if (*VAR_3 == '#')
  return (0);
 for (;;) {
  for (VAR_2 = VAR_1; *VAR_2 && *VAR_3 == *VAR_2; VAR_3++, VAR_2++)
   continue;
  if (*VAR_2 == 0 && (*VAR_3 == '|' || *VAR_3 == ':' || *VAR_3 == 0))
   return (1);
  while (*VAR_3 && *VAR_3 != ':' && *VAR_3 != '|')
   VAR_3++;
  if (*VAR_3 == 0 || *VAR_3 == ':')
   return (0);
  VAR_3++;
 }
}
