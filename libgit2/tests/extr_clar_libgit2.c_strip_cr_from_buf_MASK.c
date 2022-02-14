
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static size_t FUNC_0(char *VAR_0, size_t VAR_1)
{
 char *VAR_2, *VAR_3, *VAR_4 = VAR_0 + VAR_1;

 for (VAR_2 = VAR_3 = VAR_0; VAR_2 < VAR_4; VAR_3++, VAR_2++) {
  while (*VAR_2 == '\r')
   VAR_2++;

  if (VAR_3 != VAR_2)
   *VAR_3 = *VAR_2;
 }

 *VAR_3 = '\0';

 return (VAR_3 - VAR_0);
}
