
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {scalar_t__ id; int node; int bio_split; TYPE_1__* backing_dev_info; int stats; int q_usage_counter; int mq_freeze_lock; int mq_freeze_wq; int queue_lock; int sysfs_dir_lock; int sysfs_lock; int blk_trace_mutex; int kobj; int blkg_list; int icq_list; int timeout_work; int timeout; int * last_merge; } ;
typedef int gfp_t ;
struct TYPE_3__ {char* name; int laptop_mode_wb_timer; int capabilities; int ra_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_8 (struct request_queue*) ;
 scalar_t__ FUNC_9 (int *,int ,int ,int) ;
 int FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (int *) ;
 struct request_queue* FUNC_12 (int ,int,int) ;
 int FUNC_13 (int ,struct request_queue*) ;
 int FUNC_14 (int *,int *) ;
 int VAR_13 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *,int ,int ,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int ,int ) ;

struct request_queue *FUNC_20(gfp_t VAR_14, int VAR_15)
{
 struct request_queue *VAR_16;
 int VAR_17;

 VAR_16 = FUNC_12(VAR_10,
    VAR_14 | VAR_6, VAR_15);
 if (!VAR_16)
  return ((void*)0);

 VAR_16->last_merge = ((void*)0);

 VAR_16->id = FUNC_9(&VAR_7, 0, 0, VAR_14);
 if (VAR_16->id < 0)
  goto fail_q;

 VAR_17 = FUNC_5(&VAR_16->bio_split, VAR_2, 0, VAR_1);
 if (VAR_17)
  goto fail_id;

 VAR_16->backing_dev_info = FUNC_2(VAR_14, VAR_15);
 if (!VAR_16->backing_dev_info)
  goto fail_split;

 VAR_16->stats = FUNC_6();
 if (!VAR_16->stats)
  goto fail_stats;

 VAR_16->backing_dev_info->ra_pages = VAR_5;
 VAR_16->backing_dev_info->capabilities = VAR_0;
 VAR_16->backing_dev_info->name = "block";
 VAR_16->node = VAR_15;

 FUNC_19(&VAR_16->backing_dev_info->laptop_mode_wb_timer,
      VAR_13, 0);
 FUNC_19(&VAR_16->timeout, VAR_11, 0);
 FUNC_1(&VAR_16->timeout_work, VAR_12);
 FUNC_0(&VAR_16->icq_list);




 FUNC_14(&VAR_16->kobj, &VAR_8);




 FUNC_15(&VAR_16->sysfs_lock);
 FUNC_15(&VAR_16->sysfs_dir_lock);
 FUNC_18(&VAR_16->queue_lock);

 FUNC_11(&VAR_16->mq_freeze_wq);
 FUNC_15(&VAR_16->mq_freeze_lock);





 if (FUNC_17(&VAR_16->q_usage_counter,
    VAR_9,
    VAR_4, VAR_3))
  goto fail_bdi;

 if (FUNC_8(VAR_16))
  goto fail_ref;

 return VAR_16;

fail_ref:
 FUNC_16(&VAR_16->q_usage_counter);
fail_bdi:
 FUNC_7(VAR_16->stats);
fail_stats:
 FUNC_3(VAR_16->backing_dev_info);
fail_split:
 FUNC_4(&VAR_16->bio_split);
fail_id:
 FUNC_10(&VAR_7, VAR_16->id);
fail_q:
 FUNC_13(VAR_10, VAR_16);
 return ((void*)0);
}
