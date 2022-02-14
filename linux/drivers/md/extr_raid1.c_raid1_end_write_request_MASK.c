
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct r1conf {TYPE_3__* mddev; TYPE_1__* mirrors; } ;
struct r1bio {int ** bios; struct bio* master_bio; int state; int remaining; int behind_remaining; scalar_t__ sectors; scalar_t__ sector; TYPE_4__* mddev; } ;
struct md_rdev {int flags; } ;
struct TYPE_6__ {scalar_t__ bi_sector; } ;
struct bio {int bi_opf; TYPE_2__ bi_iter; scalar_t__ bi_status; struct r1bio* bi_private; } ;
typedef scalar_t__ sector_t ;
struct TYPE_8__ {struct r1conf* private; } ;
struct TYPE_7__ {int recovery; } ;
struct TYPE_5__ {struct md_rdev* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 scalar_t__ FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct r1bio*) ;
 int FUNC_6 (struct r1bio*,struct bio*) ;
 scalar_t__ FUNC_7 (struct md_rdev*,scalar_t__,scalar_t__,scalar_t__*,int*) ;
 int FUNC_8 (TYPE_4__*,struct md_rdev*) ;
 int FUNC_9 (char*,unsigned long long,unsigned long long) ;
 int FUNC_10 (struct r1bio*) ;
 int FUNC_11 (struct md_rdev*,TYPE_3__*) ;
 int FUNC_12 (struct md_rdev*,scalar_t__,scalar_t__) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static void FUNC_16(struct bio *VAR_16)
{
 struct r1bio *VAR_17 = VAR_16->bi_private;
 int VAR_18 = FUNC_15(VAR_6, &VAR_17->state);
 struct r1conf *VAR_19 = VAR_17->mddev->private;
 struct bio *VAR_20 = ((void*)0);
 int VAR_21 = FUNC_6(VAR_17, VAR_16);
 struct md_rdev *VAR_22 = VAR_19->mirrors[VAR_21].rdev;
 bool VAR_23;

 VAR_23 = VAR_16->bi_status && FUNC_3(VAR_16) == VAR_11;




 if (VAR_16->bi_status && !VAR_23) {
  FUNC_13(VAR_14, &VAR_22->flags);
  if (!FUNC_14(VAR_13, &VAR_22->flags))
   FUNC_13(VAR_5, &
    VAR_19->mddev->recovery);

  if (FUNC_15(VAR_0, &VAR_22->flags) &&
      (VAR_16->bi_opf & VAR_4) &&

      !FUNC_15(VAR_15, &VAR_22->flags)) {
   FUNC_8(VAR_17->mddev, VAR_22);
  }







  if (!FUNC_15(VAR_1, &VAR_22->flags))
   FUNC_13(VAR_10, &VAR_17->state);
  else {

   VAR_17->bios[VAR_21] = ((void*)0);
   VAR_20 = VAR_16;
  }
 } else {
  sector_t VAR_24;
  int VAR_25;

  VAR_17->bios[VAR_21] = ((void*)0);
  VAR_20 = VAR_16;
  if (FUNC_15(VAR_3, &VAR_22->flags) &&
      !FUNC_15(VAR_1, &VAR_22->flags))
   FUNC_13(VAR_9, &VAR_17->state);


  if (FUNC_7(VAR_22, VAR_17->sector, VAR_17->sectors,
    &VAR_24, &VAR_25) && !VAR_23) {
   VAR_17->bios[VAR_21] = VAR_2;
   FUNC_13(VAR_7, &VAR_17->state);
  }
 }

 if (VAR_18) {
  if (FUNC_15(VAR_12, &VAR_22->flags)) {
   sector_t VAR_26 = VAR_17->sector;
   sector_t VAR_27 = VAR_17->sector + VAR_17->sectors;

   FUNC_12(VAR_22, VAR_26, VAR_27);
  }
  if (FUNC_15(VAR_15, &VAR_22->flags))
   FUNC_0(&VAR_17->behind_remaining);
  if (FUNC_1(&VAR_17->behind_remaining) >= (FUNC_1(&VAR_17->remaining)-1) &&
      FUNC_15(VAR_9, &VAR_17->state)) {

   if (!FUNC_14(VAR_8, &VAR_17->state)) {
    struct bio *VAR_28 = VAR_17->master_bio;
    FUNC_9("raid1: behind end write sectors"
      " %llu-%llu\n",
      (unsigned long long) VAR_28->bi_iter.bi_sector,
      (unsigned long long) FUNC_2(VAR_28) - 1);
    FUNC_5(VAR_17);
   }
  }
 }
 if (VAR_17->bios[VAR_21] == ((void*)0))
  FUNC_11(VAR_22, VAR_19->mddev);





 FUNC_10(VAR_17);

 if (VAR_20)
  FUNC_4(VAR_20);
}
