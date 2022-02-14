
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stripe_head_state {int uptodate; int failed; size_t* failed_num; scalar_t__ injournal; int dec_preread_active; int p_failed; int q_failed; int compute; scalar_t__ ops_request; scalar_t__ handle_bad_blocks; struct md_rdev* blocked_rdev; int locked; scalar_t__ expanding; scalar_t__ expanded; scalar_t__ replacing; scalar_t__ syncing; scalar_t__ to_write; scalar_t__ non_overwrite; scalar_t__ to_read; scalar_t__ just_cached; scalar_t__ written; scalar_t__ log_failed; scalar_t__ to_fill; } ;
struct stripe_head {int disks; size_t pd_idx; size_t qd_idx; scalar_t__ reconstruct_state; scalar_t__ state; scalar_t__ sector; struct r5dev* dev; scalar_t__ check_state; int log_io; int count; int stripe_lock; int batch_head; struct r5conf* raid_conf; } ;
struct r5dev {scalar_t__ flags; scalar_t__ written; } ;
struct r5conf {int max_degraded; int level; int raid_disks; TYPE_2__* mddev; int preread_active_stripes; TYPE_1__* disks; int wait_for_overlap; int reshape_stripes; int log; } ;
struct md_rdev {int dummy; } ;
struct TYPE_7__ {int thread; scalar_t__ external; int ro; scalar_t__ sb_flags; } ;
struct TYPE_6__ {struct md_rdev* rdev; struct md_rdev* replacement; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct stripe_head*,struct stripe_head_state*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct stripe_head*,int ) ;
 scalar_t__ FUNC_7 (struct stripe_head*) ;
 int FUNC_8 (int ,scalar_t__*) ;
 int FUNC_9 (int ,scalar_t__*) ;
 int FUNC_10 (struct r5conf*,struct stripe_head*,struct stripe_head_state*,int) ;
 int FUNC_11 (struct r5conf*,struct stripe_head*,struct stripe_head_state*) ;
 int FUNC_12 (struct r5conf*,struct stripe_head*,struct stripe_head_state*,int) ;
 int FUNC_13 (struct r5conf*,struct stripe_head*,struct stripe_head_state*,int) ;
 int FUNC_14 (struct r5conf*,struct stripe_head*,int) ;
 int FUNC_15 (struct r5conf*,struct stripe_head*,struct stripe_head_state*,int) ;
 int FUNC_16 (struct r5conf*,struct stripe_head*) ;
 int FUNC_17 (struct stripe_head*,struct stripe_head_state*,int) ;
 int FUNC_18 (struct stripe_head*) ;
 int FUNC_19 (TYPE_2__*,int ,int) ;
 int FUNC_20 (TYPE_2__*,struct md_rdev*) ;
 int FUNC_21 (struct md_rdev*,TYPE_2__*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (struct stripe_head*,struct stripe_head_state*) ;
 int FUNC_24 (char*,int,...) ;
 int FUNC_25 (struct r5conf*,struct stripe_head*,struct stripe_head_state*) ;
 int FUNC_26 (struct r5conf*,struct stripe_head*,int) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (struct r5conf*,struct stripe_head*,struct stripe_head_state*,int) ;
 struct stripe_head* FUNC_29 (struct r5conf*,scalar_t__,int,int,int) ;
 int FUNC_30 (struct stripe_head*) ;
 int FUNC_31 (struct stripe_head*,scalar_t__) ;
 int FUNC_32 (struct md_rdev*,scalar_t__,int ,int ) ;
 int FUNC_33 (struct md_rdev*,TYPE_2__*) ;
 int FUNC_34 (struct md_rdev*,scalar_t__,int ,int ) ;
 scalar_t__ VAR_39 ;
 void* VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 int FUNC_35 (struct stripe_head*,struct stripe_head_state*,int,int) ;
 int FUNC_36 (int ,scalar_t__*) ;
 int FUNC_37 (int *) ;
 int FUNC_38 (int *) ;
 int FUNC_39 (scalar_t__,struct r5conf*,int ,struct stripe_head*) ;
 scalar_t__ FUNC_40 (int ,scalar_t__*) ;
 int FUNC_41 (int ,scalar_t__*) ;
 scalar_t__ FUNC_42 (int ,scalar_t__*) ;
 scalar_t__ FUNC_43 (int ,scalar_t__*) ;
 scalar_t__ FUNC_44 (struct md_rdev*) ;
 int FUNC_45 (int *) ;

__attribute__((used)) static void FUNC_46(struct stripe_head *VAR_43)
{
 struct stripe_head_state VAR_44;
 struct r5conf *VAR_45 = VAR_43->raid_conf;
 int VAR_46;
 int VAR_47;
 int VAR_48 = VAR_43->disks;
 struct r5dev *VAR_49, *VAR_50;

 FUNC_8(VAR_27, &VAR_43->state);
 if (FUNC_42(VAR_18, &VAR_43->state)) {


  FUNC_36(VAR_27, &VAR_43->state);
  return;
 }

 if (FUNC_7(VAR_43) ) {
  FUNC_9(VAR_18, &VAR_43->state);
  return;
 }

 if (FUNC_40(VAR_19, &VAR_43->state))
  FUNC_6(VAR_43, 0);

 if (FUNC_43(VAR_38, &VAR_43->state) && !VAR_43->batch_head) {
  FUNC_37(&VAR_43->stripe_lock);




  if (!FUNC_43(VAR_34, &VAR_43->state) &&
      !FUNC_43(VAR_33, &VAR_43->state) &&
      !FUNC_43(VAR_23, &VAR_43->state) &&
      FUNC_40(VAR_38, &VAR_43->state)) {
   FUNC_36(VAR_37, &VAR_43->state);
   FUNC_8(VAR_28, &VAR_43->state);
   FUNC_8(VAR_35, &VAR_43->state);
  }
  FUNC_38(&VAR_43->stripe_lock);
 }
 FUNC_8(VAR_22, &VAR_43->state);

 FUNC_24("handling stripe %llu, state=%#lx cnt=%d, "
  "pd_idx=%d, qd_idx=%d\n, check:%d, reconstruct:%d\n",
        (unsigned long long)VAR_43->sector, VAR_43->state,
        FUNC_5(&VAR_43->count), VAR_43->pd_idx, VAR_43->qd_idx,
        VAR_43->check_state, VAR_43->reconstruct_state);

 FUNC_2(VAR_43, &VAR_44);

 if (FUNC_43(VAR_29, &VAR_43->state))
  goto finish;

 if (VAR_44.handle_bad_blocks ||
     FUNC_43(VAR_2, &VAR_45->mddev->sb_flags)) {
  FUNC_36(VAR_27, &VAR_43->state);
  goto finish;
 }

 if (FUNC_44(VAR_44.blocked_rdev)) {
  if (VAR_44.syncing || VAR_44.expanding || VAR_44.expanded ||
      VAR_44.replacing || VAR_44.to_write || VAR_44.written) {
   FUNC_36(VAR_27, &VAR_43->state);
   goto finish;
  }

  FUNC_33(VAR_44.blocked_rdev, VAR_45->mddev);
  VAR_44.blocked_rdev = ((void*)0);
 }

 if (VAR_44.to_fill && !FUNC_43(VAR_20, &VAR_43->state)) {
  FUNC_36(VAR_30, &VAR_44.ops_request);
  FUNC_36(VAR_20, &VAR_43->state);
 }

 FUNC_24("locked=%d uptodate=%d to_read=%d"
        " to_write=%d failed=%d failed_num=%d,%d\n",
        VAR_44.locked, VAR_44.uptodate, VAR_44.to_read, VAR_44.to_write, VAR_44.failed,
        VAR_44.failed_num[0], VAR_44.failed_num[1]);







 if (VAR_44.failed > VAR_45->max_degraded ||
     (VAR_44.log_failed && VAR_44.injournal == 0)) {
  VAR_43->check_state = 0;
  VAR_43->reconstruct_state = 0;
  FUNC_6(VAR_43, 0);
  if (VAR_44.to_read+VAR_44.to_write+VAR_44.written)
   FUNC_10(VAR_45, VAR_43, &VAR_44, VAR_48);
  if (VAR_44.syncing + VAR_44.replacing)
   FUNC_11(VAR_45, VAR_43, &VAR_44);
 }




 VAR_47 = 0;
 if (VAR_43->reconstruct_state == VAR_41)
  VAR_47 = 1;
 if (VAR_43->reconstruct_state == VAR_39 ||
     VAR_43->reconstruct_state == VAR_41) {
  VAR_43->reconstruct_state = VAR_40;




  FUNC_0(!FUNC_43(VAR_13, &VAR_43->dev[VAR_43->pd_idx].flags) &&
         !FUNC_43(VAR_3, &VAR_43->dev[VAR_43->pd_idx].flags));
  FUNC_0(VAR_43->qd_idx >= 0 &&
         !FUNC_43(VAR_13, &VAR_43->dev[VAR_43->qd_idx].flags) &&
         !FUNC_43(VAR_3, &VAR_43->dev[VAR_43->qd_idx].flags));
  for (VAR_46 = VAR_48; VAR_46--; ) {
   struct r5dev *VAR_51 = &VAR_43->dev[VAR_46];
   if (FUNC_43(VAR_6, &VAR_51->flags) &&
    (VAR_46 == VAR_43->pd_idx || VAR_46 == VAR_43->qd_idx ||
     VAR_51->written || FUNC_43(VAR_4,
         &VAR_51->flags))) {
    FUNC_24("Writing block %d\n", VAR_46);
    FUNC_36(VAR_16, &VAR_51->flags);
    if (VAR_47)
     continue;
    if (VAR_44.failed > 1)
     continue;
    if (!FUNC_43(VAR_5, &VAR_51->flags) ||
        ((VAR_46 == VAR_43->pd_idx || VAR_46 == VAR_43->qd_idx) &&
         VAR_44.failed == 0))
     FUNC_36(VAR_28, &VAR_43->state);
   }
  }
  if (FUNC_40(VAR_31, &VAR_43->state))
   VAR_44.dec_preread_active = 1;
 }





 VAR_49 = &VAR_43->dev[VAR_43->pd_idx];
 VAR_44.p_failed = (VAR_44.failed >= 1 && VAR_44.failed_num[0] == VAR_43->pd_idx)
  || (VAR_44.failed >= 2 && VAR_44.failed_num[1] == VAR_43->pd_idx);
 VAR_50 = &VAR_43->dev[VAR_43->qd_idx];
 VAR_44.q_failed = (VAR_44.failed >= 1 && VAR_44.failed_num[0] == VAR_43->qd_idx)
  || (VAR_44.failed >= 2 && VAR_44.failed_num[1] == VAR_43->qd_idx)
  || VAR_45->level < 6;

 if (VAR_44.written &&
     (VAR_44.p_failed || ((FUNC_43(VAR_5, &VAR_49->flags)
        && !FUNC_43(VAR_6, &VAR_49->flags)
        && (FUNC_43(VAR_13, &VAR_49->flags) ||
     FUNC_43(VAR_3, &VAR_49->flags))))) &&
     (VAR_44.q_failed || ((FUNC_43(VAR_5, &VAR_50->flags)
        && !FUNC_43(VAR_6, &VAR_50->flags)
        && (FUNC_43(VAR_13, &VAR_50->flags) ||
     FUNC_43(VAR_3, &VAR_50->flags))))))
  FUNC_14(VAR_45, VAR_43, VAR_48);

 if (VAR_44.just_cached)
  FUNC_26(VAR_45, VAR_43, VAR_48);
 FUNC_18(VAR_43);





 if (VAR_44.to_read || VAR_44.non_overwrite
     || (VAR_45->level == 6 && VAR_44.to_write && VAR_44.failed)
     || (VAR_44.syncing && (VAR_44.uptodate + VAR_44.compute < VAR_48))
     || VAR_44.replacing
     || VAR_44.expanding)
  FUNC_17(VAR_43, &VAR_44, VAR_48);






 FUNC_25(VAR_45, VAR_43, &VAR_44);
 if (!VAR_43->reconstruct_state && !VAR_43->check_state && !VAR_43->log_io) {
  if (!FUNC_27(VAR_45->log)) {
   if (VAR_44.to_write)
    FUNC_15(VAR_45, VAR_43, &VAR_44, VAR_48);
  } else {
   int VAR_52 = 0;


   if (VAR_44.to_write)
    VAR_52 = FUNC_28(VAR_45, VAR_43, &VAR_44,
           VAR_48);







   if (VAR_52 == -VAR_0 ||

       (!FUNC_43(VAR_32, &VAR_43->state) &&
        VAR_44.injournal > 0)) {
    VAR_52 = FUNC_15(VAR_45, VAR_43, &VAR_44,
            VAR_48);
    if (VAR_52 == -VAR_0)
     goto finish;
   }
  }
 }






 if (VAR_43->check_state ||
     (VAR_44.syncing && VAR_44.locked == 0 &&
      !FUNC_43(VAR_21, &VAR_43->state) &&
      !FUNC_43(VAR_28, &VAR_43->state))) {
  if (VAR_45->level == 6)
   FUNC_13(VAR_45, VAR_43, &VAR_44, VAR_48);
  else
   FUNC_12(VAR_45, VAR_43, &VAR_44, VAR_48);
 }

 if ((VAR_44.replacing || VAR_44.syncing) && VAR_44.locked == 0
     && !FUNC_43(VAR_21, &VAR_43->state)
     && !FUNC_43(VAR_35, &VAR_43->state)) {

  for (VAR_46 = 0; VAR_46 < VAR_45->raid_disks; VAR_46++)
   if (FUNC_43(VAR_9, &VAR_43->dev[VAR_46].flags)) {
    FUNC_1(!FUNC_43(VAR_13, &VAR_43->dev[VAR_46].flags));
    FUNC_36(VAR_14, &VAR_43->dev[VAR_46].flags);
    FUNC_36(VAR_6, &VAR_43->dev[VAR_46].flags);
    VAR_44.locked++;
   }
  if (VAR_44.replacing)
   FUNC_36(VAR_28, &VAR_43->state);
  FUNC_36(VAR_35, &VAR_43->state);
 }
 if ((VAR_44.syncing || VAR_44.replacing) && VAR_44.locked == 0 &&
     !FUNC_43(VAR_21, &VAR_43->state) &&
     FUNC_43(VAR_28, &VAR_43->state)) {
  FUNC_19(VAR_45->mddev, VAR_36, 1);
  FUNC_8(VAR_37, &VAR_43->state);
  if (FUNC_40(VAR_10, &VAR_43->dev[VAR_43->pd_idx].flags))
   FUNC_45(&VAR_45->wait_for_overlap);
 }




 if (VAR_44.failed <= VAR_45->max_degraded && !VAR_45->mddev->ro)
  for (VAR_46 = 0; VAR_46 < VAR_44.failed; VAR_46++) {
   struct r5dev *VAR_53 = &VAR_43->dev[VAR_44.failed_num[VAR_46]];
   if (FUNC_43(VAR_12, &VAR_53->flags)
       && !FUNC_43(VAR_6, &VAR_53->flags)
       && FUNC_43(VAR_13, &VAR_53->flags)
    ) {
    if (!FUNC_43(VAR_11, &VAR_53->flags)) {
     FUNC_36(VAR_16, &VAR_53->flags);
     FUNC_36(VAR_11, &VAR_53->flags);
     FUNC_36(VAR_6, &VAR_53->flags);
     VAR_44.locked++;
    } else {

     FUNC_36(VAR_15, &VAR_53->flags);
     FUNC_36(VAR_6, &VAR_53->flags);
     VAR_44.locked++;
    }
   }
  }


 if (VAR_43->reconstruct_state == VAR_42) {
  struct stripe_head *VAR_54
   = FUNC_29(VAR_45, VAR_43->sector, 1, 1, 1);
  if (VAR_54 && FUNC_43(VAR_26, &VAR_54->state)) {



   FUNC_36(VAR_22, &VAR_43->state);
   FUNC_36(VAR_27, &VAR_43->state);
   if (!FUNC_41(VAR_31,
           &VAR_54->state))
    FUNC_4(&VAR_45->preread_active_stripes);
   FUNC_30(VAR_54);
   goto finish;
  }
  if (VAR_54)
   FUNC_30(VAR_54);

  VAR_43->reconstruct_state = VAR_40;
  FUNC_8(VAR_24, &VAR_43->state);
  for (VAR_46 = VAR_45->raid_disks; VAR_46--; ) {
   FUNC_36(VAR_16, &VAR_43->dev[VAR_46].flags);
   FUNC_36(VAR_6, &VAR_43->dev[VAR_46].flags);
   VAR_44.locked++;
  }
 }

 if (VAR_44.expanded && FUNC_43(VAR_24, &VAR_43->state) &&
     !VAR_43->reconstruct_state) {

  VAR_43->disks = VAR_45->raid_disks;
  FUNC_39(VAR_43->sector, VAR_45, 0, VAR_43);
  FUNC_35(VAR_43, &VAR_44, 1, 1);
 } else if (VAR_44.expanded && !VAR_43->reconstruct_state && VAR_44.locked == 0) {
  FUNC_8(VAR_25, &VAR_43->state);
  FUNC_3(&VAR_45->reshape_stripes);
  FUNC_45(&VAR_45->wait_for_overlap);
  FUNC_19(VAR_45->mddev, VAR_36, 1);
 }

 if (VAR_44.expanding && VAR_44.locked == 0 &&
     !FUNC_43(VAR_21, &VAR_43->state))
  FUNC_16(VAR_45, VAR_43);

finish:

 if (FUNC_44(VAR_44.blocked_rdev)) {
  if (VAR_45->mddev->external)
   FUNC_21(VAR_44.blocked_rdev,
       VAR_45->mddev);
  else




   FUNC_33(VAR_44.blocked_rdev,
      VAR_45->mddev);
 }

 if (VAR_44.handle_bad_blocks)
  for (VAR_46 = VAR_48; VAR_46--; ) {
   struct md_rdev *VAR_55;
   struct r5dev *VAR_56 = &VAR_43->dev[VAR_46];
   if (FUNC_40(VAR_17, &VAR_56->flags)) {

    VAR_55 = VAR_45->disks[VAR_46].rdev;
    if (!FUNC_34(VAR_55, VAR_43->sector,
       VAR_36, 0))
     FUNC_20(VAR_45->mddev, VAR_55);
    FUNC_33(VAR_55, VAR_45->mddev);
   }
   if (FUNC_40(VAR_7, &VAR_56->flags)) {
    VAR_55 = VAR_45->disks[VAR_46].rdev;
    FUNC_32(VAR_55, VAR_43->sector,
           VAR_36, 0);
    FUNC_33(VAR_55, VAR_45->mddev);
   }
   if (FUNC_40(VAR_8, &VAR_56->flags)) {
    VAR_55 = VAR_45->disks[VAR_46].replacement;
    if (!VAR_55)

     VAR_55 = VAR_45->disks[VAR_46].rdev;
    FUNC_32(VAR_55, VAR_43->sector,
           VAR_36, 0);
    FUNC_33(VAR_55, VAR_45->mddev);
   }
  }

 if (VAR_44.ops_request)
  FUNC_31(VAR_43, VAR_44.ops_request);

 FUNC_23(VAR_43, &VAR_44);

 if (VAR_44.dec_preread_active) {




  FUNC_3(&VAR_45->preread_active_stripes);
  if (FUNC_5(&VAR_45->preread_active_stripes) <
      VAR_1)
   FUNC_22(VAR_45->mddev->thread);
 }

 FUNC_9(VAR_18, &VAR_43->state);
}
