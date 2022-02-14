
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct era {int sectors_per_block_shift; int sectors_per_block; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef int sector_t ;
typedef int dm_block_t ;


 int FUNC_0 (struct era*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static dm_block_t FUNC_2(struct era *VAR_0, struct bio *VAR_1)
{
 sector_t VAR_2 = VAR_1->bi_iter.bi_sector;

 if (!FUNC_0(VAR_0))
  (void) FUNC_1(VAR_2, VAR_0->sectors_per_block);
 else
  VAR_2 >>= VAR_0->sectors_per_block_shift;

 return VAR_2;
}
