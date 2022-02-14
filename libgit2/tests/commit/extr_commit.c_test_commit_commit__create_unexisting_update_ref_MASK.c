
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_tree ;
typedef int git_signature ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_commit ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,char*,int *,int *,int *,char*,int *,int,int const**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,int ,int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,char*,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int ,int *) ;

void FUNC_14(void)
{
 git_oid VAR_1;
 git_tree *VAR_2;
 git_commit *VAR_3;
 git_signature *VAR_4;
 git_reference *VAR_5;

 FUNC_6(&VAR_1, "a65fedf39aefe402d3bb6e24df4d4f5fe4547750");
 FUNC_2(FUNC_5(&VAR_3, VAR_0, &VAR_1));

 FUNC_6(&VAR_1, "944c0f6e4dfa41595e6eb3ceecdb14f50fe18162");
 FUNC_2(FUNC_13(&VAR_2, VAR_0, &VAR_1));

 FUNC_2(FUNC_11(&VAR_4, "alice", "alice@example.com"));

 FUNC_1(FUNC_8(&VAR_5, VAR_0, "refs/heads/foo/bar"));
 FUNC_2(FUNC_3(&VAR_1, VAR_0, "refs/heads/foo/bar", VAR_4, VAR_4,
          ((void*)0), "some msg", VAR_2, 1, (const git_commit **) &VAR_3));


 FUNC_1(FUNC_3(&VAR_1, VAR_0, "refs/heads/foo/bar", VAR_4, VAR_4,
          ((void*)0), "some msg", VAR_2, 1, (const git_commit **) &VAR_3));

 FUNC_2(FUNC_8(&VAR_5, VAR_0, "refs/heads/foo/bar"));
 FUNC_0(&VAR_1, FUNC_9(VAR_5));

 FUNC_12(VAR_2);
 FUNC_4(VAR_3);
 FUNC_10(VAR_4);
 FUNC_7(VAR_5);
}
