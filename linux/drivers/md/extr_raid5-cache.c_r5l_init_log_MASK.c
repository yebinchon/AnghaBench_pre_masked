
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request_queue {int queue_flags; } ;
struct r5l_payload_data_parity {int dummy; } ;
struct r5l_meta_block {int dummy; } ;
struct r5l_log {int need_cache_flush; int io_kc; int io_pool; int bs; int meta_pool; int stripe_in_journal_count; int stripe_in_journal_lock; int stripe_in_journal_list; int r5c_journal_mode; int disable_writeback_work; int deferred_io_work; int no_space_stripes_lock; int no_space_stripes; int no_mem_stripes; int iounit_wait; TYPE_2__* reclaim_thread; struct md_rdev* rdev; int big_stripe_tree; int tree_lock; int flush_bio; int finished_ios; int flushing_ios; int io_end_ios; int running_ios; int io_list_lock; int io_mutex; int uuid_checksum; } ;
struct r5conf {int raid_disks; TYPE_1__* mddev; int log; } ;
struct md_rdev {TYPE_3__* mddev; int bdev; } ;
typedef int __le32 ;
struct TYPE_6__ {int uuid; } ;
struct TYPE_5__ {int timeout; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int *,int ) ;
 struct request_queue* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct r5l_log*) ;
 int FUNC_13 (int ) ;
 struct r5l_log* FUNC_14 (int,int ) ;
 TYPE_2__* FUNC_15 (int ,TYPE_3__*,char*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ,int ) ;
 int FUNC_19 (int *,int ,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (char*,int ,int ) ;
 int FUNC_22 (char*,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_23 (int ,struct r5l_log*) ;
 int FUNC_24 (int ,int *) ;
 int FUNC_25 (int *) ;
 scalar_t__ FUNC_26 (int ,int *) ;

int FUNC_27(struct r5conf *VAR_17, struct md_rdev *VAR_18)
{
 struct request_queue *VAR_19 = FUNC_5(VAR_18->bdev);
 struct r5l_log *VAR_20;
 char VAR_21[VAR_0];
 int VAR_22;

 FUNC_21("md/raid:%s: using device %s as journal\n",
   FUNC_16(VAR_17->mddev), FUNC_6(VAR_18->bdev, VAR_21));

 if (VAR_7 != 4096)
  return -VAR_2;
 if (sizeof(struct r5l_meta_block) +
     ((sizeof(struct r5l_payload_data_parity) + sizeof(__le32)) *
      VAR_17->raid_disks) > VAR_7) {
  FUNC_22("md/raid:%s: write journal/cache doesn't work for array with %d disks\n",
         FUNC_16(VAR_17->mddev), VAR_17->raid_disks);
  return -VAR_2;
 }

 VAR_20 = FUNC_14(sizeof(*VAR_20), VAR_4);
 if (!VAR_20)
  return -VAR_3;
 VAR_20->rdev = VAR_18;

 VAR_20->need_cache_flush = FUNC_26(VAR_8, &VAR_19->queue_flags) != 0;

 VAR_20->uuid_checksum = FUNC_10(~0, VAR_18->mddev->uuid,
           sizeof(VAR_18->mddev->uuid));

 FUNC_20(&VAR_20->io_mutex);

 FUNC_25(&VAR_20->io_list_lock);
 FUNC_0(&VAR_20->running_ios);
 FUNC_0(&VAR_20->io_end_ios);
 FUNC_0(&VAR_20->flushing_ios);
 FUNC_0(&VAR_20->finished_ios);
 FUNC_7(&VAR_20->flush_bio, ((void*)0), 0);

 VAR_20->io_kc = FUNC_3(VAR_14, 0);
 if (!VAR_20->io_kc)
  goto io_kc;

 VAR_22 = FUNC_19(&VAR_20->io_pool, VAR_11, VAR_20->io_kc);
 if (VAR_22)
  goto io_pool;

 VAR_22 = FUNC_9(&VAR_20->bs, VAR_11, 0, VAR_1);
 if (VAR_22)
  goto io_bs;

 VAR_22 = FUNC_18(&VAR_20->meta_pool, VAR_11, 0);
 if (VAR_22)
  goto out_mempool;

 FUNC_25(&VAR_20->tree_lock);
 FUNC_1(&VAR_20->big_stripe_tree, VAR_5 | VAR_12);

 VAR_20->reclaim_thread = FUNC_15(VAR_15,
       VAR_20->rdev->mddev, "reclaim");
 if (!VAR_20->reclaim_thread)
  goto reclaim_thread;
 VAR_20->reclaim_thread->timeout = VAR_10;

 FUNC_11(&VAR_20->iounit_wait);

 FUNC_0(&VAR_20->no_mem_stripes);

 FUNC_0(&VAR_20->no_space_stripes);
 FUNC_25(&VAR_20->no_space_stripes_lock);

 FUNC_2(&VAR_20->deferred_io_work, VAR_16);
 FUNC_2(&VAR_20->disable_writeback_work, VAR_13);

 VAR_20->r5c_journal_mode = VAR_9;
 FUNC_0(&VAR_20->stripe_in_journal_list);
 FUNC_25(&VAR_20->stripe_in_journal_lock);
 FUNC_4(&VAR_20->stripe_in_journal_count, 0);

 FUNC_23(VAR_17->log, VAR_20);

 FUNC_24(VAR_6, &VAR_17->mddev->flags);
 return 0;

reclaim_thread:
 FUNC_17(&VAR_20->meta_pool);
out_mempool:
 FUNC_8(&VAR_20->bs);
io_bs:
 FUNC_17(&VAR_20->io_pool);
io_pool:
 FUNC_13(VAR_20->io_kc);
io_kc:
 FUNC_12(VAR_20);
 return -VAR_2;
}
