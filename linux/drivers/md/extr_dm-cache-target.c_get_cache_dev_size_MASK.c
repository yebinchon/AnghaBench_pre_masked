
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int sectors_per_block; int cache_dev; } ;
typedef int sector_t ;
typedef int dm_cblock_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static dm_cblock_t FUNC_3(struct cache *VAR_0)
{
 sector_t VAR_1 = FUNC_0(VAR_0->cache_dev);
 (void) FUNC_1(VAR_1, VAR_0->sectors_per_block);
 return FUNC_2(VAR_1);
}
