
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct merge_reuc_entry {int dummy; } ;
struct merge_index_entry {int member_0; char* member_1; char* member_3; int member_2; } ;
struct TYPE_4__ {int file_favor; } ;
typedef TYPE_1__ git_merge_options ;
typedef int git_index ;


 struct merge_index_entry VAR_0 ;
 struct merge_index_entry VAR_1 ;
 struct merge_reuc_entry VAR_2 ;
 struct merge_index_entry VAR_3 ;
 struct merge_index_entry VAR_4 ;
 struct merge_reuc_entry VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 struct merge_reuc_entry VAR_8 ;
 struct merge_reuc_entry VAR_9 ;
 int VAR_10 ;
 struct merge_index_entry VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct merge_index_entry*,int) ;
 int FUNC_4 (int *,struct merge_reuc_entry*,int) ;
 int FUNC_5 (int **,int ,char*,int ,TYPE_1__*) ;
 int VAR_12 ;

void FUNC_6(void)
{
 git_index *VAR_13;
 git_merge_options VAR_14 = VAR_7;

 struct merge_index_entry VAR_15[] = {
  VAR_0,
  VAR_1,
  VAR_3,
  VAR_4,
  { 0100644, "4e886e602529caa9ab11d71f86634bd1b6e0de10", 0, "conflicting.txt" },
  VAR_11,
 };

 struct merge_reuc_entry VAR_16[] = {
  VAR_2,
  VAR_5,
  VAR_8,
  VAR_9,
 };

 VAR_14.file_favor = VAR_6;

 FUNC_1(FUNC_5(&VAR_13, VAR_12, "master", VAR_10, &VAR_14));

 FUNC_0(FUNC_3(VAR_13, VAR_15, 6));
 FUNC_0(FUNC_4(VAR_13, VAR_16, 4));

 FUNC_2(VAR_13);
}
