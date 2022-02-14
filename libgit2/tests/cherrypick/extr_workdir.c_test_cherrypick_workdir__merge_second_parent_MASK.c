
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct merge_index_entry {int member_0; char* member_1; char* member_3; int member_2; } ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_commit ;
struct TYPE_4__ {int mainline; } ;
typedef TYPE_1__ git_cherrypick_options ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int ,int *,int ,int *) ;
 int FUNC_7 (int ,struct merge_index_entry*,int) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_8(void)
{
 git_commit *VAR_4, *VAR_5;
 git_oid VAR_6, VAR_7;
 git_cherrypick_options VAR_8 = VAR_0;

 struct merge_index_entry VAR_9[] = {
  { 0100644, "487434cace79238a7091e2220611d4f20a765690", 0, "file1.txt" },
  { 0100644, "e5183bfd18e3a0a691fadde2f0d5610b73282d31", 0, "file2.txt" },
  { 0100644, "409a1bec58bf35348e8b62b72bb9c1f45cf5a587", 0, "file3.txt" },
 };

 VAR_8.mainline = 2;

 FUNC_5(&VAR_6, "cfc4f0999a8367568e049af4f72e452d40828a15");
 FUNC_1(FUNC_4(&VAR_4, VAR_2, &VAR_6));
 FUNC_1(FUNC_6(VAR_2, (git_object *)VAR_4, VAR_1, ((void*)0)));

 FUNC_5(&VAR_7, "abe4603bc7cd5b8167a267e0e2418fd2348f8cff");
 FUNC_1(FUNC_4(&VAR_5, VAR_2, &VAR_7));

 FUNC_1(FUNC_2(VAR_2, VAR_5, &VAR_8));

 FUNC_0(FUNC_7(VAR_3, VAR_9, 3));

 FUNC_3(VAR_5);
 FUNC_3(VAR_4);
}
