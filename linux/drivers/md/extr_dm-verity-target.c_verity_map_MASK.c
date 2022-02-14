
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bi_sector; int bi_size; } ;
struct dm_verity_io {int block; int n_blocks; TYPE_2__ iter; int orig_bi_end_io; struct dm_verity* v; } ;
struct dm_verity {int data_dev_block_bits; int data_blocks; TYPE_1__* data_dev; } ;
struct dm_target {int per_io_data_size; struct dm_verity* private; } ;
struct bio {TYPE_2__ bi_iter; struct dm_verity_io* bi_private; int bi_end_io; } ;
struct TYPE_3__ {int bdev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 unsigned int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*,int ) ;
 struct dm_verity_io* FUNC_5 (struct bio*,int ) ;
 int FUNC_6 (struct bio*) ;
 int VAR_4 ;
 int FUNC_7 (struct dm_verity_io*) ;
 int FUNC_8 (struct dm_verity*,int) ;
 int FUNC_9 (struct dm_verity*,struct dm_verity_io*) ;

__attribute__((used)) static int FUNC_10(struct dm_target *VAR_5, struct bio *VAR_6)
{
 struct dm_verity *VAR_7 = VAR_5->private;
 struct dm_verity_io *VAR_8;

 FUNC_4(VAR_6, VAR_7->data_dev->bdev);
 VAR_6->bi_iter.bi_sector = FUNC_8(VAR_7, VAR_6->bi_iter.bi_sector);

 if (((unsigned)VAR_6->bi_iter.bi_sector | FUNC_3(VAR_6)) &
     ((1 << (VAR_7->data_dev_block_bits - VAR_2)) - 1)) {
  FUNC_0("unaligned io");
  return VAR_0;
 }

 if (FUNC_2(VAR_6) >>
     (VAR_7->data_dev_block_bits - VAR_2) > VAR_7->data_blocks) {
  FUNC_0("io out of range");
  return VAR_0;
 }

 if (FUNC_1(VAR_6) == VAR_3)
  return VAR_0;

 VAR_8 = FUNC_5(VAR_6, VAR_5->per_io_data_size);
 VAR_8->v = VAR_7;
 VAR_8->orig_bi_end_io = VAR_6->bi_end_io;
 VAR_8->block = VAR_6->bi_iter.bi_sector >> (VAR_7->data_dev_block_bits - VAR_2);
 VAR_8->n_blocks = VAR_6->bi_iter.bi_size >> VAR_7->data_dev_block_bits;

 VAR_6->bi_end_io = VAR_4;
 VAR_6->bi_private = VAR_8;
 VAR_8->iter = VAR_6->bi_iter;

 FUNC_7(VAR_8);

 FUNC_9(VAR_7, VAR_8);

 FUNC_6(VAR_6);

 return VAR_1;
}
