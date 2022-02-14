
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_signature ;
typedef int git_rebase ;
typedef int git_oid ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int ,int *,int *,int *,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,char*,char*,int,int) ;
 int VAR_1 ;
 int FUNC_10 (int *,int *) ;

void FUNC_11(void)
{
 git_rebase *VAR_2;
 git_oid VAR_3, VAR_4;
 git_signature *VAR_5;
 git_annotated_commit *VAR_6, *VAR_7;

 FUNC_4(&VAR_3, "b146bd7608eac53d9bf9e1a6963543588b555c64");
    FUNC_4(&VAR_4, "efad0b11c47cb2f0220cbd6f5b0f93bb99064b00");

 FUNC_1(FUNC_3(&VAR_6, VAR_1, &VAR_3));
 FUNC_1(FUNC_3(&VAR_7, VAR_1, &VAR_4));

 FUNC_1(FUNC_9(&VAR_5, "Rebaser", "rebaser@example.com", 1404157834, -400));

 FUNC_1(FUNC_6(&VAR_2, VAR_1, VAR_6, ((void*)0), VAR_7, ((void*)0)));
 FUNC_0(VAR_0, FUNC_7(VAR_1));

 FUNC_10(VAR_6, VAR_7);

 FUNC_8(VAR_5);

 FUNC_2(VAR_6);
 FUNC_2(VAR_7);

 FUNC_5(VAR_2);
}
