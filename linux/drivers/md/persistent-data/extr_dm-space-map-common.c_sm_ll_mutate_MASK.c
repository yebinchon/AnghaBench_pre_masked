
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ll_disk {int (* load_ie ) (struct ll_disk*,int ,struct disk_index_entry*) ;int (* save_ie ) (struct ll_disk*,int ,struct disk_index_entry*) ;int nr_allocated; int ref_count_root; int ref_count_info; int tm; int entries_per_block; } ;
struct dm_block {int dummy; } ;
struct disk_index_entry {void* none_free_before; int nr_free; int blocknr; } ;
typedef enum allocation_event { ____Placeholder_allocation_event } allocation_event ;
typedef int dm_block_t ;
typedef void* __le32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void**) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (struct dm_block*) ;
 int FUNC_5 (struct dm_block*) ;
 int FUNC_6 (int *,int ,int *,void**,int *) ;
 int FUNC_7 (int *,int ,int *,int *) ;
 int VAR_3 ;
 int FUNC_8 (int ,int ,int *,struct dm_block**,int*) ;
 int FUNC_9 (int ,struct dm_block*) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (struct ll_disk*,int ,int*) ;
 int FUNC_16 (void*,int) ;
 int FUNC_17 (void*,int,int) ;
 int FUNC_18 (struct ll_disk*,int ,struct disk_index_entry*) ;
 int FUNC_19 (struct ll_disk*,int ,struct disk_index_entry*) ;

__attribute__((used)) static int FUNC_20(struct ll_disk *VAR_4, dm_block_t VAR_5,
   int (*VAR_6)(void *VAR_7, uint32_t VAR_8, uint32_t *VAR_9),
   void *VAR_10, enum allocation_event *VAR_11)
{
 int VAR_12;
 uint32_t VAR_13, VAR_14, VAR_15;
 struct dm_block *VAR_16;
 dm_block_t VAR_17 = VAR_5;
 struct disk_index_entry VAR_18;
 void *VAR_19;
 int VAR_20;

 VAR_13 = FUNC_10(VAR_17, VAR_4->entries_per_block);
 VAR_12 = VAR_4->load_ie(VAR_4, VAR_17, &VAR_18);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_12 = FUNC_8(VAR_4->tm, FUNC_13(VAR_18.blocknr),
          &VAR_3, &VAR_16, &VAR_20);
 if (VAR_12 < 0) {
  FUNC_0("dm_tm_shadow_block() failed");
  return VAR_12;
 }
 VAR_18.blocknr = FUNC_3(FUNC_5(VAR_16));

 VAR_19 = FUNC_4(VAR_16);
 VAR_14 = FUNC_16(VAR_19, VAR_13);

 if (VAR_14 > 2) {
  VAR_12 = FUNC_15(VAR_4, VAR_5, &VAR_14);
  if (VAR_12 < 0) {
   FUNC_9(VAR_4->tm, VAR_16);
   return VAR_12;
  }
 }

 VAR_12 = VAR_6(VAR_10, VAR_14, &VAR_15);
 if (VAR_12) {
  FUNC_9(VAR_4->tm, VAR_16);
  return VAR_12;
 }

 if (VAR_15 <= 2) {
  FUNC_17(VAR_19, VAR_13, VAR_15);

  FUNC_9(VAR_4->tm, VAR_16);

  if (VAR_14 > 2) {
   VAR_12 = FUNC_7(&VAR_4->ref_count_info,
         VAR_4->ref_count_root,
         &VAR_5, &VAR_4->ref_count_root);
   if (VAR_12)
    return VAR_12;
  }

 } else {
  __le32 VAR_21 = FUNC_2(VAR_15);

  FUNC_17(VAR_19, VAR_13, 3);
  FUNC_9(VAR_4->tm, VAR_16);

  FUNC_1(&VAR_21);
  VAR_12 = FUNC_6(&VAR_4->ref_count_info, VAR_4->ref_count_root,
        &VAR_5, &VAR_21, &VAR_4->ref_count_root);
  if (VAR_12 < 0) {
   FUNC_0("ref count insert failed");
   return VAR_12;
  }
 }

 if (VAR_15 && !VAR_14) {
  *VAR_11 = VAR_0;
  VAR_4->nr_allocated++;
  FUNC_11(&VAR_18.nr_free, -1);
  if (FUNC_12(VAR_18.none_free_before) == VAR_13)
   VAR_18.none_free_before = FUNC_2(VAR_13 + 1);

 } else if (VAR_14 && !VAR_15) {
  *VAR_11 = VAR_1;
  VAR_4->nr_allocated--;
  FUNC_11(&VAR_18.nr_free, 1);
  VAR_18.none_free_before = FUNC_2(FUNC_14(FUNC_12(VAR_18.none_free_before), VAR_13));
 } else
  *VAR_11 = VAR_2;

 return VAR_4->save_ie(VAR_4, VAR_17, &VAR_18);
}
