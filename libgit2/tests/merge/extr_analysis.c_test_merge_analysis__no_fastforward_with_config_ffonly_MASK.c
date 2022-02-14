
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_merge_preference_t ;
typedef int git_merge_analysis_t ;
typedef int git_config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int*,int *,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (int **,int ) ;
 int VAR_3 ;

void FUNC_6(void)
{
 git_config *VAR_4;
 git_merge_analysis_t VAR_5;
 git_merge_preference_t VAR_6;

 FUNC_2(FUNC_5(&VAR_4, VAR_3));
 FUNC_2(FUNC_4(VAR_4, "merge.ff", "only"));

 FUNC_0(&VAR_5, &VAR_6, ((void*)0), VAR_2);
 FUNC_1(VAR_0, VAR_5);

 FUNC_1(VAR_1, (VAR_6 & VAR_1));

 FUNC_3(VAR_4);
}
