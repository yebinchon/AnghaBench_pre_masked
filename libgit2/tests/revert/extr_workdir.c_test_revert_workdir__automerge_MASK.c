
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_index_entry {int member_0; char* member_1; char* member_3; int member_2; } ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_commit ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,int *,int ,int *) ;
 int FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (int ,struct merge_index_entry*,int) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_8(void)
{
 git_commit *VAR_3, *VAR_4;
 git_oid VAR_5, VAR_6;

 struct merge_index_entry VAR_7[] = {
  { 0100644, "caf99de3a49827117bb66721010eac461b06a80c", 0, "file1.txt" },
  { 0100644, "0ab09ea6d4c3634bdf6c221626d8b6f7dd890767", 0, "file2.txt" },
  { 0100644, "f4e107c230d08a60fb419d19869f1f282b272d9c", 0, "file3.txt" },
  { 0100644, "0f5bfcf58c558d865da6be0281d7795993646cee", 0, "file6.txt" },
 };

 FUNC_4(&VAR_5, "72333f47d4e83616630ff3b0ffe4c0faebcc3c45");
 FUNC_1(FUNC_3(&VAR_3, VAR_1, &VAR_5));
 FUNC_1(FUNC_5(VAR_1, (git_object *)VAR_3, VAR_0, ((void*)0)));

 FUNC_4(&VAR_6, "d1d403d22cbe24592d725f442835cf46fe60c8ac");
 FUNC_1(FUNC_3(&VAR_4, VAR_1, &VAR_6));
 FUNC_1(FUNC_6(VAR_1, VAR_4, ((void*)0)));

 FUNC_0(FUNC_7(VAR_2, VAR_7, 4));

 FUNC_2(VAR_4);
 FUNC_2(VAR_3);
}
