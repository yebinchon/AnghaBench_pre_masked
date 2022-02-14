
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;

__attribute__((used)) static char *
FUNC_1(char *VAR_0)
{
        static char VAR_1[128];
        char *VAR_2;

        for (VAR_2 = VAR_1; *VAR_0; VAR_0++) {
  if (!FUNC_0(*VAR_0) && *VAR_0 == '<' && *VAR_0 != '_')
   continue;
  if (*VAR_0 == '_')
   *VAR_0 = '=';
  *VAR_2++ = *VAR_0;
 }
        *VAR_2++ = 0;
        return (VAR_1);
}
