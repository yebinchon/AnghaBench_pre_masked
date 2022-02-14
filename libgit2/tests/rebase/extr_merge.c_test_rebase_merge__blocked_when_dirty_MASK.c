
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_rebase_operation ;
typedef int git_rebase ;
typedef int git_oid ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *) ;
 int FUNC_5 (int *,int *,int *,int ,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int *,int *,int *,int *) ;
 int FUNC_8 (int **,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_11(void)
{
 git_rebase *VAR_3;
 git_reference *VAR_4, *VAR_5;
 git_annotated_commit *VAR_6, *VAR_7;
 git_rebase_operation *VAR_8;
 git_oid VAR_9;

 FUNC_2(FUNC_10(&VAR_4, VAR_1, "refs/heads/beef"));
 FUNC_2(FUNC_10(&VAR_5, VAR_1, "refs/heads/master"));

 FUNC_2(FUNC_4(&VAR_6, VAR_1, VAR_4));
 FUNC_2(FUNC_4(&VAR_7, VAR_1, VAR_5));

 FUNC_2(FUNC_7(&VAR_3, VAR_1, VAR_6, VAR_7, ((void*)0), ((void*)0)));


 FUNC_2(FUNC_8(&VAR_8, VAR_3));
 FUNC_1("rebase/untracked_file.txt", "This is untracked\n");
 FUNC_2(FUNC_5(&VAR_9, VAR_3, ((void*)0), VAR_2,
  ((void*)0), ((void*)0)));


 FUNC_2(FUNC_8(&VAR_8, VAR_3));
 FUNC_1("rebase/veal.txt", "This is an unstaged change\n");
 FUNC_0(VAR_0, FUNC_5(&VAR_9, VAR_3, ((void*)0), VAR_2,
  ((void*)0), ((void*)0)));

 FUNC_3(VAR_6);
 FUNC_3(VAR_7);
 FUNC_9(VAR_4);
 FUNC_9(VAR_5);
 FUNC_6(VAR_3);
}
