
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;

__attribute__((used)) static size_t FUNC_1(char *VAR_0)
{
 char *VAR_1, *VAR_2 = VAR_0;
 bool VAR_3 = 0;

 if (!VAR_0)
  return 0;

 for (VAR_1 = VAR_0; *VAR_1; VAR_1++) {
  if (!VAR_3 && *VAR_1 == '\\') {
   VAR_3 = 1;
   continue;
  }


  if (VAR_3 && !FUNC_0(*VAR_1))
   *VAR_2++ = '\\';

  *VAR_2++ = *VAR_1;
  VAR_3 = 0;
 }

 if (VAR_2 != VAR_1)
  *VAR_2 = '\0';

 return (VAR_2 - VAR_0);
}
