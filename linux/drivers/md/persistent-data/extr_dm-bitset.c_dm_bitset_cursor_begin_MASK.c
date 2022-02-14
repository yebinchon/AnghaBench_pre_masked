
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct dm_disk_bitset {int array_info; } ;
struct dm_bitset_cursor {int current_bits; scalar_t__ bit_index; scalar_t__ array_index; int cursor; scalar_t__ entries_remaining; struct dm_disk_bitset* info; } ;
typedef int dm_block_t ;
typedef int __le64 ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,void**) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct dm_disk_bitset *VAR_1,
      dm_block_t VAR_2, uint32_t VAR_3,
      struct dm_bitset_cursor *VAR_4)
{
 int VAR_5;
 __le64 *VAR_6;

 if (!VAR_3)
  return -VAR_0;

 VAR_4->info = VAR_1;
 VAR_4->entries_remaining = VAR_3;

 VAR_5 = FUNC_0(&VAR_1->array_info, VAR_2, &VAR_4->cursor);
 if (VAR_5)
  return VAR_5;

 FUNC_1(&VAR_4->cursor, (void **) &VAR_6);
 VAR_4->array_index = 0;
 VAR_4->bit_index = 0;
 VAR_4->current_bits = FUNC_2(*VAR_6);

 return VAR_5;
}
