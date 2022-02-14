
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cell_key_v2 {void* block_end; void* block_begin; scalar_t__ dev; scalar_t__ virtual; } ;
typedef int dm_oblock_t ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(dm_oblock_t VAR_0, dm_oblock_t VAR_1, struct dm_cell_key_v2 *VAR_2)
{
 VAR_2->virtual = 0;
 VAR_2->dev = 0;
 VAR_2->block_begin = FUNC_0(VAR_0);
 VAR_2->block_end = FUNC_0(VAR_1);
}
