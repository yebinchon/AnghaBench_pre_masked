
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ll_disk {int (* load_ie ) (struct ll_disk*,int ,struct disk_index_entry*) ;int tm; int entries_per_block; } ;
struct dm_block {int dummy; } ;
struct disk_index_entry {int blocknr; } ;
typedef int dm_block_t ;


 int FUNC_0 (struct dm_block*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int *,struct dm_block**) ;
 int FUNC_2 (int ,struct dm_block*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct ll_disk*,int ,struct disk_index_entry*) ;

int FUNC_7(struct ll_disk *VAR_1, dm_block_t VAR_2, uint32_t *VAR_3)
{
 int VAR_4;
 dm_block_t VAR_5 = VAR_2;
 struct disk_index_entry VAR_6;
 struct dm_block *VAR_7;

 VAR_2 = FUNC_3(VAR_5, VAR_1->entries_per_block);
 VAR_4 = VAR_1->load_ie(VAR_1, VAR_5, &VAR_6);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_1->tm, FUNC_4(VAR_6.blocknr),
       &VAR_0, &VAR_7);
 if (VAR_4 < 0)
  return VAR_4;

 *VAR_3 = FUNC_5(FUNC_0(VAR_7), VAR_2);

 FUNC_2(VAR_1->tm, VAR_7);

 return 0;
}
