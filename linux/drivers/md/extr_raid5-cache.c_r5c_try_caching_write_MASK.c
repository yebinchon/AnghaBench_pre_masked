
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head_state {scalar_t__ injournal; scalar_t__ written; int ops_request; scalar_t__ failed; } ;
struct stripe_head {int state; struct r5dev* dev; int sector; } ;
struct r5l_log {int tree_lock; int big_stripe_tree; } ;
struct r5dev {int flags; scalar_t__ towrite; } ;
struct r5conf {int r5c_cached_partial_stripes; struct r5l_log* log; } ;
typedef int sector_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 uintptr_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct r5l_log*) ;
 int FUNC_3 (struct stripe_head*) ;
 int FUNC_4 (struct r5conf*,int ) ;
 scalar_t__ FUNC_5 (void**,int *) ;
 int FUNC_6 (int *,int ,void*) ;
 void** FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,void**,void*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;

int FUNC_13(struct r5conf *VAR_13,
     struct stripe_head *VAR_14,
     struct stripe_head_state *VAR_15,
     int VAR_16)
{
 struct r5l_log *VAR_17 = VAR_13->log;
 int VAR_18;
 struct r5dev *VAR_19;
 int VAR_20 = 0;
 void **VAR_21;
 sector_t VAR_22;
 int VAR_23;
 uintptr_t VAR_24;

 FUNC_0(!FUNC_2(VAR_17));

 if (!FUNC_12(VAR_9, &VAR_14->state)) {
  if (VAR_15->injournal > 0 || VAR_15->written > 0)
   return -VAR_0;

  FUNC_9(VAR_9, &VAR_14->state);
 }
 if (VAR_15->failed || FUNC_12(VAR_12, &VAR_14->state)) {
  FUNC_3(VAR_14);
  return -VAR_0;
 }

 for (VAR_18 = VAR_16; VAR_18--; ) {
  VAR_19 = &VAR_14->dev[VAR_18];

  if (VAR_19->towrite && !FUNC_12(VAR_4, &VAR_19->flags) &&
      !FUNC_12(VAR_2, &VAR_19->flags)) {
   FUNC_3(VAR_14);
   return -VAR_0;
  }
 }


 if (!FUNC_12(VAR_11, &VAR_14->state) &&
     !FUNC_12(VAR_10, &VAR_14->state)) {
  VAR_22 = FUNC_4(VAR_13, VAR_14->sector);
  FUNC_10(&VAR_17->tree_lock);
  VAR_21 = FUNC_7(&VAR_17->big_stripe_tree,
            VAR_22);
  if (VAR_21) {
   VAR_24 = (uintptr_t)FUNC_5(
    VAR_21, &VAR_17->tree_lock) >>
    VAR_1;
   FUNC_8(
    &VAR_17->big_stripe_tree, VAR_21,
    (void *)((VAR_24 + 1) << VAR_1));
  } else {




   VAR_23 = FUNC_6(
    &VAR_17->big_stripe_tree, VAR_22,
    (void *)(1 << VAR_1));
   if (VAR_23) {
    FUNC_11(&VAR_17->tree_lock);
    FUNC_3(VAR_14);
    return -VAR_0;
   }
  }
  FUNC_11(&VAR_17->tree_lock);





  FUNC_9(VAR_11, &VAR_14->state);
  FUNC_1(&VAR_13->r5c_cached_partial_stripes);
 }

 for (VAR_18 = VAR_16; VAR_18--; ) {
  VAR_19 = &VAR_14->dev[VAR_18];
  if (VAR_19->towrite) {
   FUNC_9(VAR_6, &VAR_19->flags);
   FUNC_9(VAR_5, &VAR_19->flags);
   FUNC_9(VAR_3, &VAR_19->flags);
   VAR_20++;
  }
 }

 if (VAR_20) {
  FUNC_9(VAR_8, &VAR_15->ops_request);





  FUNC_9(VAR_7, &VAR_14->state);
 }

 return 0;
}
