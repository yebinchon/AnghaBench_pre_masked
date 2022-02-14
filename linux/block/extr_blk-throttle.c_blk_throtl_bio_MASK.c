
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct throtl_service_queue {struct throtl_service_queue* parent_sq; scalar_t__* nr_queued; } ;
struct throtl_qnode {int dummy; } ;
struct throtl_grp {scalar_t__* last_low_overflow_time; int flags; struct throtl_service_queue service_queue; int * io_disp; int * bytes_disp; struct throtl_qnode* qnode_on_parent; int * has_rules; struct throtl_data* td; } ;
struct throtl_data {int track_bio_latency; int * nr_queued; } ;
struct request_queue {int queue_lock; int root_blkg; } ;
struct blkcg_gq {int dummy; } ;
struct TYPE_4__ {int value; } ;
struct TYPE_3__ {int bi_size; } ;
struct bio {TYPE_2__ bi_issue; TYPE_1__ bi_iter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 size_t VAR_4 ;
 int FUNC_1 (struct bio*) ;
 scalar_t__ FUNC_2 (struct bio*,int ) ;
 int FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (struct throtl_grp*) ;
 struct throtl_grp* FUNC_5 (int ) ;
 void* VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct throtl_grp* FUNC_9 (struct throtl_service_queue*) ;
 int FUNC_10 (struct throtl_grp*,int) ;
 int FUNC_11 (struct throtl_grp*,int) ;
 int FUNC_12 (struct throtl_grp*,struct bio*,int *) ;
 int FUNC_13 (struct throtl_grp*) ;
 int FUNC_14 (struct bio*,struct throtl_qnode*,struct throtl_grp*) ;
 scalar_t__ FUNC_15 (struct throtl_data*,struct throtl_grp*) ;
 int FUNC_16 (struct throtl_grp*,struct bio*) ;
 int FUNC_17 (struct throtl_grp*) ;
 int FUNC_18 (struct throtl_service_queue*,char*,char,int ,int ,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_19 (struct throtl_service_queue*,int) ;
 int FUNC_20 (struct throtl_grp*,int) ;
 int FUNC_21 (struct throtl_data*) ;
 int FUNC_22 (struct throtl_grp*) ;
 int FUNC_23 (struct throtl_data*) ;

bool FUNC_24(struct request_queue *VAR_6, struct blkcg_gq *VAR_7,
      struct bio *VAR_8)
{
 struct throtl_qnode *VAR_9 = ((void*)0);
 struct throtl_grp *VAR_10 = FUNC_5(VAR_7 ?: VAR_6->root_blkg);
 struct throtl_service_queue *VAR_11;
 bool VAR_12 = FUNC_1(VAR_8);
 bool VAR_13 = 0;
 struct throtl_data *VAR_14 = VAR_10->td;

 FUNC_0(!FUNC_6());


 if (FUNC_2(VAR_8, VAR_1) || !VAR_10->has_rules[VAR_12])
  goto out;

 FUNC_7(&VAR_6->queue_lock);

 FUNC_21(VAR_14);

 FUNC_4(VAR_10);

 VAR_11 = &VAR_10->service_queue;

again:
 while (1) {
  if (VAR_10->last_low_overflow_time[VAR_12] == 0)
   VAR_10->last_low_overflow_time[VAR_12] = VAR_5;
  FUNC_17(VAR_10);
  FUNC_22(VAR_10);

  if (VAR_11->nr_queued[VAR_12])
   break;


  if (!FUNC_12(VAR_10, VAR_8, ((void*)0))) {
   VAR_10->last_low_overflow_time[VAR_12] = VAR_5;
   if (FUNC_15(VAR_14, VAR_10)) {
    FUNC_23(VAR_14);
    goto again;
   }
   break;
  }


  FUNC_16(VAR_10, VAR_8);
  FUNC_20(VAR_10, VAR_12);






  VAR_9 = &VAR_10->qnode_on_parent[VAR_12];
  VAR_11 = VAR_11->parent_sq;
  VAR_10 = FUNC_9(VAR_11);
  if (!VAR_10)
   goto out_unlock;
 }


 FUNC_18(VAR_11, "[%c] bio. bdisp=%llu sz=%u bps=%llu iodisp=%u iops=%u queued=%d/%d",
     VAR_12 == VAR_2 ? 'R' : 'W',
     VAR_10->bytes_disp[VAR_12], VAR_8->bi_iter.bi_size,
     FUNC_10(VAR_10, VAR_12),
     VAR_10->io_disp[VAR_12], FUNC_11(VAR_10, VAR_12),
     VAR_11->nr_queued[VAR_2], VAR_11->nr_queued[VAR_4]);

 VAR_10->last_low_overflow_time[VAR_12] = VAR_5;

 VAR_14->nr_queued[VAR_12]++;
 FUNC_14(VAR_8, VAR_9, VAR_10);
 VAR_13 = 1;







 if (VAR_10->flags & VAR_3) {
  FUNC_13(VAR_10);
  FUNC_19(VAR_10->service_queue.parent_sq, 1);
 }

out_unlock:
 FUNC_8(&VAR_6->queue_lock);
out:
 FUNC_3(VAR_8, VAR_1);





 return VAR_13;
}
