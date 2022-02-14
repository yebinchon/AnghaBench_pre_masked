
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_repository ;
typedef int git_iterator_options ;
typedef int git_iterator ;
typedef int git_index ;
typedef int git_diff_options ;
typedef int git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char**,int *,int ,int *,int ,int const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int **,int *,int *,int *,int const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,int *) ;
 int FUNC_6 (int **,int *,int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *) ;

int FUNC_9(
 git_diff **VAR_2,
 git_repository *VAR_3,
 git_tree *VAR_4,
 const git_diff_options *VAR_5)
{
 git_iterator_options VAR_6 = VAR_1,
  VAR_7 = VAR_1;
 git_iterator *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 git_diff *VAR_10 = ((void*)0);
 char *VAR_11 = ((void*)0);
 git_index *VAR_12;
 int VAR_13;

 FUNC_0(VAR_2 && VAR_3);

 *VAR_2 = ((void*)0);

 if ((VAR_13 = FUNC_1(&VAR_11, &VAR_6, 0,
      &VAR_7, VAR_0, VAR_5) < 0) ||
     (VAR_13 = FUNC_8(&VAR_12, VAR_3)) < 0 ||
     (VAR_13 = FUNC_5(&VAR_8, VAR_4, &VAR_6)) < 0 ||
     (VAR_13 = FUNC_6(&VAR_9, VAR_3, VAR_12, VAR_4, &VAR_7)) < 0 ||
     (VAR_13 = FUNC_3(&VAR_10, VAR_3, VAR_8, VAR_9, VAR_5)) < 0)
  goto out;

 *VAR_2 = VAR_10;
 VAR_10 = ((void*)0);
out:
 FUNC_7(VAR_8);
 FUNC_7(VAR_9);
 FUNC_4(VAR_10);
 FUNC_2(VAR_11);

 return VAR_13;
}
