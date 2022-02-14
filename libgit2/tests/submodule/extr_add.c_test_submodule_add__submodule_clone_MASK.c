
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_submodule ;
typedef int git_signature ;
typedef int git_oid ;
typedef int git_index ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (int *,int ,char*,int *,int *,int *,char*,int *,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,char*,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int ,int ,char*,int) ;
 int FUNC_12 (int *,int *,int *) ;
 int FUNC_13 (int *) ;

void FUNC_14(void)
{
 git_oid VAR_1, VAR_2;
 git_signature *VAR_3;
 git_submodule *VAR_4;
 git_index *VAR_5;

 VAR_0 = FUNC_3("empty_standard_repo");


 FUNC_2(FUNC_11(&VAR_4, VAR_0, FUNC_1("testrepo.git"), "testrepo-add", 1));
 FUNC_2(FUNC_12(((void*)0), VAR_4, ((void*)0)));
 FUNC_2(FUNC_10(VAR_4));


 FUNC_2(FUNC_7(&VAR_5, VAR_0));
 FUNC_2(FUNC_6(&VAR_1, VAR_5));
 FUNC_2(FUNC_9(&VAR_3, "Submoduler", "submoduler@local"));
 FUNC_2(FUNC_4(&VAR_2, VAR_0, "HEAD", VAR_3, VAR_3, ((void*)0), "A submodule\n",
            &VAR_1, 0, ((void*)0)));

 FUNC_0(VAR_0, "testrepo-add");

 FUNC_8(VAR_3);
 FUNC_13(VAR_4);
 FUNC_5(VAR_5);
}
