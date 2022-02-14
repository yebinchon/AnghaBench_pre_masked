
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
  { 0100644, "1bde1883de4977ea3e664b315da951d1f614c3b1", 0, "targetfile.txt" },
  { 0100644, "b7de2b52ba055688061355fad1599a5d214ce8f8", 1, "version.txt" },
  { 0100644, "358efd6f589384fa8baf92234db9c7899a53916e", 2, "version.txt" },
  { 0100644, "a664873b1c0b9a1ed300f8644dde536fdaa3a34f", 3, "version.txt" },
 };

 FUNC_1(FUNC_3(&VAR_2, VAR_1, "branchJ-1", "branchJ-2", &VAR_3));

 FUNC_0(FUNC_4(VAR_2, VAR_4, 4));

 FUNC_2(VAR_2);
}
