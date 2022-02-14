
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_signature ;
typedef int git_repository ;
typedef int git_config ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char const**,int *,char*) ;
 int FUNC_2 (int **,int *) ;
 int FUNC_3 (int **,char const*,char const*) ;

int FUNC_4(git_signature **VAR_0, git_repository *VAR_1)
{
 int VAR_2;
 git_config *VAR_3;
 const char *VAR_4, *VAR_5;

 if ((VAR_2 = FUNC_2(&VAR_3, VAR_1)) < 0)
  return VAR_2;

 if (!(VAR_2 = FUNC_1(&VAR_4, VAR_3, "user.name")) &&
  !(VAR_2 = FUNC_1(&VAR_5, VAR_3, "user.email")))
  VAR_2 = FUNC_3(VAR_0, VAR_4, VAR_5);

 FUNC_0(VAR_3);
 return VAR_2;
}
