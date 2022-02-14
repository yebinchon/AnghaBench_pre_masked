
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_head_state {scalar_t__ failed; int waiting_extra_page; scalar_t__ locked; scalar_t__ req_compute; } ;
struct stripe_head {scalar_t__ sector; int pd_idx; int qd_idx; int state; struct r5dev* dev; } ;
struct r5dev {scalar_t__ page; scalar_t__ orig_page; int flags; scalar_t__ towrite; } ;
struct r5conf {scalar_t__ rmw_level; TYPE_1__* mddev; int cache_state; } ;
struct page {int dummy; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {scalar_t__ recovery_cp; scalar_t__ queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
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
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,char*,unsigned long long,int,...) ;
 int FUNC_2 (struct r5conf*,struct r5dev*,struct stripe_head_state*) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (struct stripe_head*) ;
 int FUNC_5 (struct stripe_head*,struct stripe_head_state*,int,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (struct r5dev*) ;

__attribute__((used)) static int FUNC_10(struct r5conf *VAR_18,
      struct stripe_head *VAR_19,
      struct stripe_head_state *VAR_20,
      int VAR_21)
{
 int VAR_22 = 0, VAR_23 = 0, VAR_24;
 sector_t VAR_25 = VAR_18->mddev->recovery_cp;
 if (VAR_18->rmw_level == VAR_3 ||
     (VAR_25 < VAR_2 && VAR_19->sector >= VAR_25 &&
      VAR_20->failed == 0)) {



  VAR_23 = 1; VAR_22 = 2;
  FUNC_3("force RCW rmw_level=%u, recovery_cp=%llu sh->sector=%llu\n",
    VAR_18->rmw_level, (unsigned long long)VAR_25,
    (unsigned long long)VAR_19->sector);
 } else for (VAR_24 = VAR_21; VAR_24--; ) {

  struct r5dev *VAR_26 = &VAR_19->dev[VAR_24];
  if (((VAR_26->towrite && !FUNC_2(VAR_18, VAR_26, VAR_20)) ||
       VAR_24 == VAR_19->pd_idx || VAR_24 == VAR_19->qd_idx ||
       FUNC_8(VAR_6, &VAR_26->flags)) &&
      !FUNC_8(VAR_8, &VAR_26->flags) &&
      !(FUNC_9(VAR_26) ||
        FUNC_8(VAR_11, &VAR_26->flags))) {
   if (FUNC_8(VAR_7, &VAR_26->flags))
    VAR_22++;
   else
    VAR_22 += 2*VAR_21;
  }

  if (!FUNC_8(VAR_9, &VAR_26->flags) &&
      VAR_24 != VAR_19->pd_idx && VAR_24 != VAR_19->qd_idx &&
      !FUNC_8(VAR_8, &VAR_26->flags) &&
      !(FUNC_8(VAR_10, &VAR_26->flags) ||
        FUNC_8(VAR_11, &VAR_26->flags))) {
   if (FUNC_8(VAR_7, &VAR_26->flags))
    VAR_23++;
   else
    VAR_23 += 2*VAR_21;
  }
 }

 FUNC_3("for sector %llu state 0x%lx, rmw=%d rcw=%d\n",
   (unsigned long long)VAR_19->sector, VAR_19->state, VAR_22, VAR_23);
 FUNC_6(VAR_16, &VAR_19->state);
 if ((VAR_22 < VAR_23 || (VAR_22 == VAR_23 && VAR_18->rmw_level == VAR_4)) && VAR_22 > 0) {

  if (VAR_18->mddev->queue)
   FUNC_1(VAR_18->mddev->queue,
       "raid5 rmw %llu %d",
       (unsigned long long)VAR_19->sector, VAR_22);
  for (VAR_24 = VAR_21; VAR_24--; ) {
   struct r5dev *VAR_27 = &VAR_19->dev[VAR_24];
   if (FUNC_8(VAR_6, &VAR_27->flags) &&
       VAR_27->page == VAR_27->orig_page &&
       !FUNC_8(VAR_8, &VAR_19->dev[VAR_19->pd_idx].flags)) {

    struct page *VAR_28 = FUNC_0(VAR_1);

    if (VAR_28) {
     VAR_27->orig_page = VAR_28;
     continue;
    }





    if (!FUNC_7(VAR_5,
            &VAR_18->cache_state)) {
     FUNC_4(VAR_19);
     break;
    }


    FUNC_6(VAR_15, &VAR_19->state);
    VAR_20->waiting_extra_page = 1;
    return -VAR_0;
   }
  }

  for (VAR_24 = VAR_21; VAR_24--; ) {
   struct r5dev *VAR_29 = &VAR_19->dev[VAR_24];
   if (((VAR_29->towrite && !FUNC_2(VAR_18, VAR_29, VAR_20)) ||
        VAR_24 == VAR_19->pd_idx || VAR_24 == VAR_19->qd_idx ||
        FUNC_8(VAR_6, &VAR_29->flags)) &&
       !FUNC_8(VAR_8, &VAR_29->flags) &&
       !(FUNC_9(VAR_29) ||
         FUNC_8(VAR_11, &VAR_29->flags)) &&
       FUNC_8(VAR_7, &VAR_29->flags)) {
    if (FUNC_8(VAR_17,
          &VAR_19->state)) {
     FUNC_3("Read_old block %d for r-m-w\n",
       VAR_24);
     FUNC_6(VAR_8, &VAR_29->flags);
     FUNC_6(VAR_12, &VAR_29->flags);
     VAR_20->locked++;
    } else {
     FUNC_6(VAR_15, &VAR_19->state);
     FUNC_6(VAR_16, &VAR_19->state);
    }
   }
  }
 }
 if ((VAR_23 < VAR_22 || (VAR_23 == VAR_22 && VAR_18->rmw_level != VAR_4)) && VAR_23 > 0) {

  int VAR_30 =0;
  VAR_23 = 0;
  for (VAR_24 = VAR_21; VAR_24--; ) {
   struct r5dev *VAR_31 = &VAR_19->dev[VAR_24];
   if (!FUNC_8(VAR_9, &VAR_31->flags) &&
       VAR_24 != VAR_19->pd_idx && VAR_24 != VAR_19->qd_idx &&
       !FUNC_8(VAR_8, &VAR_31->flags) &&
       !(FUNC_8(VAR_10, &VAR_31->flags) ||
         FUNC_8(VAR_11, &VAR_31->flags))) {
    VAR_23++;
    if (FUNC_8(VAR_7, &VAR_31->flags) &&
        FUNC_8(VAR_17,
          &VAR_19->state)) {
     FUNC_3("Read_old block "
      "%d for Reconstruct\n", VAR_24);
     FUNC_6(VAR_8, &VAR_31->flags);
     FUNC_6(VAR_12, &VAR_31->flags);
     VAR_20->locked++;
     VAR_30++;
    } else {
     FUNC_6(VAR_15, &VAR_19->state);
     FUNC_6(VAR_16, &VAR_19->state);
    }
   }
  }
  if (VAR_23 && VAR_18->mddev->queue)
   FUNC_1(VAR_18->mddev->queue, "raid5 rcw %llu %d %d %d",
       (unsigned long long)VAR_19->sector,
       VAR_23, VAR_30, FUNC_8(VAR_15, &VAR_19->state));
 }

 if (VAR_23 > VAR_21 && VAR_22 > VAR_21 &&
     !FUNC_8(VAR_17, &VAR_19->state))
  FUNC_6(VAR_15, &VAR_19->state);
 if ((VAR_20->req_compute || !FUNC_8(VAR_14, &VAR_19->state)) &&
     (VAR_20->locked == 0 && (VAR_23 == 0 || VAR_22 == 0) &&
      !FUNC_8(VAR_13, &VAR_19->state)))
  FUNC_5(VAR_19, VAR_20, VAR_23 == 0, 0);
 return 0;
}
