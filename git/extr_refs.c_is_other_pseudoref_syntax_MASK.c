
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char*,char const**) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0)
{
 if (!FUNC_1(VAR_0, "worktrees/", &VAR_0))
  return 0;
 VAR_0 = FUNC_2(VAR_0, '/');
 if (!VAR_0 || !VAR_0[1])
  return 0;
 return FUNC_0(VAR_0 + 1);
}
