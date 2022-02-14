
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_reference ;
typedef int git_rebase ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *,int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,char*) ;
 int FUNC_8 (int ) ;
 int VAR_1 ;
 int FUNC_9 (int *,int *) ;

void FUNC_10(void)
{
 git_rebase *VAR_2;
 git_reference *VAR_3, *VAR_4;
 git_annotated_commit *VAR_5, *VAR_6;

 FUNC_1(FUNC_7(&VAR_3, VAR_1, "refs/heads/beef"));
 FUNC_1(FUNC_7(&VAR_4, VAR_1, "refs/heads/master"));

 FUNC_1(FUNC_3(&VAR_5, VAR_1, VAR_3));
 FUNC_1(FUNC_3(&VAR_6, VAR_1, VAR_4));

 FUNC_1(FUNC_5(&VAR_2, VAR_1, VAR_5, ((void*)0), VAR_6, ((void*)0)));
 FUNC_0(VAR_0, FUNC_8(VAR_1));

 FUNC_9(VAR_5, VAR_6);

 FUNC_2(VAR_5);
 FUNC_2(VAR_6);

 FUNC_6(VAR_3);
 FUNC_6(VAR_4);
 FUNC_4(VAR_2);
}
