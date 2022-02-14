
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_disk_bitset {int current_index_set; int dirty; int current_index; int array_info; int current_bits; } ;
typedef int dm_block_t ;
typedef int __le64 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ,int *,int *) ;

int FUNC_3(struct dm_disk_bitset *VAR_0, dm_block_t VAR_1,
      dm_block_t *VAR_2)
{
 int VAR_3;
 __le64 VAR_4;

 if (!VAR_0->current_index_set || !VAR_0->dirty)
  return 0;

 VAR_4 = FUNC_1(VAR_0->current_bits);

 FUNC_0(&VAR_4);
 VAR_3 = FUNC_2(&VAR_0->array_info, VAR_1, VAR_0->current_index,
          &VAR_4, VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_0->current_index_set = 0;
 VAR_0->dirty = 0;

 return 0;
}
