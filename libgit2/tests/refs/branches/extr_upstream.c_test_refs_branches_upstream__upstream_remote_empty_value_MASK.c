
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_config ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *,int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,char*) ;
 int FUNC_7 (int **,int *) ;

void FUNC_8(void)
{
 git_repository *VAR_2;
 git_config *VAR_3;
 git_buf VAR_4 = VAR_0;

 VAR_2 = FUNC_3("testrepo.git");
 FUNC_1(FUNC_7(&VAR_3, VAR_2));
 FUNC_1(FUNC_6(VAR_3, "branch.master.remote", ""));
 FUNC_0(VAR_1, FUNC_4(&VAR_4, VAR_2, "refs/heads/master"));

 FUNC_1(FUNC_5(VAR_3, "branch.master.remote"));
 FUNC_0(VAR_1, FUNC_4(&VAR_4, VAR_2, "refs/heads/master"));
 FUNC_2();
}
