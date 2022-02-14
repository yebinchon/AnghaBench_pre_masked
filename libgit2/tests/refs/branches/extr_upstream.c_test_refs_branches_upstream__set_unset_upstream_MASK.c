
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,char*) ;

void FUNC_8(void)
{
 git_reference *VAR_0;
 git_repository *VAR_1;

 VAR_1 = FUNC_4("testrepo.git");


 FUNC_2(FUNC_7(&VAR_0, VAR_1, "refs/heads/test"));
 FUNC_2(FUNC_5(VAR_0, "test/master"));

 FUNC_1(VAR_1, "branch.test.remote", "test");
 FUNC_1(VAR_1, "branch.test.merge", "refs/heads/master");

 FUNC_6(VAR_0);


 FUNC_2(FUNC_7(&VAR_0, VAR_1, "refs/heads/test"));
 FUNC_2(FUNC_5(VAR_0, "master"));

 FUNC_1(VAR_1, "branch.test.remote", ".");
 FUNC_1(VAR_1, "branch.test.merge", "refs/heads/master");


 FUNC_2(FUNC_5(VAR_0, ((void*)0)));
 FUNC_0(VAR_1, "branch.test.remote", 0);
 FUNC_0(VAR_1, "branch.test.merge", 0);

 FUNC_6(VAR_0);

 FUNC_2(FUNC_7(&VAR_0, VAR_1, "refs/heads/master"));
 FUNC_2(FUNC_5(VAR_0, ((void*)0)));
 FUNC_0(VAR_1, "branch.test.remote", 0);
 FUNC_0(VAR_1, "branch.test.merge", 0);

 FUNC_6(VAR_0);

 FUNC_3();
}
