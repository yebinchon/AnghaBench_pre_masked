
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_rebase ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_commit ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,int *,int *,int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int ,char*) ;
 int FUNC_13 (int **,int *,int ) ;
 int FUNC_14 (int **,int ) ;
 int FUNC_15 (int ) ;
 int VAR_3 ;

void FUNC_16(void)
{
 git_rebase *VAR_4;
 git_reference *VAR_5, *VAR_6;
 git_annotated_commit *VAR_7, *VAR_8;
 git_reference *VAR_9;
 git_commit *VAR_10;
 git_oid VAR_11;

 FUNC_1(VAR_1, FUNC_15(VAR_3));

 FUNC_3(FUNC_12(&VAR_5, VAR_3, "refs/heads/veal"));
 FUNC_3(FUNC_12(&VAR_6, VAR_3, "refs/heads/master"));

 FUNC_3(FUNC_5(&VAR_7, VAR_3, VAR_5));
 FUNC_3(FUNC_5(&VAR_8, VAR_3, VAR_6));

 FUNC_3(FUNC_10(&VAR_4, VAR_3, VAR_7, VAR_8, ((void*)0), ((void*)0)));

 FUNC_1(VAR_2, FUNC_15(VAR_3));

 FUNC_8(&VAR_11, "efad0b11c47cb2f0220cbd6f5b0f93bb99064b00");
 FUNC_3(FUNC_14(&VAR_9, VAR_3));
 FUNC_3(FUNC_13((git_object **)&VAR_10, VAR_9, VAR_0));
 FUNC_2(&VAR_11, FUNC_7(VAR_10));

 FUNC_0("f87d14a4a236582a0278a916340a793714256864\n", 41, "rebase/.git/ORIG_HEAD");

 FUNC_0("4bed71df7017283cac61bbf726197ad6a5a18b84\n", 41, "rebase/.git/rebase-merge/cmt.1");
 FUNC_0("2aa3ce842094e08ebac152b3d6d5b0fff39f9c6e\n", 41, "rebase/.git/rebase-merge/cmt.2");
 FUNC_0("3e8989b5a16d5258c935d998ef0e6bb139cc4757\n", 41, "rebase/.git/rebase-merge/cmt.3");
 FUNC_0("4cacc6f6e740a5bc64faa33e04b8ef0733d8a127\n", 41, "rebase/.git/rebase-merge/cmt.4");
 FUNC_0("f87d14a4a236582a0278a916340a793714256864\n", 41, "rebase/.git/rebase-merge/cmt.5");
 FUNC_0("5\n", 2, "rebase/.git/rebase-merge/end");
 FUNC_0("efad0b11c47cb2f0220cbd6f5b0f93bb99064b00\n", 41, "rebase/.git/rebase-merge/onto");
 FUNC_0("master\n", 7, "rebase/.git/rebase-merge/onto_name");
 FUNC_0("f87d14a4a236582a0278a916340a793714256864\n", 41, "rebase/.git/rebase-merge/orig-head");

 FUNC_6(VAR_10);
 FUNC_11(VAR_9);
 FUNC_4(VAR_7);
 FUNC_4(VAR_8);
 FUNC_11(VAR_5);
 FUNC_11(VAR_6);
 FUNC_9(VAR_4);
}
