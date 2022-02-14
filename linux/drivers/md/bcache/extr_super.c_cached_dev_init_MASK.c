
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int io_opt; int raid_partial_stripes_expensive; } ;
struct request_queue {TYPE_7__* backing_dev_info; TYPE_1__ limits; } ;
struct io {int hash; int lru; } ;
struct TYPE_18__ {int stripe_size; TYPE_6__* disk; int cl; int kobj; } ;
struct TYPE_12__ {scalar_t__ data_offset; } ;
struct cached_dev {int sequential_cutoff; int io_hash; int io_disable; int stop_when_cache_set_failed; int error_limit; int io_errors; TYPE_9__ disk; TYPE_3__ sb; TYPE_8__* bdev; int partial_stripes_expensive; int io_lru; struct io* io; int accounting; int io_lock; int sb_write_mutex; int detach; int list; } ;
struct TYPE_17__ {TYPE_2__* bd_part; } ;
struct TYPE_16__ {int ra_pages; } ;
struct TYPE_15__ {TYPE_5__* queue; } ;
struct TYPE_14__ {TYPE_4__* backing_dev_info; } ;
struct TYPE_13__ {int ra_pages; } ;
struct TYPE_11__ {scalar_t__ nr_sects; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_9__*,unsigned int,scalar_t__) ;
 int FUNC_5 (int *,int *) ;
 int VAR_4 ;
 int FUNC_6 (struct cached_dev*) ;
 int FUNC_7 (struct cached_dev*) ;
 struct request_queue* FUNC_8 (TYPE_8__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int ,int ) ;
 int FUNC_16 (int *) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_17(struct cached_dev *VAR_8, unsigned int VAR_9)
{
 int VAR_10;
 struct io *VAR_11;
 struct request_queue *VAR_12 = FUNC_8(VAR_8->bdev);

 FUNC_2(VAR_3);
 FUNC_0(&VAR_8->list);
 FUNC_9(&VAR_8->disk.cl, ((void*)0));
 FUNC_15(&VAR_8->disk.cl, VAR_6, VAR_7);
 FUNC_11(&VAR_8->disk.kobj, &VAR_4);
 FUNC_1(&VAR_8->detach, VAR_5);
 FUNC_14(&VAR_8->sb_write_mutex, 1);
 FUNC_0(&VAR_8->io_lru);
 FUNC_16(&VAR_8->io_lock);
 FUNC_5(&VAR_8->accounting, &VAR_8->disk.cl);

 VAR_8->sequential_cutoff = 4 << 20;

 for (VAR_11 = VAR_8->io; VAR_11 < VAR_8->io + VAR_2; VAR_11++) {
  FUNC_12(&VAR_11->lru, &VAR_8->io_lru);
  FUNC_10(&VAR_11->hash, VAR_8->io_hash + VAR_2);
 }

 VAR_8->disk.stripe_size = VAR_12->limits.io_opt >> 9;

 if (VAR_8->disk.stripe_size)
  VAR_8->partial_stripes_expensive =
   VAR_12->limits.raid_partial_stripes_expensive;

 VAR_10 = FUNC_4(&VAR_8->disk, VAR_9,
    VAR_8->bdev->bd_part->nr_sects - VAR_8->sb.data_offset);
 if (VAR_10)
  return VAR_10;

 VAR_8->disk.disk->queue->backing_dev_info->ra_pages =
  FUNC_13(VAR_8->disk.disk->queue->backing_dev_info->ra_pages,
      VAR_12->backing_dev_info->ra_pages);

 FUNC_3(&VAR_8->io_errors, 0);
 VAR_8->io_disable = 0;
 VAR_8->error_limit = VAR_1;

 VAR_8->stop_when_cache_set_failed = VAR_0;

 FUNC_6(VAR_8);
 FUNC_7(VAR_8);
 return 0;
}
