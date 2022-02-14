
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_reference ;
typedef int git_rebase ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_commit ;
struct TYPE_4__ {int checkout_strategy; } ;
typedef TYPE_1__ git_checkout_options ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int ,int *,int *,int *,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int ,char*) ;
 int FUNC_14 (int **,int *,int ) ;
 int FUNC_15 (int **,int ) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (int ) ;
 int VAR_5 ;

void FUNC_18(void)
{
 git_rebase *VAR_6;
 git_reference *VAR_7, *VAR_8, *VAR_9;
 git_annotated_commit *VAR_10, *VAR_11, *VAR_12;
 git_reference *VAR_13;
 git_commit *VAR_14;
 git_oid VAR_15;
 git_checkout_options VAR_16 = VAR_1;

 VAR_16.checkout_strategy = VAR_0;

 FUNC_1(VAR_3, FUNC_17(VAR_5));

 FUNC_3(FUNC_16(VAR_5, "refs/heads/beef"));
 FUNC_3(FUNC_6(VAR_5, &VAR_16));

 FUNC_3(FUNC_13(&VAR_8, VAR_5, "refs/heads/veal"));
 FUNC_3(FUNC_13(&VAR_7, VAR_5, "refs/heads/gravy"));
 FUNC_3(FUNC_13(&VAR_9, VAR_5, "refs/heads/master"));

 FUNC_3(FUNC_5(&VAR_11, VAR_5, VAR_8));
 FUNC_3(FUNC_5(&VAR_10, VAR_5, VAR_7));
 FUNC_3(FUNC_5(&VAR_12, VAR_5, VAR_9));

 FUNC_3(FUNC_11(&VAR_6, VAR_5, VAR_11, VAR_10, VAR_12, ((void*)0)));

 FUNC_9(&VAR_15, "efad0b11c47cb2f0220cbd6f5b0f93bb99064b00");
 FUNC_3(FUNC_15(&VAR_13, VAR_5));
 FUNC_3(FUNC_14((git_object **)&VAR_14, VAR_13, VAR_2));
 FUNC_2(&VAR_15, FUNC_8(VAR_14));

 FUNC_0("f87d14a4a236582a0278a916340a793714256864\n", 41, "rebase/.git/ORIG_HEAD");

 FUNC_1(VAR_4, FUNC_17(VAR_5));

 FUNC_0("3e8989b5a16d5258c935d998ef0e6bb139cc4757\n", 41, "rebase/.git/rebase-merge/cmt.1");
 FUNC_0("4cacc6f6e740a5bc64faa33e04b8ef0733d8a127\n", 41, "rebase/.git/rebase-merge/cmt.2");
 FUNC_0("f87d14a4a236582a0278a916340a793714256864\n", 41, "rebase/.git/rebase-merge/cmt.3");
 FUNC_0("3\n", 2, "rebase/.git/rebase-merge/end");
 FUNC_0("efad0b11c47cb2f0220cbd6f5b0f93bb99064b00\n", 41, "rebase/.git/rebase-merge/onto");
 FUNC_0("master\n", 7, "rebase/.git/rebase-merge/onto_name");
 FUNC_0("f87d14a4a236582a0278a916340a793714256864\n", 41, "rebase/.git/rebase-merge/orig-head");

 FUNC_7(VAR_14);
 FUNC_12(VAR_13);
 FUNC_4(VAR_10);
 FUNC_4(VAR_11);
 FUNC_4(VAR_12);
 FUNC_12(VAR_7);
 FUNC_12(VAR_8);
 FUNC_12(VAR_9);
 FUNC_10(VAR_6);
}
