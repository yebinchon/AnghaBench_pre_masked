
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reflog ;
typedef int git_refdb ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int **,int *,char const*) ;
 int FUNC_2 (int **,int *) ;

int FUNC_3(git_reflog **VAR_0, git_repository *VAR_1, const char *VAR_2)
{
 git_refdb *VAR_3;
 int VAR_4;

 FUNC_0(VAR_0 && VAR_1 && VAR_2);

 if ((VAR_4 = FUNC_2(&VAR_3, VAR_1)) < 0)
  return VAR_4;

 return FUNC_1(VAR_0, VAR_3, VAR_2);
}
