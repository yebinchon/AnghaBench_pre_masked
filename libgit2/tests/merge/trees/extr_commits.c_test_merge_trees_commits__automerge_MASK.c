
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct merge_reuc_entry {char* member_0; int member_1; int member_2; int member_3; char* member_4; char* member_5; char* member_6; } ;
struct merge_index_entry {int member_0; char* member_1; int member_2; char* member_3; } ;
typedef int git_object ;
typedef int git_merge_options ;
struct TYPE_3__ {scalar_t__ file_size; int id; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;
typedef int git_blob ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int **,int ,int *,int ) ;
 scalar_t__ FUNC_7 (int ,int ,size_t) ;
 int FUNC_8 (int **,int ,char*,char*,int *) ;
 int FUNC_9 (int *,struct merge_index_entry*,int) ;
 int FUNC_10 (int *,struct merge_reuc_entry*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_11 (int ) ;

void FUNC_12(void)
{
 git_index *VAR_4;
 const git_index_entry *VAR_5;
 git_merge_options VAR_6 = VAR_1;
 git_blob *VAR_7;

 struct merge_index_entry VAR_8[] = {
  { 0100644, "233c0919c998ed110a4b6ff36f353aec8b713487", 0, "added-in-master.txt" },
  { 0100644, "f2e1550a0c9e53d5811175864a29536642ae3821", 0, "automergeable.txt" },
  { 0100644, "4eb04c9e79e88f6640d01ff5b25ca2a60764f216", 0, "changed-in-branch.txt" },
  { 0100644, "11deab00b2d3a6f5a3073988ac050c2d7b6655e2", 0, "changed-in-master.txt" },

  { 0100644, "d427e0b2e138501a3d15cc376077a3631e15bd46", 1, "conflicting.txt" },
  { 0100644, "4e886e602529caa9ab11d71f86634bd1b6e0de10", 2, "conflicting.txt" },
  { 0100644, "2bd0a343aeef7a2cf0d158478966a6e587ff3863", 3, "conflicting.txt" },

  { 0100644, "c8f06f2e3bb2964174677e91f0abead0e43c9e5d", 0, "unchanged.txt" },
 };

 struct merge_reuc_entry VAR_9[] = {
  { "automergeable.txt", 0100644, 0100644, 0100644, "6212c31dab5e482247d7977e4f0dd3601decf13b", "ee3fa1b8c00aff7fe02065fdb50864bb0d932ccf", "058541fc37114bfc1dddf6bd6bffc7fae5c2e6fe" },



  { "removed-in-branch.txt", 0100644, 0100644, 0, "dfe3f22baa1f6fce5447901c3086bae368de6bdd", "dfe3f22baa1f6fce5447901c3086bae368de6bdd", "" },



  { "removed-in-master.txt", 0100644, 0, 0100644, "5c3b68a71fc4fa5d362fd3875e53137c6a5ab7a5", "", "5c3b68a71fc4fa5d362fd3875e53137c6a5ab7a5" },



 };

 FUNC_1(FUNC_8(&VAR_4, VAR_3, "master", "branch", &VAR_6));

 FUNC_0(FUNC_9(VAR_4, VAR_8, 8));
 FUNC_0(FUNC_10(VAR_4, VAR_9, 3));

 FUNC_0((VAR_5 = FUNC_5(VAR_4, "automergeable.txt", 0)) != ((void*)0));
 FUNC_0(VAR_5->file_size == FUNC_11(VAR_0));

 FUNC_1(FUNC_6((git_object **)&VAR_7, VAR_3, &VAR_5->id, VAR_2));
 FUNC_0(FUNC_7(FUNC_3(VAR_7), VAR_0, (size_t)VAR_5->file_size) == 0);

 FUNC_4(VAR_4);
 FUNC_2(VAR_7);
}
