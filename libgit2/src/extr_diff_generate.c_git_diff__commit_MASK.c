
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_repository ;
typedef int git_diff_options ;
typedef int git_diff ;
typedef int const git_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const**,int const*,int ) ;
 size_t FUNC_3 (int const*) ;
 int FUNC_4 (int **,int const*) ;
 int FUNC_5 (int **,int *,int *,int *,int const*) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (char*,int,int ) ;
 int FUNC_8 (int *) ;

int FUNC_9(
 git_diff **VAR_2,
 git_repository *VAR_3,
 const git_commit *VAR_4,
 const git_diff_options *VAR_5)
{
 git_commit *VAR_6 = ((void*)0);
 git_diff *VAR_7 = ((void*)0);
 git_tree *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
 size_t VAR_10;
 int VAR_11 = 0;

 *VAR_2 = ((void*)0);

 if ((VAR_10 = FUNC_3(VAR_4)) > 1) {
  char VAR_12[VAR_1 + 1];

  VAR_11 = -1;
  FUNC_6(VAR_0, "commit %s is a merge commit",
   FUNC_7(VAR_12, VAR_1 + 1, FUNC_1(VAR_4)));
  goto on_error;
 }

 if (VAR_10 > 0)
  if ((VAR_11 = FUNC_2(&VAR_6, VAR_4, 0)) < 0 ||
   (VAR_11 = FUNC_4(&VAR_8, VAR_6)) < 0)
    goto on_error;

 if ((VAR_11 = FUNC_4(&VAR_9, VAR_4)) < 0 ||
  (VAR_11 = FUNC_5(&VAR_7, VAR_3, VAR_8, VAR_9, VAR_5)) < 0)
   goto on_error;

 *VAR_2 = VAR_7;

on_error:
 FUNC_8(VAR_9);
 FUNC_8(VAR_8);
 FUNC_0(VAR_6);

 return VAR_11;
}
