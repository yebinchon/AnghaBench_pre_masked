
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_rebase_operation ;
typedef int git_rebase ;
typedef int git_oid ;
typedef int git_annotated_commit ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int *,int *,int ,int *,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,int *,int *,int *,int *) ;
 int FUNC_9 (int **,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_12(void)
{
 git_rebase *VAR_2;
 git_reference *VAR_3, *VAR_4;
 git_annotated_commit *VAR_5, *VAR_6;
 git_rebase_operation *VAR_7;
 git_oid VAR_8, VAR_9;

 FUNC_1(FUNC_11(&VAR_3, VAR_0, "refs/heads/barley"));
 FUNC_1(FUNC_11(&VAR_4, VAR_0, "refs/heads/master"));

 FUNC_1(FUNC_3(&VAR_5, VAR_0, VAR_3));
 FUNC_1(FUNC_3(&VAR_6, VAR_0, VAR_4));

 FUNC_1(FUNC_8(&VAR_2, VAR_0, VAR_5, VAR_6, ((void*)0), ((void*)0)));

 FUNC_1(FUNC_9(&VAR_7, VAR_2));
 FUNC_1(FUNC_5(&VAR_8, VAR_2, ((void*)0), VAR_1,
  ((void*)0), ((void*)0)));

 FUNC_1(FUNC_9(&VAR_7, VAR_2));
 FUNC_1(FUNC_5(&VAR_8, VAR_2, ((void*)0), VAR_1,
  ((void*)0), ((void*)0)));

 FUNC_1(FUNC_9(&VAR_7, VAR_2));
 FUNC_1(FUNC_5(&VAR_8, VAR_2, ((void*)0), VAR_1,
  ((void*)0), ((void*)0)));

 FUNC_1(FUNC_9(&VAR_7, VAR_2));
 FUNC_1(FUNC_5(&VAR_8, VAR_2, ((void*)0), VAR_1,
  ((void*)0), ((void*)0)));

 FUNC_1(FUNC_9(&VAR_7, VAR_2));
 FUNC_1(FUNC_5(&VAR_8, VAR_2, ((void*)0), VAR_1,
  ((void*)0), ((void*)0)));

 FUNC_1(FUNC_6(VAR_2, VAR_1));

 FUNC_4(&VAR_9, "71e7ee8d4fe7d8bf0d107355197e0a953dfdb7f3");
 FUNC_0(&VAR_9, &VAR_8);

 FUNC_2(VAR_5);
 FUNC_2(VAR_6);
 FUNC_10(VAR_3);
 FUNC_10(VAR_4);
 FUNC_7(VAR_2);
}
