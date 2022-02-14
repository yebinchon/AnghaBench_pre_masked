
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct r10conf {scalar_t__ reshape_safe; scalar_t__ reshape_progress; scalar_t__ pending_count; int copies; int bio_split; int mddev; TYPE_1__* mirrors; int wait_barrier; } ;
struct r10bio {scalar_t__ sectors; int read_slot; TYPE_3__* devs; int sector; int remaining; struct bio* master_bio; int state; } ;
struct mddev {scalar_t__ reshape_position; int bitmap; int thread; int sb_flags; int sb_wait; scalar_t__ reshape_backwards; int recovery; struct r10conf* private; } ;
struct md_rdev {int raid_disk; int nr_pending; int flags; } ;
struct TYPE_6__ {scalar_t__ bi_sector; } ;
struct bio {TYPE_2__ bi_iter; } ;
typedef scalar_t__ sector_t ;
struct TYPE_8__ {scalar_t__ (* area_resyncing ) (struct mddev*,int ,scalar_t__,int ) ;} ;
struct TYPE_7__ {int devnum; scalar_t__ addr; struct bio* repl_bio; struct bio* bio; } ;
struct TYPE_5__ {struct md_rdev* rdev; struct md_rdev* replacement; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct r10conf*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct bio*,struct bio*) ;
 int FUNC_6 (struct bio*) ;
 int FUNC_7 (struct bio*) ;
 struct bio* FUNC_8 (struct bio*,int,int ,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct bio*) ;
 int FUNC_11 (struct md_rdev*,scalar_t__,int,scalar_t__*,int*) ;
 scalar_t__ VAR_11 ;
 int FUNC_12 (int ,int ,int,int ) ;
 TYPE_4__* VAR_12 ;
 int FUNC_13 (struct md_rdev*,struct mddev*) ;
 int FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (struct mddev*) ;
 int FUNC_16 (struct r10bio*) ;
 int FUNC_17 (int *,int *,int ) ;
 int FUNC_18 (struct r10conf*,struct r10bio*) ;
 int FUNC_19 (struct mddev*,char*,...) ;
 int FUNC_20 (struct mddev*,struct r10bio*,struct bio*,int,int) ;
 struct md_rdev* FUNC_21 (struct md_rdev*) ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 (struct md_rdev*,struct mddev*) ;
 int FUNC_25 (struct mddev*,struct r10conf*,struct bio*,scalar_t__) ;
 int FUNC_26 () ;
 int FUNC_27 (int ,int *) ;
 int FUNC_28 (int *,int ,int) ;
 int FUNC_29 () ;
 scalar_t__ FUNC_30 (struct mddev*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_31 (struct mddev*,int ,scalar_t__,int ) ;
 struct md_rdev* FUNC_32 (int ,int *) ;
 scalar_t__ FUNC_33 (struct md_rdev*) ;
 int VAR_13 ;
 int FUNC_34 (struct r10conf*) ;
 int FUNC_35 (int ,int) ;

__attribute__((used)) static void FUNC_36(struct mddev *VAR_14, struct bio *VAR_15,
     struct r10bio *VAR_16)
{
 struct r10conf *VAR_17 = VAR_14->private;
 int VAR_18;
 struct md_rdev *VAR_19;
 sector_t VAR_20;
 int VAR_21;

 if ((FUNC_15(VAR_14) &&
      VAR_12->area_resyncing(VAR_14, VAR_9,
         VAR_15->bi_iter.bi_sector,
         FUNC_6(VAR_15)))) {
  FUNC_1(VAR_13);
  for (;;) {
   FUNC_17(&VAR_17->wait_barrier,
     &VAR_13, VAR_8);
   if (!VAR_12->area_resyncing(VAR_14, VAR_9,
     VAR_15->bi_iter.bi_sector, FUNC_6(VAR_15)))
    break;
   FUNC_26();
  }
  FUNC_9(&VAR_17->wait_barrier, &VAR_13);
 }

 VAR_20 = VAR_16->sectors;
 FUNC_25(VAR_14, VAR_17, VAR_15, VAR_20);
 if (FUNC_32(VAR_4, &VAR_14->recovery) &&
     (VAR_14->reshape_backwards
      ? (VAR_15->bi_iter.bi_sector < VAR_17->reshape_safe &&
  VAR_15->bi_iter.bi_sector + VAR_20 > VAR_17->reshape_progress)
      : (VAR_15->bi_iter.bi_sector + VAR_20 > VAR_17->reshape_safe &&
  VAR_15->bi_iter.bi_sector < VAR_17->reshape_progress))) {

  VAR_14->reshape_position = VAR_17->reshape_progress;
  FUNC_28(&VAR_14->sb_flags, 0,
         FUNC_0(VAR_5) | FUNC_0(VAR_6));
  FUNC_14(VAR_14->thread);
  FUNC_19(VAR_17->mddev, "wait reshape metadata");
  FUNC_35(VAR_14->sb_wait,
      !FUNC_32(VAR_6, &VAR_14->sb_flags));

  VAR_17->reshape_safe = VAR_14->reshape_position;
 }

 if (VAR_17->pending_count >= VAR_11) {
  FUNC_14(VAR_14->thread);
  FUNC_19(VAR_14, "wait queued");
  FUNC_35(VAR_17->wait_barrier,
      VAR_17->pending_count < VAR_11);
 }
 VAR_16->read_slot = -1;
 FUNC_18(VAR_17, VAR_16);
retry_write:
 VAR_19 = ((void*)0);
 FUNC_22();
 VAR_21 = VAR_16->sectors;

 for (VAR_18 = 0; VAR_18 < VAR_17->copies; VAR_18++) {
  int VAR_22 = VAR_16->devs[VAR_18].devnum;
  struct md_rdev *VAR_23 = FUNC_21(VAR_17->mirrors[VAR_22].rdev);
  struct md_rdev *VAR_24 = FUNC_21(
   VAR_17->mirrors[VAR_22].replacement);
  if (VAR_23 == VAR_24)
   VAR_24 = ((void*)0);
  if (VAR_23 && FUNC_33(FUNC_32(VAR_0, &VAR_23->flags))) {
   FUNC_3(&VAR_23->nr_pending);
   VAR_19 = VAR_23;
   break;
  }
  if (VAR_24 && FUNC_33(FUNC_32(VAR_0, &VAR_24->flags))) {
   FUNC_3(&VAR_24->nr_pending);
   VAR_19 = VAR_24;
   break;
  }
  if (VAR_23 && (FUNC_32(VAR_2, &VAR_23->flags)))
   VAR_23 = ((void*)0);
  if (VAR_24 && (FUNC_32(VAR_2, &VAR_24->flags)))
   VAR_24 = ((void*)0);

  VAR_16->devs[VAR_18].bio = ((void*)0);
  VAR_16->devs[VAR_18].repl_bio = ((void*)0);

  if (!VAR_23 && !VAR_24) {
   FUNC_27(VAR_7, &VAR_16->state);
   continue;
  }
  if (VAR_23 && FUNC_32(VAR_10, &VAR_23->flags)) {
   sector_t VAR_25;
   sector_t VAR_26 = VAR_16->devs[VAR_18].addr;
   int VAR_27;
   int VAR_28;

   VAR_28 = FUNC_11(VAR_23, VAR_26, VAR_21,
          &VAR_25, &VAR_27);
   if (VAR_28 < 0) {



    FUNC_3(&VAR_23->nr_pending);
    FUNC_27(VAR_1, &VAR_23->flags);
    VAR_19 = VAR_23;
    break;
   }
   if (VAR_28 && VAR_25 <= VAR_26) {

    VAR_27 -= (VAR_26 - VAR_25);
    if (VAR_27 < VAR_21)



     VAR_21 = VAR_27;
    continue;
   }
   if (VAR_28) {
    int VAR_29 = VAR_25 - VAR_26;
    if (VAR_29 < VAR_21)
     VAR_21 = VAR_29;
   }
  }
  if (VAR_23) {
   VAR_16->devs[VAR_18].bio = VAR_15;
   FUNC_3(&VAR_23->nr_pending);
  }
  if (VAR_24) {
   VAR_16->devs[VAR_18].repl_bio = VAR_15;
   FUNC_3(&VAR_24->nr_pending);
  }
 }
 FUNC_23();

 if (FUNC_33(VAR_19)) {

  int VAR_30;
  int VAR_31;

  for (VAR_30 = 0; VAR_30 < VAR_18; VAR_30++) {
   if (VAR_16->devs[VAR_30].bio) {
    VAR_31 = VAR_16->devs[VAR_30].devnum;
    FUNC_24(VAR_17->mirrors[VAR_31].rdev, VAR_14);
   }
   if (VAR_16->devs[VAR_30].repl_bio) {
    struct md_rdev *VAR_32;
    VAR_31 = VAR_16->devs[VAR_30].devnum;
    VAR_32 = VAR_17->mirrors[VAR_31].replacement;
    if (!VAR_32) {

     FUNC_29();
     VAR_32 = VAR_17->mirrors[VAR_31].rdev;
    }
    FUNC_24(VAR_32, VAR_14);
   }
  }
  FUNC_2(VAR_17);
  FUNC_19(VAR_17->mddev, "wait rdev %d blocked", VAR_19->raid_disk);
  FUNC_13(VAR_19, VAR_14);
  FUNC_34(VAR_17);
  goto retry_write;
 }

 if (VAR_21 < VAR_16->sectors)
  VAR_16->sectors = VAR_21;

 if (VAR_16->sectors < FUNC_7(VAR_15)) {
  struct bio *VAR_33 = FUNC_8(VAR_15, VAR_16->sectors,
           VAR_3, &VAR_17->bio_split);
  FUNC_5(VAR_33, VAR_15);
  FUNC_2(VAR_17);
  FUNC_10(VAR_15);
  FUNC_34(VAR_17);
  VAR_15 = VAR_33;
  VAR_16->master_bio = VAR_15;
 }

 FUNC_4(&VAR_16->remaining, 1);
 FUNC_12(VAR_14->bitmap, VAR_16->sector, VAR_16->sectors, 0);

 for (VAR_18 = 0; VAR_18 < VAR_17->copies; VAR_18++) {
  if (VAR_16->devs[VAR_18].bio)
   FUNC_20(VAR_14, VAR_16, VAR_15, 0, VAR_18);
  if (VAR_16->devs[VAR_18].repl_bio)
   FUNC_20(VAR_14, VAR_16, VAR_15, 1, VAR_18);
 }
 FUNC_16(VAR_16);
}
