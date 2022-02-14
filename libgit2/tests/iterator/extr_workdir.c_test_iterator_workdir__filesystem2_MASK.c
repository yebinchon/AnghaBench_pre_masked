
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_iterator ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int,char const**,int,char const**) ;
 int VAR_0 ;
 int FUNC_3 (int **,char*,int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(void)
{
 git_iterator *VAR_1;
 static const char *VAR_2[] = {
  "heads/br2",
  "heads/dir",
  "heads/executable",
  "heads/ident",
  "heads/long-file-name",
  "heads/master",
  "heads/merge-conflict",
  "heads/packed-test",
  "heads/subtrees",
  "heads/test",
  "heads/testrepo-worktree",
  "tags/e90810b",
  "tags/foo/bar",
  "tags/foo/foo/bar",
  "tags/point_to_blob",
  "tags/test",
  ((void*)0),
 };

 VAR_0 = FUNC_1("testrepo");

 FUNC_0(FUNC_3(
  &VAR_1, "testrepo/.git/refs", ((void*)0)));
 FUNC_2(VAR_1, 16, VAR_2, 16, VAR_2);
 FUNC_4(VAR_1);
}
