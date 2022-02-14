
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe_head_state {int expanding; int expanded; int* failed_num; int compute; int handle_bad_blocks; int failed; int syncing; int replacing; int just_cached; int injournal; struct md_rdev* blocked_rdev; int written; int non_overwrite; int to_write; int to_read; int to_fill; int uptodate; int locked; int log_failed; } ;
struct stripe_head {int disks; scalar_t__ sector; int state; struct r5dev* dev; int batch_head; struct r5conf* raid_conf; } ;
struct r5dev {scalar_t__ written; int flags; scalar_t__ towrite; scalar_t__ toread; } ;
struct r5conf {TYPE_2__* mddev; TYPE_1__* disks; } ;
struct md_rdev {scalar_t__ recovery_offset; int flags; int nr_pending; } ;
typedef int sector_t ;
struct TYPE_4__ {scalar_t__ recovery_cp; int recovery; } ;
struct TYPE_3__ {int replacement; int rdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
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
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct md_rdev*,scalar_t__,scalar_t__,int *,int*) ;
 int FUNC_4 (struct stripe_head_state*,int ,int) ;
 int FUNC_5 (char*,int,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct r5conf*) ;
 struct md_rdev* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static void FUNC_12(struct stripe_head *VAR_26, struct stripe_head_state *VAR_27)
{
 struct r5conf *VAR_28 = VAR_26->raid_conf;
 int VAR_29 = VAR_26->disks;
 struct r5dev *VAR_30;
 int VAR_31;
 int VAR_32 = 0;

 FUNC_4(VAR_27, 0, sizeof(*VAR_27));

 VAR_27->expanding = FUNC_11(VAR_22, &VAR_26->state) && !VAR_26->batch_head;
 VAR_27->expanded = FUNC_11(VAR_21, &VAR_26->state) && !VAR_26->batch_head;
 VAR_27->failed_num[0] = -1;
 VAR_27->failed_num[1] = -1;
 VAR_27->log_failed = FUNC_6(VAR_28);


 FUNC_8();
 for (VAR_31=VAR_29; VAR_31--; ) {
  struct md_rdev *VAR_33;
  sector_t VAR_34;
  int VAR_35;
  int VAR_36 = 0;

  VAR_30 = &VAR_26->dev[VAR_31];

  FUNC_5("check %d: state 0x%lx read %p write %p written %p\n",
    VAR_31, VAR_30->flags,
    VAR_30->toread, VAR_30->towrite, VAR_30->written);





  if (FUNC_11(VAR_16, &VAR_30->flags) && VAR_30->toread &&
      !FUNC_11(VAR_20, &VAR_26->state))
   FUNC_10(VAR_18, &VAR_30->flags);


  if (FUNC_11(VAR_8, &VAR_30->flags))
   VAR_27->locked++;
  if (FUNC_11(VAR_16, &VAR_30->flags))
   VAR_27->uptodate++;
  if (FUNC_11(VAR_17, &VAR_30->flags)) {
   VAR_27->compute++;
   FUNC_0(VAR_27->compute > 2);
  }

  if (FUNC_11(VAR_18, &VAR_30->flags))
   VAR_27->to_fill++;
  else if (VAR_30->toread)
   VAR_27->to_read++;
  if (VAR_30->towrite) {
   VAR_27->to_write++;
   if (!FUNC_11(VAR_12, &VAR_30->flags))
    VAR_27->non_overwrite++;
  }
  if (VAR_30->written)
   VAR_27->written++;



  VAR_33 = FUNC_7(VAR_28->disks[VAR_31].replacement);
  if (VAR_33 && !FUNC_11(VAR_2, &VAR_33->flags) &&
      VAR_33->recovery_offset >= VAR_26->sector + VAR_23 &&
      !FUNC_3(VAR_33, VAR_26->sector, VAR_23,
     &VAR_34, &VAR_35))
   FUNC_10(VAR_15, &VAR_30->flags);
  else {
   if (VAR_33 && !FUNC_11(VAR_2, &VAR_33->flags))
    FUNC_10(VAR_11, &VAR_30->flags);
   else
    FUNC_2(VAR_11, &VAR_30->flags);
   VAR_33 = FUNC_7(VAR_28->disks[VAR_31].rdev);
   FUNC_2(VAR_15, &VAR_30->flags);
  }
  if (VAR_33 && FUNC_11(VAR_2, &VAR_33->flags))
   VAR_33 = ((void*)0);
  if (VAR_33) {
   VAR_36 = FUNC_3(VAR_33, VAR_26->sector, VAR_23,
          &VAR_34, &VAR_35);
   if (VAR_27->blocked_rdev == ((void*)0)
       && (FUNC_11(VAR_0, &VAR_33->flags)
    || VAR_36 < 0)) {
    if (VAR_36 < 0)
     FUNC_10(VAR_1,
      &VAR_33->flags);
    VAR_27->blocked_rdev = VAR_33;
    FUNC_1(&VAR_33->nr_pending);
   }
  }
  FUNC_2(VAR_7, &VAR_30->flags);
  if (!VAR_33)
                    ;
  else if (VAR_36) {

   if (!FUNC_11(VAR_25, &VAR_33->flags) &&
       FUNC_11(VAR_16, &VAR_30->flags)) {



    FUNC_10(VAR_7, &VAR_30->flags);
    FUNC_10(VAR_14, &VAR_30->flags);
   }
  } else if (FUNC_11(VAR_3, &VAR_33->flags))
   FUNC_10(VAR_7, &VAR_30->flags);
  else if (VAR_26->sector + VAR_23 <= VAR_33->recovery_offset)

   FUNC_10(VAR_7, &VAR_30->flags);
  else if (FUNC_11(VAR_16, &VAR_30->flags) &&
    FUNC_11(VAR_5, &VAR_30->flags))




   FUNC_10(VAR_7, &VAR_30->flags);

  if (FUNC_11(VAR_19, &VAR_30->flags)) {


   struct md_rdev *VAR_37 = FUNC_7(
    VAR_28->disks[VAR_31].rdev);
   if (VAR_37 == VAR_33)
    FUNC_2(VAR_7, &VAR_30->flags);
   if (VAR_37 && !FUNC_11(VAR_2, &VAR_37->flags)) {
    VAR_27->handle_bad_blocks = 1;
    FUNC_1(&VAR_37->nr_pending);
   } else
    FUNC_2(VAR_19, &VAR_30->flags);
  }
  if (FUNC_11(VAR_9, &VAR_30->flags)) {


   struct md_rdev *VAR_38 = FUNC_7(
    VAR_28->disks[VAR_31].rdev);
   if (VAR_38 && !FUNC_11(VAR_2, &VAR_38->flags)) {
    VAR_27->handle_bad_blocks = 1;
    FUNC_1(&VAR_38->nr_pending);
   } else
    FUNC_2(VAR_9, &VAR_30->flags);
  }
  if (FUNC_11(VAR_10, &VAR_30->flags)) {
   struct md_rdev *VAR_39 = FUNC_7(
    VAR_28->disks[VAR_31].replacement);
   if (VAR_39 && !FUNC_11(VAR_2, &VAR_39->flags)) {
    VAR_27->handle_bad_blocks = 1;
    FUNC_1(&VAR_39->nr_pending);
   } else
    FUNC_2(VAR_10, &VAR_30->flags);
  }
  if (!FUNC_11(VAR_7, &VAR_30->flags)) {

   FUNC_2(VAR_14, &VAR_30->flags);
   FUNC_2(VAR_13, &VAR_30->flags);
  }
  if (FUNC_11(VAR_14, &VAR_30->flags))
   FUNC_2(VAR_7, &VAR_30->flags);
  if (!FUNC_11(VAR_7, &VAR_30->flags)) {
   if (VAR_27->failed < 2)
    VAR_27->failed_num[VAR_27->failed] = VAR_31;
   VAR_27->failed++;
   if (VAR_33 && !FUNC_11(VAR_2, &VAR_33->flags))
    VAR_32 = 1;
   else if (!VAR_33) {
    VAR_33 = FUNC_7(
        VAR_28->disks[VAR_31].replacement);
    if (VAR_33 && !FUNC_11(VAR_2, &VAR_33->flags))
     VAR_32 = 1;
   }
  }

  if (FUNC_11(VAR_6, &VAR_30->flags))
   VAR_27->injournal++;
  if (FUNC_11(VAR_6, &VAR_30->flags) && VAR_30->written)
   VAR_27->just_cached++;
 }
 if (FUNC_11(VAR_24, &VAR_26->state)) {
  if (VAR_32 ||
      VAR_26->sector >= VAR_28->mddev->recovery_cp ||
      FUNC_11(VAR_4, &(VAR_28->mddev->recovery)))
   VAR_27->syncing = 1;
  else
   VAR_27->replacing = 1;
 }
 FUNC_9();
}
