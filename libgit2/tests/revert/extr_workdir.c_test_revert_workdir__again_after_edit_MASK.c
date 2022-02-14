
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,char*,int *,int *,int *,char*,int *,int,int const**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (int ,int *,int ,int *) ;
 int FUNC_10 (int ,int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int **,char*,char*,int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int **,int ,int *) ;
 int FUNC_15 (int ,struct merge_index_entry*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_16 (int *) ;

void FUNC_17(void)
{
 git_reference *VAR_3;
 git_commit *VAR_4, *VAR_5;
 git_tree *VAR_6;
 git_oid VAR_7, VAR_8, VAR_9, VAR_10;
 git_signature *VAR_11;

 struct merge_index_entry VAR_12[] = {
  { 0100644, "3721552e06c4bdc7d478e0674e6304888545d5fd", 0, "file1.txt" },
  { 0100644, "0ab09ea6d4c3634bdf6c221626d8b6f7dd890767", 0, "file2.txt" },
  { 0100644, "f4e107c230d08a60fb419d19869f1f282b272d9c", 0, "file3.txt" },
  { 0100644, "0f5bfcf58c558d865da6be0281d7795993646cee", 0, "file6.txt" },
 };

 FUNC_1(FUNC_8(&VAR_3, VAR_1));

 FUNC_1(FUNC_6(&VAR_7, "399fb3aba3d9d13f7d40a9254ce4402067ef3149"));
 FUNC_1(FUNC_4(&VAR_4, VAR_1, &VAR_7));
 FUNC_1(FUNC_9(VAR_1, (git_object *)VAR_4, VAR_0, ((void*)0)));

 FUNC_1(FUNC_6(&VAR_8, "2d440f2b3147d3dc7ad1085813478d6d869d5a4d"));
 FUNC_1(FUNC_4(&VAR_5, VAR_1, &VAR_8));

 FUNC_1(FUNC_10(VAR_1, VAR_5, ((void*)0)));

 FUNC_0(FUNC_15(VAR_2, VAR_12, 4));

 FUNC_1(FUNC_5(&VAR_9, VAR_2));
 FUNC_1(FUNC_14(&VAR_6, VAR_1, &VAR_9));

 FUNC_1(FUNC_12(&VAR_11, "Reverter", "reverter@example.org", FUNC_16(((void*)0)), 0));
 FUNC_1(FUNC_2(&VAR_10, VAR_1, "HEAD", VAR_11, VAR_11, ((void*)0), "Reverted!", VAR_6, 1, (const git_commit **)&VAR_4));

 FUNC_1(FUNC_10(VAR_1, VAR_5, ((void*)0)));
 FUNC_0(FUNC_15(VAR_2, VAR_12, 4));

 FUNC_11(VAR_11);
 FUNC_13(VAR_6);
 FUNC_3(VAR_5);
 FUNC_3(VAR_4);
 FUNC_7(VAR_3);
}
