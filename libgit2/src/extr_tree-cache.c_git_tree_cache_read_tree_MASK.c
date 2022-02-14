
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree_cache ;
typedef int git_tree ;
typedef int git_pool ;


 int FUNC_0 (int **,char*,int *) ;
 int FUNC_1 (int *,int const*,int *) ;

int FUNC_2(git_tree_cache **VAR_0, const git_tree *VAR_1, git_pool *VAR_2)
{
 int VAR_3;
 git_tree_cache *VAR_4;

 if ((VAR_3 = FUNC_0(&VAR_4, "", VAR_2)) < 0)
  return VAR_3;

 if ((VAR_3 = FUNC_1(VAR_4, VAR_1, VAR_2)) < 0)
  return VAR_3;

 *VAR_0 = VAR_4;
 return 0;
}
