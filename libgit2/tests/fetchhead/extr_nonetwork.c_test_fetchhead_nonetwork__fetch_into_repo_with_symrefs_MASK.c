
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_remote ;
typedef int git_reference ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int *,char*,char*,int ,int *) ;
 int FUNC_6 (int *,int *,int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,char*) ;
 int FUNC_9 (int *,char*,int ) ;

void FUNC_10(void)
{
 git_repository *VAR_0;
 git_remote *VAR_1;
 git_reference *VAR_2;

 VAR_0 = FUNC_3("empty_standard_repo");





 FUNC_1(FUNC_5(&VAR_2, VAR_0, "refs/heads/symref", "refs/heads/master", 0, ((void*)0)));

 FUNC_1(FUNC_9(VAR_0, "origin", FUNC_0("testrepo.git")));
 FUNC_1(FUNC_8(&VAR_1, VAR_0, "origin"));
 FUNC_1(FUNC_6(VAR_1, ((void*)0), ((void*)0), ((void*)0)));

 FUNC_7(VAR_1);
 FUNC_4(VAR_2);
 FUNC_2();
}
