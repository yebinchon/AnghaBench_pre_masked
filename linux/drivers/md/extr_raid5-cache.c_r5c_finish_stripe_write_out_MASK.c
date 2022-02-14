
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe_head_state {scalar_t__ injournal; } ;
struct stripe_head {size_t pd_idx; int disks; int state; int sector; int log_start; int r5c; TYPE_1__* dev; } ;
struct r5l_log {scalar_t__ r5c_journal_mode; int tree_lock; int big_stripe_tree; int stripe_in_journal_count; int stripe_in_journal_lock; } ;
struct r5conf {int r5c_cached_full_stripes; int r5c_flushing_full_stripes; int r5c_cached_partial_stripes; int r5c_flushing_partial_stripes; int wait_for_overlap; TYPE_2__* mddev; int pending_full_writes; struct r5l_log* log; } ;
typedef int sector_t ;
struct TYPE_4__ {int thread; } ;
struct TYPE_3__ {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 uintptr_t VAR_2 ;
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
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct r5conf*,int ) ;
 int FUNC_9 (struct r5l_log*) ;
 int FUNC_10 (struct r5l_log*,int ) ;
 int FUNC_11 (int *,int ) ;
 scalar_t__ FUNC_12 (void**,int *) ;
 void** FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,void**,void*) ;
 int FUNC_15 (int ,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int ,int *) ;
 scalar_t__ FUNC_21 (int ,int *) ;
 int FUNC_22 (int *) ;

void FUNC_23(struct r5conf *VAR_11,
     struct stripe_head *VAR_12,
     struct stripe_head_state *VAR_13)
{
 struct r5l_log *VAR_14 = VAR_11->log;
 int VAR_15;
 int VAR_16 = 0;
 sector_t VAR_17;
 void **VAR_18;
 uintptr_t VAR_19;

 if (!VAR_14 || !FUNC_21(VAR_3, &VAR_12->dev[VAR_12->pd_idx].flags))
  return;

 FUNC_1(FUNC_21(VAR_7, &VAR_12->state));
 FUNC_5(VAR_3, &VAR_12->dev[VAR_12->pd_idx].flags);

 if (VAR_14->r5c_journal_mode == VAR_1)
  return;

 for (VAR_15 = VAR_12->disks; VAR_15--; ) {
  FUNC_5(VAR_3, &VAR_12->dev[VAR_15].flags);
  if (FUNC_20(VAR_4, &VAR_12->dev[VAR_15].flags))
   VAR_16 = 1;
 }





 VAR_13->injournal = 0;

 if (FUNC_20(VAR_5, &VAR_12->state))
  if (FUNC_3(&VAR_11->pending_full_writes))
   FUNC_7(VAR_11->mddev->thread);

 if (VAR_16)
  FUNC_22(&VAR_11->wait_for_overlap);

 FUNC_17(&VAR_14->stripe_in_journal_lock);
 FUNC_6(&VAR_12->r5c);
 FUNC_19(&VAR_14->stripe_in_journal_lock);
 VAR_12->log_start = VAR_0;

 FUNC_2(&VAR_14->stripe_in_journal_count);
 FUNC_9(VAR_14);


 if (FUNC_21(VAR_9, &VAR_12->state) ||
     FUNC_21(VAR_8, &VAR_12->state)) {
  VAR_17 = FUNC_8(VAR_11, VAR_12->sector);
  FUNC_16(&VAR_14->tree_lock);
  VAR_18 = FUNC_13(&VAR_14->big_stripe_tree,
            VAR_17);
  FUNC_0(VAR_18 == ((void*)0));
  VAR_19 = (uintptr_t)FUNC_12(
   VAR_18, &VAR_14->tree_lock) >>
   VAR_2;
  if (VAR_19 == 1)
   FUNC_11(&VAR_14->big_stripe_tree, VAR_17);
  else
   FUNC_14(
    &VAR_14->big_stripe_tree, VAR_18,
    (void *)((VAR_19 - 1) << VAR_2));
  FUNC_18(&VAR_14->tree_lock);
 }

 if (FUNC_20(VAR_9, &VAR_12->state)) {
  FUNC_0(FUNC_4(&VAR_11->r5c_cached_partial_stripes) == 0);
  FUNC_2(&VAR_11->r5c_flushing_partial_stripes);
  FUNC_2(&VAR_11->r5c_cached_partial_stripes);
 }

 if (FUNC_20(VAR_8, &VAR_12->state)) {
  FUNC_0(FUNC_4(&VAR_11->r5c_cached_full_stripes) == 0);
  FUNC_2(&VAR_11->r5c_flushing_full_stripes);
  FUNC_2(&VAR_11->r5c_cached_full_stripes);
 }

 FUNC_10(VAR_14, VAR_12->sector);

 if (FUNC_21(VAR_10, &VAR_12->state))
  FUNC_15(VAR_6, &VAR_12->state);
}
