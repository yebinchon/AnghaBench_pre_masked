
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ll_disk {int (* open_index ) (struct ll_disk*) ;void* ref_count_root; void* bitmap_root; void* nr_allocated; void* nr_blocks; int commit; int max_entries; int init_index; int save_ie; int load_ie; } ;
struct dm_transaction_manager {int dummy; } ;
struct disk_sm_root {int ref_count_root; int bitmap_root; int nr_allocated; int nr_blocks; } ;
typedef int smr ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct disk_sm_root*,void*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct ll_disk*) ;
 int VAR_5 ;
 int FUNC_4 (struct ll_disk*,struct dm_transaction_manager*) ;
 int FUNC_5 (struct ll_disk*) ;

int FUNC_6(struct ll_disk *VAR_6, struct dm_transaction_manager *VAR_7,
   void *VAR_8, size_t VAR_9)
{
 int VAR_10;
 struct disk_sm_root VAR_11;

 if (VAR_9 < sizeof(struct disk_sm_root)) {
  FUNC_0("sm_metadata root too small");
  return -VAR_0;
 }





 FUNC_2(&VAR_11, VAR_8, sizeof(VAR_11));

 VAR_10 = FUNC_4(VAR_6, VAR_7);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_6->load_ie = VAR_3;
 VAR_6->save_ie = VAR_5;
 VAR_6->init_index = VAR_2;
 VAR_6->open_index = FUNC_3;
 VAR_6->max_entries = VAR_4;
 VAR_6->commit = VAR_1;

 VAR_6->nr_blocks = FUNC_1(VAR_11.nr_blocks);
 VAR_6->nr_allocated = FUNC_1(VAR_11.nr_allocated);
 VAR_6->bitmap_root = FUNC_1(VAR_11.bitmap_root);
 VAR_6->ref_count_root = FUNC_1(VAR_11.ref_count_root);

 return VAR_6->open_index(VAR_6);
}
