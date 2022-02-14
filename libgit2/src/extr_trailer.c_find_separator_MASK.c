
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,char const) ;

__attribute__((used)) static bool FUNC_2(size_t *VAR_0, const char *VAR_1, const char *VAR_2)
{
 int VAR_3 = 0;
 const char *VAR_4;
 for (VAR_4 = VAR_1; *VAR_4; VAR_4++) {
  if (FUNC_1(VAR_2, *VAR_4)) {
   *VAR_0 = VAR_4 - VAR_1;
   return 1;
  }

  if (!VAR_3 && (FUNC_0(*VAR_4) || *VAR_4 == '-'))
   continue;
  if (VAR_4 != VAR_1 && (*VAR_4 == ' ' || *VAR_4 == '\t')) {
   VAR_3 = 1;
   continue;
  }
  break;
 }
 return 0;
}
