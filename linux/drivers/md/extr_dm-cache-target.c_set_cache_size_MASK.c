
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {scalar_t__ cache_size; } ;
typedef scalar_t__ dm_cblock_t ;
typedef int dm_block_t ;


 int FUNC_0 (char*,unsigned long long) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct cache *VAR_0, dm_cblock_t VAR_1)
{
 dm_block_t VAR_2 = FUNC_1(VAR_1);

 if (VAR_2 > (1 << 20) && VAR_0->cache_size != VAR_1)
  FUNC_0("You have created a cache device with a lot of individual cache blocks (%llu)\n"
        "All these mappings can consume a lot of kernel memory, and take some time to read/write.\n"
        "Please consider increasing the cache block size to reduce the overall cache block count.",
        (unsigned long long) VAR_2);

 VAR_0->cache_size = VAR_1;
}
