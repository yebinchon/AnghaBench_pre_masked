
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cache {int sectors_per_block; int sectors_per_block_shift; TYPE_2__* cache_dev; } ;
struct TYPE_3__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef int sector_t ;
typedef int dm_cblock_t ;
struct TYPE_4__ {int bdev; } ;


 int FUNC_0 (struct bio*,int ) ;
 int FUNC_1 (struct cache*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct cache *VAR_0, struct bio *VAR_1,
      dm_cblock_t VAR_2)
{
 sector_t VAR_3 = VAR_1->bi_iter.bi_sector;
 sector_t VAR_4 = FUNC_2(VAR_2);

 FUNC_0(VAR_1, VAR_0->cache_dev->bdev);
 if (!FUNC_1(VAR_0))
  VAR_1->bi_iter.bi_sector =
   (VAR_4 * VAR_0->sectors_per_block) +
   FUNC_3(VAR_3, VAR_0->sectors_per_block);
 else
  VAR_1->bi_iter.bi_sector =
   (VAR_4 << VAR_0->sectors_per_block_shift) |
   (VAR_3 & (VAR_0->sectors_per_block - 1));
}
