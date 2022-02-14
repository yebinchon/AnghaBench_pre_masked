
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thin_c {TYPE_1__* pool_dev; struct pool* pool; } ;
struct TYPE_4__ {scalar_t__ zero_new_blocks; } ;
struct pool {int sectors_per_block; TYPE_2__ pf; int copier; int shared_read_ds; } ;
struct dm_thin_new_mapping {int virt_begin; int virt_end; int data_block; int prepare_actions; int list; struct dm_bio_prison_cell* cell; struct thin_c* tc; } ;
struct dm_io_region {int sector; int count; int bdev; } ;
struct dm_dev {int bdev; } ;
struct dm_bio_prison_cell {int dummy; } ;
struct bio {int dummy; } ;
typedef int sector_t ;
typedef int dm_block_t ;
struct TYPE_3__ {int bdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct dm_thin_new_mapping*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,struct dm_io_region*,int,struct dm_io_region*,int ,int ,struct dm_thin_new_mapping*) ;
 struct dm_thin_new_mapping* FUNC_5 (struct pool*) ;
 scalar_t__ FUNC_6 (struct pool*,struct bio*) ;
 int FUNC_7 (struct thin_c*,struct dm_thin_new_mapping*,int,int) ;
 int FUNC_8 (struct thin_c*,struct bio*,int,struct dm_thin_new_mapping*) ;

__attribute__((used)) static void FUNC_9(struct thin_c *VAR_1, dm_block_t VAR_2,
     struct dm_dev *VAR_3, dm_block_t VAR_4,
     dm_block_t VAR_5,
     struct dm_bio_prison_cell *VAR_6, struct bio *VAR_7,
     sector_t VAR_8)
{
 struct pool *VAR_9 = VAR_1->pool;
 struct dm_thin_new_mapping *VAR_10 = FUNC_5(VAR_9);

 VAR_10->tc = VAR_1;
 VAR_10->virt_begin = VAR_2;
 VAR_10->virt_end = VAR_2 + 1u;
 VAR_10->data_block = VAR_5;
 VAR_10->cell = VAR_6;






 FUNC_1(&VAR_10->prepare_actions, 3);

 if (!FUNC_3(VAR_9->shared_read_ds, &VAR_10->list))
  FUNC_2(VAR_10);







 if (FUNC_6(VAR_9, VAR_7))
  FUNC_8(VAR_1, VAR_7, VAR_5, VAR_10);
 else {
  struct dm_io_region VAR_11, VAR_12;

  VAR_11.bdev = VAR_3->bdev;
  VAR_11.sector = VAR_4 * VAR_9->sectors_per_block;
  VAR_11.count = VAR_8;

  VAR_12.bdev = VAR_1->pool_dev->bdev;
  VAR_12.sector = VAR_5 * VAR_9->sectors_per_block;
  VAR_12.count = VAR_8;

  FUNC_4(VAR_9->copier, &VAR_11, 1, &VAR_12,
          0, VAR_0, VAR_10);




  if (VAR_8 < VAR_9->sectors_per_block && VAR_9->pf.zero_new_blocks) {
   FUNC_0(&VAR_10->prepare_actions);
   FUNC_7(VAR_1, VAR_10,
    VAR_5 * VAR_9->sectors_per_block + VAR_8,
    (VAR_5 + 1) * VAR_9->sectors_per_block);
  }
 }

 FUNC_2(VAR_10);
}
