
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree_cache ;
typedef int git_pool ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int **,char const**,char const*,int *) ;

int FUNC_2(git_tree_cache **VAR_1, const char *VAR_2, size_t VAR_3, git_pool *VAR_4)
{
 const char *VAR_5 = VAR_2 + VAR_3;

 if (FUNC_1(VAR_1, &VAR_2, VAR_5, VAR_4) < 0)
  return -1;

 if (VAR_2 < VAR_5) {
  FUNC_0(VAR_0, "corrupted TREE extension in index (unexpected trailing data)");
  return -1;
 }

 return 0;
}
