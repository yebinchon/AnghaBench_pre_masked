
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct merge_index_entry {int member_0; char* member_1; char* member_3; int member_2; } ;
struct TYPE_5__ {int checkout_strategy; } ;
struct TYPE_6__ {TYPE_1__ checkout_opts; } ;
typedef TYPE_2__ git_revert_options ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_commit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,int *,int ,int *) ;
 int FUNC_6 (int ,int *,TYPE_2__*) ;
 int FUNC_7 (int ,struct merge_index_entry*,int) ;
 int FUNC_8 (int ,struct merge_index_entry*,int) ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_9(void)
{
 git_commit *VAR_6, *VAR_7;
 git_oid VAR_8, VAR_9;
 git_revert_options VAR_10 = VAR_3;

 struct merge_index_entry VAR_11[] = {
  { 0100644, "caf99de3a49827117bb66721010eac461b06a80c", 0, "file1.txt" },
  { 0100644, "0ab09ea6d4c3634bdf6c221626d8b6f7dd890767", 0, "file2.txt" },
  { 0100644, "f4e107c230d08a60fb419d19869f1f282b272d9c", 0, "file3.txt" },
  { 0100644, "0f5bfcf58c558d865da6be0281d7795993646cee", 0, "file6.txt" },
 };

 struct merge_index_entry VAR_12[] = {
  { 0100644, "caf99de3a49827117bb66721010eac461b06a80c", 0, "file1.txt" },
  { 0100644, "0ab09ea6d4c3634bdf6c221626d8b6f7dd890767", 0, "file2.txt" },
  { 0100644, "f4e107c230d08a60fb419d19869f1f282b272d9c", 0, "file3.txt" },
  { 0100644, "0f5bfcf58c558d865da6be0281d7795993646cee", 0, "file6.txt" },
 };

 VAR_10.checkout_opts.checkout_strategy = VAR_0 | VAR_1;

 FUNC_4(&VAR_8, "72333f47d4e83616630ff3b0ffe4c0faebcc3c45");
 FUNC_1(FUNC_3(&VAR_6, VAR_4, &VAR_8));
 FUNC_1(FUNC_5(VAR_4, (git_object *)VAR_6, VAR_2, ((void*)0)));

 FUNC_4(&VAR_9, "d1d403d22cbe24592d725f442835cf46fe60c8ac");
 FUNC_1(FUNC_3(&VAR_7, VAR_4, &VAR_9));
 FUNC_1(FUNC_6(VAR_4, VAR_7, &VAR_10));

 FUNC_0(FUNC_7(VAR_5, VAR_11, 4));
 FUNC_0(FUNC_8(VAR_4, VAR_12, 4));

 FUNC_2(VAR_7);
 FUNC_2(VAR_6);
}
