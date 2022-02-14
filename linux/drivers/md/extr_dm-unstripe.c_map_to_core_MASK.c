
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct unstripe_c {int chunk_shift; int unstripe_width; int unstripe_offset; int chunk_size; } ;
struct dm_target {struct unstripe_c* private; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef int sector_t ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static sector_t FUNC_1(struct dm_target *VAR_0, struct bio *VAR_1)
{
 struct unstripe_c *VAR_2 = VAR_0->private;
 sector_t VAR_3 = VAR_1->bi_iter.bi_sector;
 sector_t VAR_4 = VAR_3;


 if (VAR_2->chunk_shift)
  VAR_4 >>= VAR_2->chunk_shift;
 else
  FUNC_0(VAR_4, VAR_2->chunk_size);

 VAR_3 += VAR_2->unstripe_width * VAR_4;


 return VAR_3 + VAR_2->unstripe_offset;
}
