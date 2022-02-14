
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;
typedef int git_object ;
typedef int git_commit ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int ) ;
 int FUNC_7 (int **,int *) ;

void FUNC_8(void)
{
 git_reference *VAR_1;
 git_repository *VAR_2;
 git_commit *VAR_3;

 VAR_2 = FUNC_3("testrepo.git");

 FUNC_1(FUNC_7(&VAR_1, VAR_2));
 FUNC_1(FUNC_6(((git_object **)&VAR_3), VAR_1, VAR_0));
 FUNC_5(VAR_1);

 FUNC_0(VAR_2, VAR_3, "remoteless");
 FUNC_0(VAR_2, VAR_3, "mergeless");
 FUNC_0(VAR_2, VAR_3, "mergeandremoteless");

 FUNC_4(VAR_3);

 FUNC_2();
}
