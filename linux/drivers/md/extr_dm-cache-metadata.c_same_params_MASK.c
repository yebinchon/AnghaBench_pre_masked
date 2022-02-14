
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {scalar_t__ data_block_size; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (char*,unsigned long long,unsigned long long) ;

__attribute__((used)) static bool FUNC_1(struct dm_cache_metadata *VAR_0, sector_t VAR_1)
{
 if (VAR_0->data_block_size != VAR_1) {
  FUNC_0("data_block_size (%llu) different from that in metadata (%llu)",
        (unsigned long long) VAR_1,
        (unsigned long long) VAR_0->data_block_size);
  return 0;
 }

 return 1;
}
