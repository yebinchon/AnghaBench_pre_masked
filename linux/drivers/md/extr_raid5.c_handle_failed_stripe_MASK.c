
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct stripe_head_state {scalar_t__ failed; scalar_t__ written; scalar_t__ to_write; int to_read; } ;
struct stripe_head {int state; TYPE_3__* dev; int sector; int stripe_lock; scalar_t__ overwrite_disks; int batch_head; } ;
struct r5conf {scalar_t__ max_degraded; TYPE_4__* mddev; int pending_full_writes; int wait_for_overlap; TYPE_1__* disks; } ;
struct md_rdev {int nr_pending; int flags; } ;
struct TYPE_8__ {scalar_t__ bi_sector; } ;
struct bio {TYPE_2__ bi_iter; } ;
struct TYPE_10__ {int thread; int bitmap; } ;
struct TYPE_9__ {scalar_t__ sector; int flags; struct bio* toread; int orig_page; int page; struct bio* written; struct bio* towrite; } ;
struct TYPE_7__ {int rdev; } ;


 int FUNC_0 (int ) ;
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
 scalar_t__ VAR_10 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct stripe_head*) ;
 int FUNC_7 (int ,int ,scalar_t__,int ,int ) ;
 int FUNC_8 (TYPE_4__*,struct md_rdev*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_4__*) ;
 struct bio* FUNC_11 (struct bio*,scalar_t__) ;
 struct md_rdev* FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct md_rdev*,TYPE_4__*) ;
 int FUNC_16 (struct md_rdev*,int ,scalar_t__,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int ,int *) ;
 scalar_t__ FUNC_20 (int ,int *) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static void
FUNC_22(struct r5conf *VAR_11, struct stripe_head *VAR_12,
       struct stripe_head_state *VAR_13, int VAR_14)
{
 int VAR_15;
 FUNC_0(VAR_12->batch_head);
 for (VAR_15 = VAR_14; VAR_15--; ) {
  struct bio *VAR_16;
  int VAR_17 = 0;

  if (FUNC_20(VAR_5, &VAR_12->dev[VAR_15].flags)) {
   struct md_rdev *VAR_18;
   FUNC_13();
   VAR_18 = FUNC_12(VAR_11->disks[VAR_15].rdev);
   if (VAR_18 && FUNC_20(VAR_1, &VAR_18->flags) &&
       !FUNC_20(VAR_0, &VAR_18->flags))
    FUNC_3(&VAR_18->nr_pending);
   else
    VAR_18 = ((void*)0);
   FUNC_14();
   if (VAR_18) {
    if (!FUNC_16(
         VAR_18,
         VAR_12->sector,
         VAR_10, 0))
     FUNC_8(VAR_11->mddev, VAR_18);
    FUNC_15(VAR_18, VAR_11->mddev);
   }
  }
  FUNC_17(&VAR_12->stripe_lock);

  VAR_16 = VAR_12->dev[VAR_15].towrite;
  VAR_12->dev[VAR_15].towrite = ((void*)0);
  VAR_12->overwrite_disks = 0;
  FUNC_18(&VAR_12->stripe_lock);
  if (VAR_16)
   VAR_17 = 1;

  FUNC_6(VAR_12);

  if (FUNC_19(VAR_4, &VAR_12->dev[VAR_15].flags))
   FUNC_21(&VAR_11->wait_for_overlap);

  while (VAR_16 && VAR_16->bi_iter.bi_sector <
   VAR_12->dev[VAR_15].sector + VAR_10) {
   struct bio *VAR_19 = FUNC_11(VAR_16, VAR_12->dev[VAR_15].sector);

   FUNC_10(VAR_11->mddev);
   FUNC_4(VAR_16);
   VAR_16 = VAR_19;
  }
  if (VAR_17)
   FUNC_7(VAR_11->mddev->bitmap, VAR_12->sector,
        VAR_10, 0, 0);
  VAR_17 = 0;

  VAR_16 = VAR_12->dev[VAR_15].written;
  VAR_12->dev[VAR_15].written = ((void*)0);
  if (FUNC_19(VAR_6, &VAR_12->dev[VAR_15].flags)) {
   FUNC_1(FUNC_20(VAR_7, &VAR_12->dev[VAR_15].flags));
   VAR_12->dev[VAR_15].page = VAR_12->dev[VAR_15].orig_page;
  }

  if (VAR_16) VAR_17 = 1;
  while (VAR_16 && VAR_16->bi_iter.bi_sector <
         VAR_12->dev[VAR_15].sector + VAR_10) {
   struct bio *VAR_20 = FUNC_11(VAR_16, VAR_12->dev[VAR_15].sector);

   FUNC_10(VAR_11->mddev);
   FUNC_4(VAR_16);
   VAR_16 = VAR_20;
  }




  if (!FUNC_20(VAR_8, &VAR_12->dev[VAR_15].flags) &&
      VAR_13->failed > VAR_11->max_degraded &&
      (!FUNC_20(VAR_2, &VAR_12->dev[VAR_15].flags) ||
        FUNC_20(VAR_5, &VAR_12->dev[VAR_15].flags))) {
   FUNC_17(&VAR_12->stripe_lock);
   VAR_16 = VAR_12->dev[VAR_15].toread;
   VAR_12->dev[VAR_15].toread = ((void*)0);
   FUNC_18(&VAR_12->stripe_lock);
   if (FUNC_19(VAR_4, &VAR_12->dev[VAR_15].flags))
    FUNC_21(&VAR_11->wait_for_overlap);
   if (VAR_16)
    VAR_13->to_read--;
   while (VAR_16 && VAR_16->bi_iter.bi_sector <
          VAR_12->dev[VAR_15].sector + VAR_10) {
    struct bio *VAR_21 =
     FUNC_11(VAR_16, VAR_12->dev[VAR_15].sector);

    FUNC_4(VAR_16);
    VAR_16 = VAR_21;
   }
  }
  if (VAR_17)
   FUNC_7(VAR_11->mddev->bitmap, VAR_12->sector,
        VAR_10, 0, 0);



  FUNC_5(VAR_3, &VAR_12->dev[VAR_15].flags);
 }
 VAR_13->to_write = 0;
 VAR_13->written = 0;

 if (FUNC_19(VAR_9, &VAR_12->state))
  if (FUNC_2(&VAR_11->pending_full_writes))
   FUNC_9(VAR_11->mddev->thread);
}
