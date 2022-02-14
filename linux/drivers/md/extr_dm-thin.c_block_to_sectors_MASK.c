
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool {int sectors_per_block_shift; int sectors_per_block; } ;
typedef int sector_t ;
typedef int dm_block_t ;


 scalar_t__ FUNC_0 (struct pool*) ;

__attribute__((used)) static sector_t FUNC_1(struct pool *VAR_0, dm_block_t VAR_1)
{
 return FUNC_0(VAR_0) ?
  (VAR_1 << VAR_0->sectors_per_block_shift) :
  (VAR_1 * VAR_0->sectors_per_block);
}
