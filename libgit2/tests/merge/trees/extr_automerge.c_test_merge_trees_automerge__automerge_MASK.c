
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct merge_reuc_entry {int dummy; } ;
struct merge_index_entry {int member_0; char* member_1; int member_2; char* member_3; } ;
typedef int git_object ;
typedef int git_merge_options ;
struct TYPE_3__ {scalar_t__ file_size; int id; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;
typedef int git_blob ;


 struct merge_index_entry VAR_0 ;
 struct merge_index_entry VAR_1 ;
 int VAR_2 ;
 struct merge_reuc_entry VAR_3 ;
 struct merge_index_entry VAR_4 ;
 struct merge_index_entry VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct merge_reuc_entry VAR_8 ;
 struct merge_reuc_entry VAR_9 ;
 int VAR_10 ;
 struct merge_index_entry VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int **,int ,int *,int ) ;
 scalar_t__ FUNC_7 (int ,int ,size_t) ;
 int FUNC_8 (int *,struct merge_index_entry*,int) ;
 int FUNC_9 (int *,struct merge_reuc_entry*,int) ;
 int FUNC_10 (int **,int ,char*,int ,int *) ;
 int VAR_12 ;
 scalar_t__ FUNC_11 (int ) ;

void FUNC_12(void)
{
 git_index *VAR_13;
 const git_index_entry *VAR_14;
 git_merge_options VAR_15 = VAR_6;
 git_blob *VAR_16;

 struct merge_index_entry VAR_17[] = {
  VAR_0,
  VAR_1,
  VAR_4,
  VAR_5,

  { 0100644, "d427e0b2e138501a3d15cc376077a3631e15bd46", 1, "conflicting.txt" },
  { 0100644, "4e886e602529caa9ab11d71f86634bd1b6e0de10", 2, "conflicting.txt" },
  { 0100644, "2bd0a343aeef7a2cf0d158478966a6e587ff3863", 3, "conflicting.txt" },

  VAR_11,
 };

 struct merge_reuc_entry VAR_18[] = {
  VAR_3,
  VAR_8,
  VAR_9
 };

 FUNC_1(FUNC_10(&VAR_13, VAR_12, "master", VAR_10, &VAR_15));

 FUNC_0(FUNC_8(VAR_13, VAR_17, 8));
 FUNC_0(FUNC_9(VAR_13, VAR_18, 3));

 FUNC_0((VAR_14 = FUNC_5(VAR_13, "automergeable.txt", 0)) != ((void*)0));
 FUNC_0(VAR_14->file_size == FUNC_11(VAR_2));

 FUNC_1(FUNC_6((git_object **)&VAR_16, VAR_12, &VAR_14->id, VAR_7));
 FUNC_0(FUNC_7(FUNC_3(VAR_16), VAR_2, (size_t)VAR_14->file_size) == 0);

 FUNC_4(VAR_13);
 FUNC_2(VAR_16);
}
