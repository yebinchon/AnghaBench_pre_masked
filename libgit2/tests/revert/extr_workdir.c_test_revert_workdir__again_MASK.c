
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_index_entry {int member_0; char* member_1; char* member_3; int member_2; } ;
typedef int git_tree ;
typedef int git_signature ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,char*,int *,int *,int *,char*,int *,int,int const**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,int *,int ) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (int ,int *,int ,int *) ;
 int FUNC_9 (int ,int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int **,char*,char*,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int ,int *) ;
 int FUNC_14 (int ,struct merge_index_entry*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_15 (int *) ;

void FUNC_16(void)
{
 git_reference *VAR_4;
 git_commit *VAR_5;
 git_tree *VAR_6;
 git_oid VAR_7, VAR_8;
 git_signature *VAR_9;

 struct merge_index_entry VAR_10[] = {
  { 0100644, "7731926a337c4eaba1e2187d90ebfa0a93659382", 0, "file1.txt" },
  { 0100644, "0ab09ea6d4c3634bdf6c221626d8b6f7dd890767", 0, "file2.txt" },
  { 0100644, "f4e107c230d08a60fb419d19869f1f282b272d9c", 0, "file3.txt" },
  { 0100644, "0f5bfcf58c558d865da6be0281d7795993646cee", 0, "file6.txt" },
 };

 FUNC_1(FUNC_7(&VAR_4, VAR_2));
 FUNC_1(FUNC_6((git_object **)&VAR_5, VAR_4, VAR_0));
 FUNC_1(FUNC_8(VAR_2, (git_object *)VAR_5, VAR_1, ((void*)0)));

 FUNC_1(FUNC_9(VAR_2, VAR_5, ((void*)0)));

 FUNC_0(FUNC_14(VAR_3, VAR_10, 4));

 FUNC_1(FUNC_4(&VAR_7, VAR_3));
 FUNC_1(FUNC_13(&VAR_6, VAR_2, &VAR_7));

 FUNC_1(FUNC_11(&VAR_9, "Reverter", "reverter@example.org", FUNC_15(((void*)0)), 0));
 FUNC_1(FUNC_2(&VAR_8, VAR_2, "HEAD", VAR_9, VAR_9, ((void*)0), "Reverted!", VAR_6, 1, (const git_commit **)&VAR_5));

 FUNC_1(FUNC_9(VAR_2, VAR_5, ((void*)0)));
 FUNC_0(FUNC_14(VAR_3, VAR_10, 4));

 FUNC_10(VAR_9);
 FUNC_12(VAR_6);
 FUNC_3(VAR_5);
 FUNC_5(VAR_4);
}
