
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_index_entry {int member_0; char* member_1; int member_2; char* member_3; } ;
typedef int git_merge_options ;
typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,char*,char*,int *) ;
 int FUNC_4 (int *,struct merge_index_entry*,int) ;
 int VAR_1 ;

void FUNC_5(void)
{
 git_index *VAR_2;
 git_merge_options VAR_3 = VAR_0;

 struct merge_index_entry VAR_4[] = {
  { 0100644, "4a06b258fed8a4d15967ec4253ae7366b70f727d", 0, "targetfile.txt" },
  { 0100644, "b6bd0f9952f396e757d3f91e08c59a7e91707201", 1, "version.txt" },
  { 0100644, "f0856993e005c0d8ed2dc7cdc222cc1d89fb3c77", 2, "version.txt" },
  { 0100644, "2cba583804a4a6fad1baf97c959be447238d1489", 3, "version.txt" },
 };

 FUNC_1(FUNC_3(&VAR_2, VAR_1, "branchK-1", "branchK-2", &VAR_3));

 FUNC_0(FUNC_4(VAR_2, VAR_4, 4));

 FUNC_2(VAR_2);
}
