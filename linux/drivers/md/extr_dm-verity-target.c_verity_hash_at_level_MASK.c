
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_verity {int* hash_level_block; int hash_per_block_bits; unsigned int digest_size; unsigned int hash_dev_block_bits; int version; } ;
typedef int sector_t ;


 int FUNC_0 (struct dm_verity*,int,int) ;

__attribute__((used)) static void FUNC_1(struct dm_verity *VAR_0, sector_t VAR_1, int VAR_2,
     sector_t *VAR_3, unsigned *VAR_4)
{
 sector_t VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);
 unsigned VAR_6;

 *VAR_3 = VAR_0->hash_level_block[VAR_2] + (VAR_5 >> VAR_0->hash_per_block_bits);

 if (!VAR_4)
  return;

 VAR_6 = VAR_5 & ((1 << VAR_0->hash_per_block_bits) - 1);
 if (!VAR_0->version)
  *VAR_4 = VAR_6 * VAR_0->digest_size;
 else
  *VAR_4 = VAR_6 << (VAR_0->hash_dev_block_bits - VAR_0->hash_per_block_bits);
}
