
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;

__attribute__((used)) static size_t FUNC_2(const char *VAR_0,
          const char *VAR_1,
          size_t VAR_2)
{
 if (!VAR_0 || !VAR_1)
  return 0;
 if (!VAR_2 || (VAR_2 == 1 && *VAR_1 == '/'))
  return (!*VAR_0 || *VAR_0 == '/') ? 1 : 0;
 if (VAR_1[VAR_2 - 1] == '/')
  VAR_2--;
 if (FUNC_1(VAR_0, VAR_1, VAR_2))
  return 0;
 if ((FUNC_0(VAR_0) == VAR_2) || (VAR_0[VAR_2] == '/'))
  return VAR_2 + 1;
 return 0;
}
