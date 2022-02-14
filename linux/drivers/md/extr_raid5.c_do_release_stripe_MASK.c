
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe_head {int disks; scalar_t__ bm_seq; size_t pd_idx; int lru; int state; TYPE_2__* dev; } ;
struct list_head {int dummy; } ;
struct r5conf {scalar_t__ seq_write; scalar_t__ worker_cnt_per_group; int raid_disks; int max_degraded; struct list_head r5c_partial_stripe_list; struct list_head r5c_full_stripe_list; int r5c_cached_partial_stripes; int r5c_cached_full_stripes; int log; int active_stripes; TYPE_1__* mddev; int preread_active_stripes; struct list_head handle_list; struct list_head loprio_list; struct list_head bitmap_list; struct list_head delayed_list; scalar_t__ quiesce; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int thread; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,struct list_head*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct r5conf*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct stripe_head*) ;
 int FUNC_13 (struct stripe_head*) ;
 int FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (struct stripe_head*) ;
 int FUNC_16 (struct stripe_head*) ;
 scalar_t__ FUNC_17 (int ,int *) ;
 int FUNC_18 (int ,int *) ;
 scalar_t__ FUNC_19 (int ,int *) ;

__attribute__((used)) static void FUNC_20(struct r5conf *VAR_11, struct stripe_head *VAR_12,
         struct list_head *VAR_13)
{
 int VAR_14;
 int VAR_15 = 0;

 FUNC_0(!FUNC_8(&VAR_12->lru));
 FUNC_0(FUNC_5(&VAR_11->active_stripes)==0);

 if (FUNC_11(VAR_11->log))
  for (VAR_14 = VAR_12->disks; VAR_14--; )
   if (FUNC_19(VAR_1, &VAR_12->dev[VAR_14].flags))
    VAR_15++;







 if (FUNC_19(VAR_10, &VAR_12->state) ||
     (VAR_11->quiesce && FUNC_11(VAR_11->log) &&
      !FUNC_19(VAR_5, &VAR_12->state) && VAR_15 != 0)) {
  if (FUNC_19(VAR_7, &VAR_12->state))
   FUNC_12(VAR_12);
  FUNC_14(VAR_5, &VAR_12->state);
 }

 if (FUNC_19(VAR_5, &VAR_12->state)) {
  if (FUNC_19(VAR_3, &VAR_12->state) &&
      !FUNC_19(VAR_6, &VAR_12->state))
   FUNC_7(&VAR_12->lru, &VAR_11->delayed_list);
  else if (FUNC_19(VAR_2, &VAR_12->state) &&
      VAR_12->bm_seq - VAR_11->seq_write > 0)
   FUNC_7(&VAR_12->lru, &VAR_11->bitmap_list);
  else {
   FUNC_6(VAR_3, &VAR_12->state);
   FUNC_6(VAR_2, &VAR_12->state);
   if (VAR_11->worker_cnt_per_group == 0) {
    if (FUNC_15(VAR_12))
     FUNC_7(&VAR_12->lru,
       &VAR_11->loprio_list);
    else
     FUNC_7(&VAR_12->lru,
       &VAR_11->handle_list);
   } else {
    FUNC_13(VAR_12);
    return;
   }
  }
  FUNC_9(VAR_11->mddev->thread);
 } else {
  FUNC_0(FUNC_16(VAR_12));
  if (FUNC_17(VAR_6, &VAR_12->state))
   if (FUNC_3(&VAR_11->preread_active_stripes)
       < VAR_0)
    FUNC_9(VAR_11->mddev->thread);
  FUNC_2(&VAR_11->active_stripes);
  if (!FUNC_19(VAR_4, &VAR_12->state)) {
   if (!FUNC_11(VAR_11->log))
    FUNC_7(&VAR_12->lru, VAR_13);
   else {
    FUNC_1(FUNC_19(VAR_1, &VAR_12->dev[VAR_12->pd_idx].flags));
    if (VAR_15 == 0)
     FUNC_7(&VAR_12->lru, VAR_13);
    else if (VAR_15 == VAR_11->raid_disks - VAR_11->max_degraded) {

     if (!FUNC_18(VAR_8, &VAR_12->state))
      FUNC_4(&VAR_11->r5c_cached_full_stripes);
     if (FUNC_17(VAR_9, &VAR_12->state))
      FUNC_2(&VAR_11->r5c_cached_partial_stripes);
     FUNC_7(&VAR_12->lru, &VAR_11->r5c_full_stripe_list);
     FUNC_10(VAR_11);
    } else





     FUNC_7(&VAR_12->lru, &VAR_11->r5c_partial_stripe_list);
   }
  }
 }
}
