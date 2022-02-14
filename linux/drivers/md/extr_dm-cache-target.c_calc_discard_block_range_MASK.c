
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache {scalar_t__ discard_block_size; } ;
struct TYPE_2__ {scalar_t__ bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef scalar_t__ sector_t ;
typedef int dm_dblock_t ;


 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct cache *VAR_0, struct bio *VAR_1,
         dm_dblock_t *VAR_2, dm_dblock_t *VAR_3)
{
 sector_t VAR_4 = VAR_1->bi_iter.bi_sector;
 sector_t VAR_5 = FUNC_0(VAR_1);

 *VAR_2 = FUNC_3(FUNC_2(VAR_4, VAR_0->discard_block_size));

 if (VAR_5 - VAR_4 < VAR_0->discard_block_size)
  *VAR_3 = *VAR_2;
 else
  *VAR_3 = FUNC_3(FUNC_1(VAR_5, VAR_0->discard_block_size));
}
