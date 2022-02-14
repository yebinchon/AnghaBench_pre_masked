
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_index_entry {int member_0; char* member_1; int member_2; char* member_3; } ;
typedef int git_tree ;
typedef int git_signature ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_commit ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,char*,int *,int *,int *,char*,int *,int,int const**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int ,int *,int ,int *) ;
 int FUNC_8 (int ,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,char*,char*,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,int ,int *) ;
 int FUNC_13 (int ,struct merge_index_entry*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_14 (int *) ;

void FUNC_15(void)
{
 git_commit *VAR_3, *VAR_4;
 git_tree *VAR_5;
 git_oid VAR_6, VAR_7, VAR_8, VAR_9;
 git_signature *VAR_10;

 struct merge_index_entry VAR_11[] = {
  { 0100644, "caf99de3a49827117bb66721010eac461b06a80c", 0, "file1.txt" },
  { 0100644, "0ab09ea6d4c3634bdf6c221626d8b6f7dd890767", 0, "file2.txt" },
  { 0100644, "f4e107c230d08a60fb419d19869f1f282b272d9c", 0, "file3.txt" },
  { 0100644, "0f5bfcf58c558d865da6be0281d7795993646cee", 0, "file6.txt" },
 };

 struct merge_index_entry VAR_12[] = {
  { 0100644, "3a3ef367eaf3fe79effbfb0a56b269c04c2b59fe", 1, "file1.txt" },
  { 0100644, "caf99de3a49827117bb66721010eac461b06a80c", 2, "file1.txt" },
  { 0100644, "747726e021bc5f44b86de60e3032fd6f9f1b8383", 3, "file1.txt" },
  { 0100644, "0ab09ea6d4c3634bdf6c221626d8b6f7dd890767", 0, "file2.txt" },
  { 0100644, "f4e107c230d08a60fb419d19869f1f282b272d9c", 0, "file3.txt" },
  { 0100644, "0f5bfcf58c558d865da6be0281d7795993646cee", 0, "file6.txt" },
 };

 FUNC_6(&VAR_6, "72333f47d4e83616630ff3b0ffe4c0faebcc3c45");
 FUNC_1(FUNC_4(&VAR_3, VAR_1, &VAR_6));
 FUNC_1(FUNC_7(VAR_1, (git_object *)VAR_3, VAR_0, ((void*)0)));

 FUNC_6(&VAR_7, "d1d403d22cbe24592d725f442835cf46fe60c8ac");
 FUNC_1(FUNC_4(&VAR_4, VAR_1, &VAR_7));
 FUNC_1(FUNC_8(VAR_1, VAR_4, ((void*)0)));

 FUNC_0(FUNC_13(VAR_2, VAR_11, 4));

 FUNC_1(FUNC_5(&VAR_8, VAR_2));
 FUNC_1(FUNC_12(&VAR_5, VAR_1, &VAR_8));

 FUNC_1(FUNC_10(&VAR_10, "Reverter", "reverter@example.org", FUNC_14(((void*)0)), 0));
 FUNC_1(FUNC_2(&VAR_9, VAR_1, "HEAD", VAR_10, VAR_10, ((void*)0), "Reverted!", VAR_5, 1, (const git_commit **)&VAR_3));

 FUNC_1(FUNC_8(VAR_1, VAR_4, ((void*)0)));
 FUNC_0(FUNC_13(VAR_2, VAR_12, 6));

 FUNC_9(VAR_10);
 FUNC_11(VAR_5);
 FUNC_3(VAR_4);
 FUNC_3(VAR_3);
}
