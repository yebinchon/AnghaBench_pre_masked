
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_submodule ;
typedef int git_reference ;
typedef int git_rebase ;
typedef int git_buf ;
typedef int git_annotated_commit ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,int *,int *,int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int ,char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int **,int ,char*) ;
 int FUNC_16 (int *,int,int *) ;
 int VAR_1 ;

void FUNC_17(void)
{
 git_rebase *VAR_2;
 git_reference *VAR_3, *VAR_4;
 git_annotated_commit *VAR_5, *VAR_6;
 git_buf VAR_7 = VAR_0;
 FILE *VAR_8;
 git_submodule *VAR_9;

 FUNC_0(FUNC_12(&VAR_3, VAR_1, "refs/heads/asparagus"));
 FUNC_0(FUNC_12(&VAR_4, VAR_1, "refs/heads/master"));

 FUNC_0(FUNC_5(&VAR_5, VAR_1, VAR_3));
 FUNC_0(FUNC_5(&VAR_6, VAR_1, VAR_4));

 FUNC_0(FUNC_15(&VAR_9, VAR_1, "my-submodule"));
 FUNC_0(FUNC_16(VAR_9, 1, ((void*)0)));

 FUNC_8(&VAR_7, "%s/my-submodule/untracked", FUNC_13(VAR_1));
 VAR_8 = FUNC_2(FUNC_6(&VAR_7), "w");
 FUNC_3(VAR_8, "An untracked file in a submodule should not block a rebase\n");
 FUNC_1(VAR_8);
 FUNC_7(&VAR_7);

 FUNC_0(FUNC_10(&VAR_2, VAR_1, VAR_5, VAR_6, ((void*)0), ((void*)0)));

 FUNC_14(VAR_9);
 FUNC_4(VAR_5);
 FUNC_4(VAR_6);
 FUNC_11(VAR_3);
 FUNC_11(VAR_4);
 FUNC_9(VAR_2);
}
