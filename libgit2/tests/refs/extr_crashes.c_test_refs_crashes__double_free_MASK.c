
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;
typedef int git_reference ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,char const*) ;
 int FUNC_7 (int **,int *,char const*,char*,int ,int *) ;

void FUNC_8(void)
{
 git_repository *VAR_0;
 git_reference *VAR_1, *VAR_2;
 const char *VAR_3 = "refs/heads/xxx";

 VAR_0 = FUNC_3("testrepo.git");
 FUNC_1(FUNC_7(&VAR_1, VAR_0, VAR_3, "refs/heads/master", 0, ((void*)0)));
 FUNC_1(FUNC_6(&VAR_2, VAR_0, VAR_3));
 FUNC_1(FUNC_4(VAR_1));
 FUNC_5(VAR_1);
 FUNC_5(VAR_2);


 FUNC_0(FUNC_6(&VAR_2, VAR_0, VAR_3));

 FUNC_2();
}
