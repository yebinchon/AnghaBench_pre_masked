
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct dm_disk_bitset {int current_bits; } ;
typedef int dm_block_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct dm_disk_bitset*,int ,unsigned int,int *) ;
 int FUNC_1 (unsigned int,unsigned long*) ;

int FUNC_2(struct dm_disk_bitset *VAR_1, dm_block_t VAR_2,
         uint32_t VAR_3, dm_block_t *VAR_4, bool *VAR_5)
{
 int VAR_6;
 unsigned VAR_7 = VAR_3 % VAR_0;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_6)
  return VAR_6;

 *VAR_5 = FUNC_1(VAR_7, (unsigned long *) &VAR_1->current_bits);
 return 0;
}
