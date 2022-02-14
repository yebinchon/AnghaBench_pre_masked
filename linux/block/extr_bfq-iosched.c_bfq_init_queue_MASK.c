
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct request_queue {int node; int queue_lock; struct elevator_queue* elevator; } ;
struct elevator_type {int dummy; } ;
struct elevator_queue {int kobj; struct bfq_data* elevator_data; } ;
struct TYPE_6__ {int prio_changed; int new_weight; } ;
struct TYPE_7__ {TYPE_2__ entity; int new_ioprio; int new_ioprio_class; int ref; } ;
struct TYPE_5__ {int function; } ;
struct bfq_data {int hw_tag; size_t nonrot_with_queueing; int bfq_requests_within_timer; int bfq_large_burst_thresh; int low_latency; int bfq_wr_coeff; int bfq_wr_max_softrt_rate; int rate_dur_prod; int peak_rate; int root_group; TYPE_3__ oom_bfqq; int lock; struct request_queue* queue; scalar_t__ wr_busy_queues; void* bfq_wr_min_inter_arr_async; void* bfq_wr_min_idle_time; scalar_t__ bfq_wr_max_time; void* bfq_wr_rt_max_time; void* bfq_burst_interval; int bfq_timeout; int bfq_slice_idle; int bfq_back_penalty; int bfq_back_max; void** bfq_fifo_expire; int bfq_max_budget; int burst_list; int idle_list; int active_list; scalar_t__ num_groups_with_pending_reqs; int queue_weights_tree; TYPE_1__ idle_slice_timer; int dispatch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct bfq_data*,int ) ;
 int VAR_9 ;
 void** VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct bfq_data*,TYPE_3__*,int *,int,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int ,struct bfq_data*) ;
 int FUNC_7 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 size_t FUNC_8 (struct request_queue*) ;
 struct elevator_queue* FUNC_9 (struct request_queue*,struct elevator_type*) ;
 int FUNC_10 (TYPE_1__*,int ,int ) ;
 int FUNC_11 (struct bfq_data*) ;
 int FUNC_12 (int *) ;
 struct bfq_data* FUNC_13 (int,int ,int ) ;
 void* FUNC_14 (int) ;
 int* VAR_14 ;
 int* VAR_15 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct request_queue*) ;

__attribute__((used)) static int FUNC_19(struct request_queue *VAR_16, struct elevator_type *VAR_17)
{
 struct bfq_data *VAR_18;
 struct elevator_queue *VAR_19;

 VAR_19 = FUNC_9(VAR_16, VAR_17);
 if (!VAR_19)
  return -VAR_2;

 VAR_18 = FUNC_13(sizeof(*VAR_18), VAR_3, VAR_16->node);
 if (!VAR_18) {
  FUNC_12(&VAR_19->kobj);
  return -VAR_2;
 }
 VAR_19->elevator_data = VAR_18;

 FUNC_16(&VAR_16->queue_lock);
 VAR_16->elevator = VAR_19;
 FUNC_17(&VAR_16->queue_lock);






 FUNC_4(VAR_18, &VAR_18->oom_bfqq, ((void*)0), 1, 0);
 VAR_18->oom_bfqq.ref++;
 VAR_18->oom_bfqq.new_ioprio = VAR_0;
 VAR_18->oom_bfqq.new_ioprio_class = VAR_5;
 VAR_18->oom_bfqq.entity.new_weight =
  FUNC_7(VAR_18->oom_bfqq.new_ioprio);


 FUNC_2(&VAR_18->oom_bfqq);






 VAR_18->oom_bfqq.entity.prio_changed = 1;

 VAR_18->queue = VAR_16;

 FUNC_1(&VAR_18->dispatch);

 FUNC_10(&VAR_18->idle_slice_timer, VAR_1,
       VAR_4);
 VAR_18->idle_slice_timer.function = VAR_11;

 VAR_18->queue_weights_tree = VAR_6;
 VAR_18->num_groups_with_pending_reqs = 0;

 FUNC_1(&VAR_18->active_list);
 FUNC_1(&VAR_18->idle_list);
 FUNC_0(&VAR_18->burst_list);

 VAR_18->hw_tag = -1;
 VAR_18->nonrot_with_queueing = FUNC_8(VAR_18->queue);

 VAR_18->bfq_max_budget = VAR_9;

 VAR_18->bfq_fifo_expire[0] = VAR_10[0];
 VAR_18->bfq_fifo_expire[1] = VAR_10[1];
 VAR_18->bfq_back_max = VAR_7;
 VAR_18->bfq_back_penalty = VAR_8;
 VAR_18->bfq_slice_idle = VAR_12;
 VAR_18->bfq_timeout = VAR_13;

 VAR_18->bfq_requests_within_timer = 120;

 VAR_18->bfq_large_burst_thresh = 8;
 VAR_18->bfq_burst_interval = FUNC_14(180);

 VAR_18->low_latency = 1;




 VAR_18->bfq_wr_coeff = 30;
 VAR_18->bfq_wr_rt_max_time = FUNC_14(300);
 VAR_18->bfq_wr_max_time = 0;
 VAR_18->bfq_wr_min_idle_time = FUNC_14(2000);
 VAR_18->bfq_wr_min_inter_arr_async = FUNC_14(500);
 VAR_18->bfq_wr_max_softrt_rate = 7000;





 VAR_18->wr_busy_queues = 0;





 VAR_18->rate_dur_prod = VAR_14[FUNC_8(VAR_18->queue)] *
  VAR_15[FUNC_8(VAR_18->queue)];
 VAR_18->peak_rate = VAR_14[FUNC_8(VAR_18->queue)] * 2 / 3;

 FUNC_15(&VAR_18->lock);
 VAR_18->root_group = FUNC_3(VAR_18, VAR_16->node);
 if (!VAR_18->root_group)
  goto out_free;
 FUNC_6(VAR_18->root_group, VAR_18);
 FUNC_5(&VAR_18->oom_bfqq.entity, VAR_18->root_group);

 FUNC_18(VAR_16);
 return 0;

out_free:
 FUNC_11(VAR_18);
 FUNC_12(&VAR_19->kobj);
 return -VAR_2;
}
