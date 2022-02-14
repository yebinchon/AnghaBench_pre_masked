
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(char **VAR_0)
{
 char *VAR_1 = *VAR_0;
 char *VAR_2;

 while (FUNC_0(*VAR_1))
  VAR_1++;
 if (*VAR_1 != '\0') {
  VAR_2 = VAR_1 + FUNC_1(VAR_1) - 1;
  while (VAR_2 > VAR_1 && FUNC_0(*VAR_2))
   VAR_2--;
  *(VAR_2+1) = 0;
 }

 *VAR_0 = VAR_1;
}
