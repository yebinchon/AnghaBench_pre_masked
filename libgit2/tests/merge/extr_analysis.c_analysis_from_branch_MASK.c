
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_merge_preference_t ;
typedef int git_merge_analysis_t ;
typedef int git_buf ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int ,char const*) ;
 int FUNC_6 (int *,int *,int ,int *,int const**,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_9(
 git_merge_analysis_t *VAR_4,
 git_merge_preference_t *VAR_5,
 const char *VAR_6,
 const char *VAR_7)
{
 git_buf VAR_8 = VAR_0;
 git_buf VAR_9 = VAR_0;
 git_reference *VAR_10;
 git_reference *VAR_11;
 git_annotated_commit *VAR_12;

 if (VAR_6 != ((void*)0)) {
  FUNC_0(FUNC_5(&VAR_8, "%s%s", VAR_2, VAR_6));
  FUNC_0(FUNC_8(&VAR_10, VAR_3, FUNC_3(&VAR_8)));
 } else {
  FUNC_0(FUNC_8(&VAR_10, VAR_3, VAR_1));
 }

 FUNC_0(FUNC_5(&VAR_9, "%s%s", VAR_2, VAR_7));

 FUNC_0(FUNC_8(&VAR_11, VAR_3, FUNC_3(&VAR_9)));
 FUNC_0(FUNC_2(&VAR_12, VAR_3, VAR_11));

 FUNC_0(FUNC_6(VAR_4, VAR_5, VAR_3, VAR_10, (const git_annotated_commit **)&VAR_12, 1));

 FUNC_4(&VAR_8);
 FUNC_4(&VAR_9);
 FUNC_1(VAR_12);
 FUNC_7(VAR_10);
 FUNC_7(VAR_11);
}
