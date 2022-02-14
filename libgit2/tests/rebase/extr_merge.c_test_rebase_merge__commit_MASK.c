
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_signature ;
typedef int git_reflog_entry ;
typedef int git_reflog ;
typedef int git_reference ;
typedef int git_rebase_operation ;
typedef int git_rebase ;
typedef int git_oid ;
typedef int git_commit ;
typedef int git_annotated_commit ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,char*) ;
 int FUNC_17 (int *,int *,int *,int *,int *,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int **,int ,int *,int *,int *,int *) ;
 int FUNC_20 (int **,int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int **,int ,char*) ;
 int * FUNC_23 (int *,int ) ;
 int FUNC_24 (int const*) ;
 int FUNC_25 (int const*) ;
 int FUNC_26 (int const*) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int **,int ,char*) ;
 int const* FUNC_29 (int *,int ) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int **,char*,char*,int,scalar_t__) ;
 int VAR_0 ;
 int * VAR_1 ;

void FUNC_32(void)
{
 git_rebase *VAR_2;
 git_reference *VAR_3, *VAR_4;
 git_annotated_commit *VAR_5, *VAR_6;
 git_rebase_operation *VAR_7;
 git_oid VAR_8, VAR_9, VAR_10;
 git_signature *VAR_11;
 git_commit *VAR_12;
 git_reflog *VAR_13;
 const git_reflog_entry *VAR_14;

 FUNC_4(FUNC_22(&VAR_3, VAR_0, "refs/heads/beef"));
 FUNC_4(FUNC_22(&VAR_4, VAR_0, "refs/heads/master"));

 FUNC_4(FUNC_6(&VAR_5, VAR_0, VAR_3));
 FUNC_4(FUNC_6(&VAR_6, VAR_0, VAR_4));

 FUNC_4(FUNC_19(&VAR_2, VAR_0, VAR_5, VAR_6, ((void*)0), ((void*)0)));

 FUNC_4(FUNC_20(&VAR_7, VAR_2));
 FUNC_4(FUNC_17(&VAR_8, VAR_2, ((void*)0), VAR_1,
  ((void*)0), ((void*)0)));

 FUNC_4(FUNC_10(&VAR_12, VAR_0, &VAR_8));

 FUNC_16(&VAR_10, "efad0b11c47cb2f0220cbd6f5b0f93bb99064b00");
 FUNC_1(1, FUNC_14(VAR_12));
 FUNC_2(&VAR_10, FUNC_13(VAR_12, 0));

 FUNC_16(&VAR_9, "4461379789c777d2a6c1f2ee0e9d6c86731b9992");
 FUNC_2(&VAR_9, FUNC_15(VAR_12));

 FUNC_3(((void*)0), FUNC_12(VAR_12));
 FUNC_3("Modification 1 to beef\n", FUNC_11(VAR_12));

 FUNC_4(FUNC_31(&VAR_11,
  "Edward Thomson", "ethomson@edwardthomson.com", 1405621769, 0-(4*60)));
 FUNC_0(FUNC_29(VAR_11, FUNC_7(VAR_12)));

 FUNC_0(FUNC_29(VAR_1, FUNC_8(VAR_12)));


 FUNC_4(FUNC_28(&VAR_13, VAR_0, "HEAD"));
 FUNC_0(VAR_14 = FUNC_23(VAR_13, 0));
 FUNC_2(&VAR_10, FUNC_25(VAR_14));
 FUNC_2(&VAR_8, FUNC_24(VAR_14));
 FUNC_3("rebase: Modification 1 to beef", FUNC_26(VAR_14));

 FUNC_27(VAR_13);
 FUNC_30(VAR_11);
 FUNC_9(VAR_12);
 FUNC_5(VAR_5);
 FUNC_5(VAR_6);
 FUNC_21(VAR_3);
 FUNC_21(VAR_4);
 FUNC_18(VAR_2);
}
