
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct merge_reuc_entry {int dummy; } ;
struct merge_index_entry {int member_0; char* member_1; char* member_3; int member_2; } ;


 struct merge_index_entry VAR_0 ;
 struct merge_index_entry VAR_1 ;
 struct merge_reuc_entry VAR_2 ;
 struct merge_index_entry VAR_3 ;
 struct merge_index_entry VAR_4 ;
 struct merge_reuc_entry VAR_5 ;
 int VAR_6 ;
 struct merge_reuc_entry VAR_7 ;
 struct merge_reuc_entry VAR_8 ;
 struct merge_index_entry VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct merge_index_entry*,int) ;
 int FUNC_3 (int ,struct merge_reuc_entry*,int) ;
 int VAR_10 ;

void FUNC_4(void)
{
 struct merge_index_entry VAR_11[] = {
  VAR_0,
  VAR_1,
  VAR_3,
  VAR_4,
  { 0100644, "4e886e602529caa9ab11d71f86634bd1b6e0de10", 0, "conflicting.txt" },
  VAR_9,
 };

 struct merge_reuc_entry VAR_12[] = {
  VAR_2,
  VAR_5,
  VAR_7,
  VAR_8,
 };

 FUNC_1(VAR_6, 0);

 FUNC_0(FUNC_2(VAR_10, VAR_11, 6));
 FUNC_0(FUNC_3(VAR_10, VAR_12, 4));
}
