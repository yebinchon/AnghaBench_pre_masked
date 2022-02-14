
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_oid ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int **,int ,char*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,char*,int ) ;
 int FUNC_9 (int *,int const*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;
 int VAR_2 ;
 int FUNC_13 (int *,int ) ;
 int VAR_3 ;

void FUNC_14(void)
{
 const git_oid *VAR_4;
 git_reference *VAR_5;


 FUNC_4();
 VAR_2 = FUNC_5("testrepo");
 FUNC_13(&VAR_3, VAR_2);

 FUNC_3(FUNC_8(&VAR_5, VAR_2, "master", VAR_0));
 FUNC_1("refs/heads/master", FUNC_11(VAR_5));
 FUNC_0(1, FUNC_7(VAR_5));
 VAR_4 = FUNC_12(VAR_5);

 FUNC_2(-1, FUNC_6(&VAR_1, VAR_2, "master", VAR_3, 1));
 VAR_1 = ((void*)0);
 FUNC_3(FUNC_8(&VAR_1, VAR_2, "master", VAR_0));
 FUNC_1("refs/heads/master", FUNC_11(VAR_1));
 FUNC_3(FUNC_9(FUNC_12(VAR_1), VAR_4));
 FUNC_10(VAR_5);
}
