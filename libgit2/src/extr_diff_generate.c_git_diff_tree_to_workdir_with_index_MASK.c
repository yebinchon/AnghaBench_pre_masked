
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_repository ;
typedef int git_index ;
typedef int git_diff_options ;
typedef int git_diff ;


 int FUNC_0 (int) ;
 int FUNC_1 (int **,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,int *,int const*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int **,int *,int *,int *,int const*) ;

int FUNC_6(
 git_diff **VAR_0,
 git_repository *VAR_1,
 git_tree *VAR_2,
 const git_diff_options *VAR_3)
{
 git_diff *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 git_index *VAR_6 = ((void*)0);
 int VAR_7 = 0;

 FUNC_0(VAR_0 && VAR_1);

 *VAR_0 = ((void*)0);

 if ((VAR_7 = FUNC_1(&VAR_6, VAR_1)) < 0)
  return VAR_7;

 if (!(VAR_7 = FUNC_5(&VAR_4, VAR_1, VAR_2, VAR_6, VAR_3)) &&
  !(VAR_7 = FUNC_3(&VAR_5, VAR_1, VAR_6, VAR_3)))
  VAR_7 = FUNC_4(VAR_4, VAR_5);

 FUNC_2(VAR_5);

 if (VAR_7) {
  FUNC_2(VAR_4);
  VAR_4 = ((void*)0);
 }

 *VAR_0 = VAR_4;
 return VAR_7;
}
