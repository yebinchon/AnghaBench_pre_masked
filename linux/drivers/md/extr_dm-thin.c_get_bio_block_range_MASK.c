
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thin_c {struct pool* pool; } ;
struct pool {unsigned long long sectors_per_block; int sectors_per_block_shift; } ;
struct TYPE_2__ {int bi_sector; int bi_size; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef int sector_t ;
typedef int dm_block_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pool*) ;
 int FUNC_1 (int,unsigned long long) ;

__attribute__((used)) static void FUNC_2(struct thin_c *VAR_1, struct bio *VAR_2,
    dm_block_t *VAR_3, dm_block_t *VAR_4)
{
 struct pool *VAR_5 = VAR_1->pool;
 sector_t VAR_6 = VAR_2->bi_iter.bi_sector;
 sector_t VAR_7 = VAR_6 + (VAR_2->bi_iter.bi_size >> VAR_0);

 VAR_6 += VAR_5->sectors_per_block - 1ull;

 if (FUNC_0(VAR_5)) {
  VAR_6 >>= VAR_5->sectors_per_block_shift;
  VAR_7 >>= VAR_5->sectors_per_block_shift;
 } else {
  (void) FUNC_1(VAR_6, VAR_5->sectors_per_block);
  (void) FUNC_1(VAR_7, VAR_5->sectors_per_block);
 }

 if (VAR_7 < VAR_6)

  VAR_7 = VAR_6;

 *VAR_3 = VAR_6;
 *VAR_4 = VAR_7;
}
