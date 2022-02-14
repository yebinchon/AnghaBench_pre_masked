
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*,char const**) ;
 char* FUNC_1 (char const*,char) ;

int FUNC_2(const char *VAR_0, const char **VAR_1,
         int *VAR_2, const char **VAR_3)
{
 if (FUNC_0(VAR_0, "main-worktree/", &VAR_0)) {
  if (!*VAR_0)
   return -1;
  if (VAR_1)
   *VAR_1 = ((void*)0);
  if (VAR_2)
   *VAR_2 = 0;
  if (VAR_3)
   *VAR_3 = VAR_0;
  return 0;
 }
 if (FUNC_0(VAR_0, "worktrees/", &VAR_0)) {
  const char *VAR_4 = FUNC_1(VAR_0, '/');

  if (!VAR_4 || VAR_4 == VAR_0 || !VAR_4[1])
   return -1;
  if (VAR_1)
   *VAR_1 = VAR_0;
  if (VAR_2)
   *VAR_2 = VAR_4 - VAR_0;
  if (VAR_3)
   *VAR_3 = VAR_4 + 1;
  return 0;
 }
 return -1;
}
