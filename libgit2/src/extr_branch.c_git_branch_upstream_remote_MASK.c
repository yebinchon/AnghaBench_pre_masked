
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_config ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int **,int *) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int *,int *,char const*,char*) ;

int FUNC_8(git_buf *VAR_2, git_repository *VAR_3, const char *VAR_4)
{
 int VAR_5;
 git_config *VAR_6;

 if (!FUNC_4(VAR_4))
  return FUNC_6(VAR_4);

 if ((VAR_5 = FUNC_5(&VAR_6, VAR_3)) < 0)
  return VAR_5;

 FUNC_2(VAR_2);

 if ((VAR_5 = FUNC_7(VAR_2, VAR_6, VAR_4, "branch.%s.remote")) < 0)
  return VAR_5;

 if (FUNC_1(VAR_2) == 0) {
  FUNC_3(VAR_1, "branch '%s' does not have an upstream remote", VAR_4);
  VAR_5 = VAR_0;
  FUNC_0(VAR_2);
 }

 return VAR_5;
}
