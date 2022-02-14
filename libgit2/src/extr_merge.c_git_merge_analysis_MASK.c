
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_merge_preference_t ;
typedef int git_merge_analysis_t ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int *,int *,int *,int const**,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,int ) ;

int FUNC_4(
 git_merge_analysis_t *VAR_2,
 git_merge_preference_t *VAR_3,
 git_repository *VAR_4,
 const git_annotated_commit **VAR_5,
 size_t VAR_6)
{
 git_reference *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 if ((VAR_8 = FUNC_3(&VAR_7, VAR_4, VAR_1)) < 0) {
  FUNC_0(VAR_0, "failed to lookup HEAD reference");
  return VAR_8;
 }

 VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_7, VAR_5, VAR_6);

 FUNC_2(VAR_7);

 return VAR_8;
}
