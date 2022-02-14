
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_merge_options ;
typedef int git_index ;
typedef int git_commit ;
typedef int git_annotated_commit ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **,int *) ;
 int FUNC_2 (int **,int **,int *,int *,int *,int ,int const*) ;

int FUNC_3(
 git_index **VAR_0,
 git_repository *VAR_1,
 const git_commit *VAR_2,
 const git_commit *VAR_3,
 const git_merge_options *VAR_4)
{
 git_annotated_commit *VAR_5 = ((void*)0), *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 if ((VAR_8 = FUNC_1(&VAR_5, (git_commit *)VAR_2)) < 0 ||
  (VAR_8 = FUNC_1(&VAR_6, (git_commit *)VAR_3)) < 0)
  goto done;

 VAR_8 = FUNC_2(VAR_0, &VAR_7, VAR_1, VAR_5, VAR_6, 0, VAR_4);

done:
 FUNC_0(VAR_5);
 FUNC_0(VAR_6);
 FUNC_0(VAR_7);
 return VAR_8;
}
