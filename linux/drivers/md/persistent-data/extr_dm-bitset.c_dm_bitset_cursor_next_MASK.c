
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_bitset_cursor {int bit_index; int entries_remaining; } ;


 int VAR_0 ;
 int FUNC_0 (struct dm_bitset_cursor*) ;

int FUNC_1(struct dm_bitset_cursor *VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_1->entries_remaining)
  return -VAR_0;

 VAR_1->entries_remaining--;
 if (++VAR_1->bit_index > 63)
  VAR_2 = FUNC_0(VAR_1);

 return VAR_2;
}
