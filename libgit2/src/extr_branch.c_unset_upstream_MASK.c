
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char*,char const*) ;
 scalar_t__ FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(git_config *VAR_1, const char *VAR_2)
{
 git_buf VAR_3 = VAR_0;

 if (FUNC_3(&VAR_3, "branch.%s.remote", VAR_2) < 0)
  return -1;

 if (FUNC_4(VAR_1, FUNC_1(&VAR_3)) < 0)
  goto on_error;

 FUNC_0(&VAR_3);
 if (FUNC_3(&VAR_3, "branch.%s.merge", VAR_2) < 0)
  goto on_error;

 if (FUNC_4(VAR_1, FUNC_1(&VAR_3)) < 0)
  goto on_error;

 FUNC_2(&VAR_3);
 return 0;

on_error:
 FUNC_2(&VAR_3);
 return -1;
}
