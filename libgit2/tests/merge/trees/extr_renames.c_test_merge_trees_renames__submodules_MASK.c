
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_index_entry {int member_0; char* member_1; int member_2; char* member_3; } ;
typedef int git_merge_options ;
typedef int git_index ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct merge_index_entry*,int) ;
 int FUNC_4 (int **,int ,char*,char*,int *) ;
 int VAR_0 ;

void FUNC_5(void)
{
 git_index *VAR_1;
 git_merge_options *VAR_2 = ((void*)0);

 struct merge_index_entry VAR_3[] = {
  { 0100644, "cd3e8d4aa06bdc781f264171030bc28f2b370fee", 0, ".gitmodules" },
  { 0100644, "4dd1ef7569b18d92d93c0a35bb6b93049137b355", 1, "file.txt" },
  { 0100644, "a2d8d1824c68541cca94ffb90f79291eba495921", 2, "file.txt" },
  { 0100644, "63ec604d491161ddafdae4179843c26d54bd999a", 3, "file.txt" },
  { 0160000, "0000000000000000000000000000000000000001", 1, "submodule1" },
  { 0160000, "0000000000000000000000000000000000000002", 3, "submodule1" },
  { 0160000, "0000000000000000000000000000000000000003", 0, "submodule2" },
 };

 FUNC_1(FUNC_4(&VAR_1, VAR_0,
  "submodule_rename1", "submodule_rename2",
  VAR_2));
 FUNC_0(FUNC_3(VAR_1, VAR_3, 7));
 FUNC_2(VAR_1);
}
