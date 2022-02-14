
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_signature ;
typedef int git_oid ;
typedef int git_commit ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,char*,int *,int *,int *,char*,int *,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,char*,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,int ,int *) ;

void FUNC_12(void)
{
 git_oid VAR_1;
 git_oid VAR_2;
 git_tree *VAR_3;
 git_commit *VAR_4;
 git_signature *VAR_5;

 FUNC_6(&VAR_1, "a65fedf39aefe402d3bb6e24df4d4f5fe4547750");
 FUNC_2(FUNC_5(&VAR_4, VAR_0, &VAR_1));

 FUNC_6(&VAR_1, "944c0f6e4dfa41595e6eb3ceecdb14f50fe18162");
 FUNC_2(FUNC_11(&VAR_3, VAR_0, &VAR_1));

 FUNC_2(FUNC_9(&VAR_5, "alice", "alice@example.com"));

 FUNC_2(FUNC_7(&VAR_2, VAR_0, "HEAD"));

 FUNC_1(FUNC_3(&VAR_1, VAR_0, "HEAD", VAR_5, VAR_5,
          ((void*)0), "initial commit", VAR_3, 0, ((void*)0)));

 FUNC_2(FUNC_7(&VAR_1, VAR_0, "HEAD"));

 FUNC_0(&VAR_1, &VAR_2);

 FUNC_10(VAR_3);
 FUNC_4(VAR_4);
 FUNC_8(VAR_5);
}
