
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dm_disk_bitset {int current_index_set; int dirty; int current_index; int current_bits; int array_info; } ;
typedef int dm_block_t ;
typedef int __le64 ;


 int FUNC_0 (int *,int ,int ,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct dm_disk_bitset *VAR_0, dm_block_t VAR_1,
       uint32_t VAR_2)
{
 int VAR_3;
 __le64 VAR_4;

 VAR_3 = FUNC_0(&VAR_0->array_info, VAR_1, VAR_2, &VAR_4);
 if (VAR_3)
  return VAR_3;

 VAR_0->current_bits = FUNC_1(VAR_4);
 VAR_0->current_index_set = 1;
 VAR_0->current_index = VAR_2;
 VAR_0->dirty = 0;

 return 0;
}
