
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct dm_disk_bitset {unsigned int current_index; scalar_t__ current_index_set; } ;
typedef int dm_block_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct dm_disk_bitset*,int ,int *) ;
 int FUNC_1 (struct dm_disk_bitset*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct dm_disk_bitset *VAR_1, dm_block_t VAR_2,
      uint32_t VAR_3, dm_block_t *VAR_4)
{
 int VAR_5;
 unsigned VAR_6 = VAR_3 / VAR_0;

 if (VAR_1->current_index_set) {
  if (VAR_1->current_index == VAR_6)
   return 0;

  VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 return FUNC_1(VAR_1, VAR_2, VAR_6);
}
