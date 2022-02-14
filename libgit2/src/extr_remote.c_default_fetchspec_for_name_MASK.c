
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 scalar_t__ FUNC_0 (int *,char*,char const*) ;

__attribute__((used)) static int FUNC_1(git_buf *VAR_0, const char *VAR_1)
{
 if (FUNC_0(VAR_0, "+refs/heads/*:refs/remotes/%s/*", VAR_1) < 0)
  return -1;

 return 0;
}
