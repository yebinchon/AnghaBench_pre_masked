
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0)
{
 return !FUNC_1(VAR_0, "HEAD") ||
  FUNC_0(VAR_0, "refs/worktree/") ||
  FUNC_0(VAR_0, "refs/bisect/") ||
  FUNC_0(VAR_0, "refs/rewritten/");
}
