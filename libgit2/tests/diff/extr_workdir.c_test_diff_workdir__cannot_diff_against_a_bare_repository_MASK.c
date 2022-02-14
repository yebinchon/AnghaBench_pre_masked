
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_diff_options ;
typedef int git_diff ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (int **,int ,int *,int *) ;
 int FUNC_4 (int **,int ,int *,int *) ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (int *) ;

void FUNC_7(void)
{
 git_diff_options VAR_3 = VAR_0;
 git_diff *VAR_4 = ((void*)0);
 git_tree *VAR_5;

 VAR_2 = FUNC_2("testrepo.git");

 FUNC_0(
  VAR_1, FUNC_3(&VAR_4, VAR_2, ((void*)0), &VAR_3));

 FUNC_1(FUNC_5(&VAR_5, VAR_2));

 FUNC_0(
  VAR_1, FUNC_4(&VAR_4, VAR_2, VAR_5, &VAR_3));

 FUNC_6(VAR_5);
}
