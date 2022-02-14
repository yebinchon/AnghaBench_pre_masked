
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ll_disk {unsigned int nr_blocks; unsigned int (* max_entries ) (struct ll_disk*) ;int (* save_ie ) (struct ll_disk*,unsigned int,struct disk_index_entry*) ;int entries_per_block; int tm; } ;
struct dm_block {int dummy; } ;
struct disk_index_entry {scalar_t__ none_free_before; int nr_free; int blocknr; } ;
typedef unsigned int dm_block_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dm_block*) ;
 unsigned int FUNC_4 (unsigned int,int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,int *,struct dm_block**) ;
 int FUNC_6 (int ,struct dm_block*) ;
 unsigned int FUNC_7 (struct ll_disk*) ;
 int FUNC_8 (struct ll_disk*,unsigned int,struct disk_index_entry*) ;

int FUNC_9(struct ll_disk *VAR_2, dm_block_t VAR_3)
{
 int VAR_4;
 dm_block_t VAR_5, VAR_6, VAR_7;
 unsigned VAR_8, VAR_9;

 VAR_6 = VAR_2->nr_blocks + VAR_3;
 VAR_8 = FUNC_4(VAR_2->nr_blocks, VAR_2->entries_per_block);
 VAR_9 = FUNC_4(VAR_6, VAR_2->entries_per_block);

 VAR_7 = FUNC_4(VAR_6, VAR_2->entries_per_block);
 if (VAR_7 > VAR_2->max_entries(VAR_2)) {
  FUNC_0("space map too large");
  return -VAR_0;
 }




 VAR_2->nr_blocks = VAR_6;
 for (VAR_5 = VAR_8; VAR_5 < VAR_9; VAR_5++) {
  struct dm_block *VAR_10;
  struct disk_index_entry VAR_11;

  VAR_4 = FUNC_5(VAR_2->tm, &VAR_1, &VAR_10);
  if (VAR_4 < 0)
   return VAR_4;

  VAR_11.blocknr = FUNC_2(FUNC_3(VAR_10));

  FUNC_6(VAR_2->tm, VAR_10);

  VAR_11.nr_free = FUNC_1(VAR_2->entries_per_block);
  VAR_11.none_free_before = 0;

  VAR_4 = VAR_2->save_ie(VAR_2, VAR_5, &VAR_11);
  if (VAR_4 < 0)
   return VAR_4;
 }

 return 0;
}
