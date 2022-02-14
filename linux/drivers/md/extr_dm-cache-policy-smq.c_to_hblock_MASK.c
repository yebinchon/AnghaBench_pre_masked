
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {int cache_blocks_per_hotspot_block; } ;
typedef int sector_t ;
typedef int dm_oblock_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static dm_oblock_t FUNC_3(struct smq_policy *VAR_0, dm_oblock_t VAR_1)
{
 sector_t VAR_2 = FUNC_0(VAR_1);
 (void) FUNC_1(VAR_2, VAR_0->cache_blocks_per_hotspot_block);
 return FUNC_2(VAR_2);
}
