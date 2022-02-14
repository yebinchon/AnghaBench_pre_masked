
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char**) ;

char *FUNC_2 (char *VAR_0)
{
 const char *VAR_1;

 if (VAR_0)
  FUNC_1(&VAR_0);

 if (!VAR_0 || !*VAR_0)
  return ".";

 for (VAR_1 = VAR_0; *VAR_0; VAR_0++) {
  if (!FUNC_0(*VAR_0))
   continue;
  do {
   VAR_0++;
  } while (FUNC_0(*VAR_0));
  if (*VAR_0)
   VAR_1 = VAR_0;
  else
   while (--VAR_0 != VAR_1 && FUNC_0(*VAR_0))
    *VAR_0 = '\0';
 }
 return (char *)VAR_1;
}
