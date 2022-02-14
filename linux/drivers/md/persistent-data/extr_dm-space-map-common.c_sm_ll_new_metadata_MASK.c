
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ll_disk {int (* init_index ) (struct ll_disk*) ;int ref_count_root; int ref_count_info; scalar_t__ nr_allocated; scalar_t__ nr_blocks; int commit; int max_entries; int open_index; int save_ie; int load_ie; } ;
struct dm_transaction_manager {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct ll_disk*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ll_disk*,struct dm_transaction_manager*) ;
 int FUNC_3 (struct ll_disk*) ;

int FUNC_4(struct ll_disk *VAR_5, struct dm_transaction_manager *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_2(VAR_5, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_5->load_ie = VAR_1;
 VAR_5->save_ie = VAR_4;
 VAR_5->init_index = FUNC_1;
 VAR_5->open_index = VAR_3;
 VAR_5->max_entries = VAR_2;
 VAR_5->commit = VAR_0;

 VAR_5->nr_blocks = 0;
 VAR_5->nr_allocated = 0;

 VAR_7 = VAR_5->init_index(VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_0(&VAR_5->ref_count_info, &VAR_5->ref_count_root);
 if (VAR_7 < 0)
  return VAR_7;

 return 0;
}
