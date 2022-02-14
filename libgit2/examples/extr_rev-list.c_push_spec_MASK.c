
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_revwalk ;
typedef int git_repository ;
typedef int git_object ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int *,char const*) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int FUNC_4(git_repository *VAR_0, git_revwalk *VAR_1, const char *VAR_2, int VAR_3)
{
 int VAR_4;
 git_object *VAR_5;

 if ((VAR_4 = FUNC_2(&VAR_5, VAR_0, VAR_2)) < 0)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_1, FUNC_1(VAR_5), VAR_3);
 FUNC_0(VAR_5);
 return VAR_4;
}
