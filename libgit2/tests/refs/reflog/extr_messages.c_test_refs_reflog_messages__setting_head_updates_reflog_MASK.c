
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_signature ;
typedef int git_object ;
typedef int git_annotated_commit ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,char*,char*,char*,char*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int **,int ,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,char*,char*) ;

void FUNC_12(void)
{
 git_object *VAR_2;
 git_signature *VAR_3;
 git_annotated_commit *VAR_4;

 FUNC_0(FUNC_11(&VAR_3, "me", "foo@example.com"));

 FUNC_0(FUNC_6(VAR_1, "refs/heads/haacked"));
 FUNC_0(FUNC_6(VAR_1, "refs/heads/unborn"));
 FUNC_0(FUNC_9(&VAR_2, VAR_1, "tags/test"));
 FUNC_0(FUNC_7(VAR_1, FUNC_5(VAR_2)));
 FUNC_0(FUNC_6(VAR_1, "refs/heads/haacked"));
 FUNC_0(FUNC_6(VAR_1, "refs/tags/test"));
 FUNC_0(FUNC_6(VAR_1, "refs/remotes/test/master"));

 FUNC_1(VAR_1, VAR_0, 4,
  ((void*)0), "refs/heads/haacked",
  "foo@example.com",
  "checkout: moving from master to haacked");
 FUNC_1(VAR_1, VAR_0, 3,
  ((void*)0), "tags/test^{commit}",
  "foo@example.com",
  "checkout: moving from unborn to e90810b8df3e80c413d903f631643c716887138d");
 FUNC_1(VAR_1, VAR_0, 2,
  "tags/test^{commit}", "refs/heads/haacked",
  "foo@example.com",
  "checkout: moving from e90810b8df3e80c413d903f631643c716887138d to haacked");
 FUNC_1(VAR_1, VAR_0, 1,
  "refs/heads/haacked", "tags/test^{commit}",
  "foo@example.com",
  "checkout: moving from haacked to test");
 FUNC_1(VAR_1, VAR_0, 0,
  "tags/test^{commit}", "refs/remotes/test/master",
  "foo@example.com",
  "checkout: moving from e90810b8df3e80c413d903f631643c716887138d to test/master");

 FUNC_0(FUNC_3(&VAR_4, VAR_1, "haacked~0"));
 FUNC_0(FUNC_8(VAR_1, VAR_4));

 FUNC_1(VAR_1, VAR_0, 0,
  ((void*)0), "refs/heads/haacked",
  "foo@example.com",
  "checkout: moving from be3563ae3f795b2b4353bcce3a527ad0a4f7f644 to haacked~0");

 FUNC_2(VAR_4);
 FUNC_4(VAR_2);
 FUNC_10(VAR_3);
}
