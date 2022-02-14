
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_index ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int **,int *,int *) ;

__attribute__((used)) static int FUNC_2(
 git_tree **VAR_0,
 git_repository *VAR_1,
 git_index *VAR_2)
{
 int VAR_3;
 git_oid VAR_4;

 if ((VAR_3 = FUNC_0(&VAR_4, VAR_2, VAR_1)) < 0)
  return VAR_3;

 return FUNC_1(VAR_0, VAR_1, &VAR_4);
}
