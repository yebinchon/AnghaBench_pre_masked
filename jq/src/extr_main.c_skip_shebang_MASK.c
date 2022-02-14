
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_0) {
  if (FUNC_1(VAR_0, "#!", sizeof("#!") - 1) != 0)
    return VAR_0;
  const char *VAR_1 = FUNC_0(VAR_0, '\n');
  if (VAR_1 == ((void*)0) || VAR_1[1] != '#')
    return VAR_0;
  VAR_1 = FUNC_0(VAR_1 + 1, '\n');
  if (VAR_1 == ((void*)0) || VAR_1[1] == '#' || VAR_1[1] == '\0' || VAR_1[-1] != '\\' || VAR_1[-2] == '\\')
    return VAR_0;
  VAR_1 = FUNC_0(VAR_1 + 1, '\n');
  if (VAR_1 == ((void*)0))
    return VAR_0;
  return VAR_1+1;
}
