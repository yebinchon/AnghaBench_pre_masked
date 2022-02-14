
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct git_commit {int dummy; } ;
typedef int git_tree ;
typedef int git_signature ;
typedef int git_oid ;
typedef int git_commit ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *,int ,int *,char*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,char*,int *,int *,int *,char*,int *,int,struct git_commit const**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *) ;
 int FUNC_5 (int **,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,char*,char*) ;
 int FUNC_10 (int *) ;

void FUNC_11(void)
{
 git_oid VAR_2;
 git_oid VAR_3;
 git_oid VAR_4;
 git_commit *VAR_5;
 git_commit *VAR_6;
 git_signature *VAR_7;
 git_commit *VAR_8[2];
 git_tree *VAR_9;

 FUNC_0(FUNC_9(&VAR_7, "alice", "alice@example.com"));

 FUNC_0(FUNC_7(&VAR_2, VAR_1, "HEAD"));
 FUNC_0(FUNC_7(&VAR_3, VAR_1, "refs/heads/test"));

 FUNC_0(FUNC_4(&VAR_5, VAR_1, &VAR_2));
 FUNC_0(FUNC_4(&VAR_6, VAR_1, &VAR_3));

 VAR_8[0] = VAR_5;
 VAR_8[1] = VAR_6;

 FUNC_0(FUNC_5(&VAR_9, VAR_5));

 FUNC_0(FUNC_2(&VAR_4,
  VAR_1, "HEAD", VAR_7, VAR_7, ((void*)0),
  "Merge commit", VAR_9,
  2, (const struct git_commit **) VAR_8));

 FUNC_1(VAR_1, VAR_0, 0,
  ((void*)0),
  FUNC_6(&VAR_4),
  ((void*)0), "commit (merge): Merge commit");

 FUNC_10(VAR_9);
 FUNC_3(VAR_5);
 FUNC_3(VAR_6);
 FUNC_8(VAR_7);
}
