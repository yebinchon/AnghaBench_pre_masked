
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_index_entry {int member_0; char* member_1; int member_2; char* member_3; } ;
typedef int git_merge_options ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct merge_index_entry*,int) ;
 int FUNC_4 (int **,int ,char*,int ,int *) ;
 int VAR_2 ;

void FUNC_5(void)
{
 git_index *VAR_3;
 git_merge_options VAR_4 = VAR_0;

 struct merge_index_entry VAR_5[] = {
  { 0100644, "233c0919c998ed110a4b6ff36f353aec8b713487", 0, "added-in-master.txt" },
  { 0100644, "ee3fa1b8c00aff7fe02065fdb50864bb0d932ccf", 2, "automergeable.txt" },
  { 0100644, "d07ec190c306ec690bac349e87d01c4358e49bb2", 3, "automergeable.txt" },
  { 0100644, "ab6c44a2e84492ad4b41bb6bac87353e9d02ac8b", 0, "changed-in-branch.txt" },
  { 0100644, "11deab00b2d3a6f5a3073988ac050c2d7b6655e2", 0, "changed-in-master.txt" },
  { 0100644, "4e886e602529caa9ab11d71f86634bd1b6e0de10", 2, "conflicting.txt" },
  { 0100644, "4b253da36a0ae8bfce63aeabd8c5b58429925594", 3, "conflicting.txt" },
  { 0100644, "ef58fdd8086c243bdc81f99e379acacfd21d32d6", 0, "new-in-unrelated1.txt" },
  { 0100644, "948ba6e701c1edab0c2d394fb7c5538334129793", 0, "new-in-unrelated2.txt" },
  { 0100644, "dfe3f22baa1f6fce5447901c3086bae368de6bdd", 0, "removed-in-branch.txt" },
  { 0100644, "c8f06f2e3bb2964174677e91f0abead0e43c9e5d", 0, "unchanged.txt" },
 };

 FUNC_1(FUNC_4(&VAR_3, VAR_2, "master", VAR_1, &VAR_4));

 FUNC_0(FUNC_3(VAR_3, VAR_5, 11));

 FUNC_2(VAR_3);
}
