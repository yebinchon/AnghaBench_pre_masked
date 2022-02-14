
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct merge_index_entry {int member_0; char* member_1; char* member_3; int member_2; } ;
struct TYPE_4__ {int mainline; } ;
typedef TYPE_1__ git_revert_options ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_commit ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,int *,int ,int *) ;
 int FUNC_6 (int ,int *,TYPE_1__*) ;
 int FUNC_7 (int ,struct merge_index_entry*,int) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_8(void)
{
 git_commit *VAR_4;
 git_oid VAR_5;
 git_revert_options VAR_6 = VAR_1;

 struct merge_index_entry VAR_7[] = {
  { 0100644, "33c6fd981c49a2abf2971482089350bfc5cda8ea", 0, "file-branch.txt" },
  { 0100644, "0cdb66192ee192f70f891f05a47636057420e871", 0, "file1.txt" },
  { 0100644, "73ec36fa120f8066963a0bc9105bb273dbd903d7", 0, "file2.txt" },
 };

 VAR_6.mainline = 2;

 FUNC_4(&VAR_5, "5acdc74af27172ec491d213ee36cea7eb9ef2579");
 FUNC_1(FUNC_3(&VAR_4, VAR_2, &VAR_5));
 FUNC_1(FUNC_5(VAR_2, (git_object *)VAR_4, VAR_0, ((void*)0)));

 FUNC_1(FUNC_6(VAR_2, VAR_4, &VAR_6));

 FUNC_0(FUNC_7(VAR_3, VAR_7, 3));

 FUNC_2(VAR_4);
}
