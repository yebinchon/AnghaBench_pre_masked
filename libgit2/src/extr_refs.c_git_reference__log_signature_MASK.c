
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_signature ;
typedef int git_repository ;


 int FUNC_0 (int **,int *) ;
 int FUNC_1 (int **,int *) ;
 int FUNC_2 (int **,char*,char*) ;

int FUNC_3(git_signature **VAR_0, git_repository *VAR_1)
{
 int VAR_2;
 git_signature *VAR_3;

 if(((VAR_2 = FUNC_0(&VAR_3, VAR_1)) < 0) &&
    ((VAR_2 = FUNC_1(&VAR_3, VAR_1)) < 0) &&
    ((VAR_2 = FUNC_2(&VAR_3, "unknown", "unknown")) < 0))
  return VAR_2;

 *VAR_0 = VAR_3;
 return 0;
}
