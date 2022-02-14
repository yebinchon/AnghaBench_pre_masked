
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int cache_blocks; } ;
typedef int dm_cblock_t ;


 int FUNC_0 (struct dm_cache_metadata*) ;
 int FUNC_1 (struct dm_cache_metadata*) ;

int FUNC_2(struct dm_cache_metadata *VAR_0, dm_cblock_t *VAR_1)
{
 FUNC_0(VAR_0);
 *VAR_1 = VAR_0->cache_blocks;
 FUNC_1(VAR_0);

 return 0;
}
