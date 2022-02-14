
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_reflog_entry ;
typedef int git_reflog ;
typedef int git_reference ;
typedef int git_rebase_operation ;
typedef int git_rebase ;
typedef int git_oid ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (int *,int *,int *,int ,int *,int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int ,int *,int *,int *,int *) ;
 int FUNC_13 (int **,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int **,int ,char*) ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (int *,int ) ;
 int FUNC_18 (int const*) ;
 int FUNC_19 (int const*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int **,int ,char*) ;
 int FUNC_22 (int ,int *) ;
 int FUNC_23 (int ) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_24(void)
{
 git_rebase *VAR_7;
 git_reference *VAR_8, *VAR_9, *VAR_10;
 git_annotated_commit *VAR_11, *VAR_12;
 git_rebase_operation *VAR_13;
 git_oid VAR_14;
 git_reflog *VAR_15;
 const git_reflog_entry *VAR_16;
 git_checkout_options VAR_17 = VAR_1;
 int VAR_18;

 FUNC_4(FUNC_15(&VAR_8, VAR_5, "refs/heads/gravy"));
 FUNC_4(FUNC_15(&VAR_9, VAR_5, "refs/heads/veal"));

 FUNC_4(FUNC_6(&VAR_11, VAR_5, VAR_8));
 FUNC_4(FUNC_6(&VAR_12, VAR_5, VAR_9));

 FUNC_4(FUNC_22(VAR_5, VAR_11));
 VAR_17.checkout_strategy = VAR_0;
 FUNC_8(VAR_5, &VAR_17);

 FUNC_4(FUNC_12(&VAR_7, VAR_5, ((void*)0), VAR_12, ((void*)0), ((void*)0)));

 FUNC_4(FUNC_13(&VAR_13, VAR_7));
 FUNC_4(FUNC_9(&VAR_14, VAR_7, ((void*)0), VAR_6,
  ((void*)0), ((void*)0)));

 FUNC_3(VAR_18 = FUNC_13(&VAR_13, VAR_7));
 FUNC_1(VAR_2, VAR_18);

 FUNC_4(FUNC_10(VAR_7, VAR_6));

 FUNC_1(VAR_4, FUNC_23(VAR_5));

 FUNC_4(FUNC_15(&VAR_10, VAR_5, "HEAD"));
 FUNC_1(VAR_3, FUNC_16(VAR_10));


 FUNC_4(FUNC_21(&VAR_15, VAR_5, "HEAD"));
 FUNC_0(VAR_16 = FUNC_17(VAR_15, 0));
 FUNC_2(FUNC_7(VAR_12), FUNC_19(VAR_16));
 FUNC_2(&VAR_14, FUNC_18(VAR_16));

 FUNC_20(VAR_15);
 FUNC_5(VAR_11);
 FUNC_5(VAR_12);
 FUNC_14(VAR_10);
 FUNC_14(VAR_8);
 FUNC_14(VAR_9);
 FUNC_11(VAR_7);
}
