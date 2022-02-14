
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_verity {int hash_per_block_bits; } ;
typedef int sector_t ;



__attribute__((used)) static sector_t FUNC_0(struct dm_verity *VAR_0, sector_t VAR_1,
      int VAR_2)
{
 return VAR_1 >> (VAR_2 * VAR_0->hash_per_block_bits);
}
