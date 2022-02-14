
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_index_entry {int member_0; char* member_1; int member_2; char* member_3; } ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_index ;
typedef int git_commit ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,int ) ;
 int FUNC_9 (int **,int ) ;
 int FUNC_10 (int **,int ,int *,int *,int ,int *) ;
 int FUNC_11 (int *,struct merge_index_entry*,int) ;
 int VAR_1 ;

void FUNC_12(void)
{
 git_reference *VAR_2;
 git_commit *VAR_3, *VAR_4;
 git_oid VAR_5;
 git_index *VAR_6;

 struct merge_index_entry VAR_7[] = {
  { 0100644, "7731926a337c4eaba1e2187d90ebfa0a93659382", 1, "file1.txt" },
  { 0100644, "4b8fcff56437e60f58e9a6bc630dd242ebf6ea2c", 2, "file1.txt" },
  { 0100644, "3a3ef367eaf3fe79effbfb0a56b269c04c2b59fe", 3, "file1.txt" },
  { 0100644, "0ab09ea6d4c3634bdf6c221626d8b6f7dd890767", 0, "file2.txt" },
  { 0100644, "f4e107c230d08a60fb419d19869f1f282b272d9c", 0, "file3.txt" },
  { 0100644, "0f5bfcf58c558d865da6be0281d7795993646cee", 0, "file6.txt" },
 };

 FUNC_6(&VAR_5, "72333f47d4e83616630ff3b0ffe4c0faebcc3c45");

 FUNC_1(FUNC_9(&VAR_2, VAR_1));
 FUNC_1(FUNC_8((git_object **)&VAR_3, VAR_2, VAR_0));

 FUNC_1(FUNC_3(&VAR_4, VAR_1, &VAR_5));
 FUNC_1(FUNC_10(&VAR_6, VAR_1, VAR_4, VAR_3, 0, ((void*)0)));

 FUNC_0(FUNC_5(VAR_6));
 FUNC_0(FUNC_11(VAR_6, VAR_7, 6));

 FUNC_2(VAR_4);
 FUNC_2(VAR_3);
 FUNC_7(VAR_2);
 FUNC_4(VAR_6);
}
