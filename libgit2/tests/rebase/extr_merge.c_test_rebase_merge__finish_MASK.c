
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reflog_entry ;
typedef int git_reflog ;
typedef int git_reference ;
typedef int git_rebase_operation ;
typedef int git_rebase ;
typedef int git_oid ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,int *,int *,int ,int *,int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int ,int *,int *,int *,int *) ;
 int FUNC_13 (int **,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int **,int ,char*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int * FUNC_18 (int *,int ) ;
 int FUNC_19 (int const*) ;
 int FUNC_20 (int const*) ;
 int FUNC_21 (int const*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int **,int ,char*) ;
 int FUNC_24 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_25(void)
{
 git_rebase *VAR_5;
 git_reference *VAR_6, *VAR_7, *VAR_8;
 git_annotated_commit *VAR_9, *VAR_10;
 git_rebase_operation *VAR_11;
 git_oid VAR_12;
 git_reflog *VAR_13;
 const git_reflog_entry *VAR_14;
 int VAR_15;

 FUNC_5(FUNC_15(&VAR_6, VAR_3, "refs/heads/gravy"));
 FUNC_5(FUNC_15(&VAR_7, VAR_3, "refs/heads/veal"));

 FUNC_5(FUNC_7(&VAR_9, VAR_3, VAR_6));
 FUNC_5(FUNC_7(&VAR_10, VAR_3, VAR_7));

 FUNC_5(FUNC_12(&VAR_5, VAR_3, VAR_9, VAR_10, ((void*)0), ((void*)0)));

 FUNC_5(FUNC_13(&VAR_11, VAR_5));
 FUNC_5(FUNC_9(&VAR_12, VAR_5, ((void*)0), VAR_4,
  ((void*)0), ((void*)0)));

 FUNC_4(VAR_15 = FUNC_13(&VAR_11, VAR_5));
 FUNC_1(VAR_0, VAR_15);

 FUNC_5(FUNC_10(VAR_5, VAR_4));

 FUNC_1(VAR_2, FUNC_24(VAR_3));

 FUNC_5(FUNC_15(&VAR_8, VAR_3, "HEAD"));
 FUNC_1(VAR_1, FUNC_17(VAR_8));
 FUNC_3("refs/heads/gravy", FUNC_16(VAR_8));


 FUNC_5(FUNC_23(&VAR_13, VAR_3, "HEAD"));
 FUNC_0(VAR_14 = FUNC_18(VAR_13, 0));
 FUNC_2(&VAR_12, FUNC_20(VAR_14));
 FUNC_2(&VAR_12, FUNC_19(VAR_14));
 FUNC_3("rebase finished: returning to refs/heads/gravy", FUNC_21(VAR_14));
 FUNC_22(VAR_13);

 FUNC_5(FUNC_23(&VAR_13, VAR_3, "refs/heads/gravy"));
 FUNC_0(VAR_14 = FUNC_18(VAR_13, 0));
 FUNC_2(FUNC_8(VAR_9), FUNC_20(VAR_14));
 FUNC_2(&VAR_12, FUNC_19(VAR_14));
 FUNC_3("rebase finished: refs/heads/gravy onto f87d14a4a236582a0278a916340a793714256864", FUNC_21(VAR_14));

 FUNC_22(VAR_13);
 FUNC_6(VAR_9);
 FUNC_6(VAR_10);
 FUNC_14(VAR_8);
 FUNC_14(VAR_6);
 FUNC_14(VAR_7);
 FUNC_11(VAR_5);
}
