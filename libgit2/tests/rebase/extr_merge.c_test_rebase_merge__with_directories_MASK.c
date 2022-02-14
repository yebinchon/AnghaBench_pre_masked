
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_rebase_operation ;
typedef int git_rebase ;
typedef int git_oid ;
typedef int git_commit ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,int *,int *,int ,int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int ,int *,int *,int *,int *) ;
 int FUNC_12 (int **,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_15(void)
{
 git_rebase *VAR_3;
 git_reference *VAR_4, *VAR_5;
 git_annotated_commit *VAR_6, *VAR_7;
 git_rebase_operation *VAR_8;
 git_oid VAR_9, VAR_10;
 git_commit *VAR_11;

 FUNC_8(&VAR_10, "a4d6d9c3d57308fd8e320cf2525bae8f1adafa57");

 FUNC_2(FUNC_14(&VAR_4, VAR_1, "refs/heads/deep_gravy"));
 FUNC_2(FUNC_14(&VAR_5, VAR_1, "refs/heads/veal"));

 FUNC_2(FUNC_4(&VAR_6, VAR_1, VAR_4));
 FUNC_2(FUNC_4(&VAR_7, VAR_1, VAR_5));

 FUNC_2(FUNC_11(&VAR_3, VAR_1, VAR_6, VAR_7, ((void*)0), ((void*)0)));

 FUNC_2(FUNC_12(&VAR_8, VAR_3));
 FUNC_2(FUNC_9(&VAR_9, VAR_3, ((void*)0), VAR_2,
  ((void*)0), ((void*)0)));

 FUNC_2(FUNC_12(&VAR_8, VAR_3));
 FUNC_2(FUNC_9(&VAR_9, VAR_3, ((void*)0), VAR_2,
  ((void*)0), ((void*)0)));

 FUNC_1(VAR_0, FUNC_12(&VAR_8, VAR_3));

 FUNC_2(FUNC_6(&VAR_11, VAR_1, &VAR_9));
 FUNC_0(&VAR_10, FUNC_7(VAR_11));

 FUNC_5(VAR_11);
 FUNC_3(VAR_6);
 FUNC_3(VAR_7);
 FUNC_13(VAR_4);
 FUNC_13(VAR_5);
 FUNC_10(VAR_3);
}
