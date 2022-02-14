
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stripe_head {int disks; scalar_t__ qd_idx; int pd_idx; int state; TYPE_2__* dev; scalar_t__ sector; int count; struct r5conf* raid_conf; } ;
struct r5conf {scalar_t__ max_degraded; scalar_t__ max_nr_stripes; TYPE_3__* mddev; TYPE_1__* disks; } ;
struct md_rdev {int flags; int read_errors; int bdev; int corrected_errors; scalar_t__ data_offset; scalar_t__ new_data_offset; } ;
struct bio {scalar_t__ bi_status; struct stripe_head* bi_private; } ;
typedef scalar_t__ sector_t ;
struct TYPE_8__ {scalar_t__ degraded; } ;
struct TYPE_7__ {int flags; struct bio req; } ;
struct TYPE_6__ {struct md_rdev* rdev; struct md_rdev* replacement; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
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
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 char* FUNC_5 (int ,char*) ;
 int FUNC_6 (struct bio*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (TYPE_3__*,struct md_rdev*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (char*,unsigned long long,int,scalar_t__,scalar_t__) ;
 int FUNC_11 (char*,int ,int ,unsigned long long,char*) ;
 int FUNC_12 (char*,int ,char const*,...) ;
 int FUNC_13 (char*,int ,unsigned long long,char const*) ;
 int FUNC_14 (struct stripe_head*) ;
 int FUNC_15 (struct md_rdev*,TYPE_3__*) ;
 scalar_t__ FUNC_16 (struct md_rdev*,scalar_t__,int ,int ) ;
 int FUNC_17 (int ,int *) ;
 scalar_t__ FUNC_18 (int ,int *) ;
 scalar_t__ FUNC_19 (struct r5conf*,struct stripe_head*) ;

__attribute__((used)) static void FUNC_20(struct bio * VAR_14)
{
 struct stripe_head *VAR_15 = VAR_14->bi_private;
 struct r5conf *VAR_16 = VAR_15->raid_conf;
 int VAR_17 = VAR_15->disks, VAR_18;
 char VAR_19[VAR_0];
 struct md_rdev *VAR_20 = ((void*)0);
 sector_t VAR_21;

 for (VAR_18=0 ; VAR_18<VAR_17; VAR_18++)
  if (VAR_14 == &VAR_15->dev[VAR_18].req)
   break;

 FUNC_10("end_read_request %llu/%d, count: %d, error %d.\n",
  (unsigned long long)VAR_15->sector, VAR_18, FUNC_3(&VAR_15->count),
  VAR_14->bi_status);
 if (VAR_18 == VAR_17) {
  FUNC_6(VAR_14);
  FUNC_0();
  return;
 }
 if (FUNC_18(VAR_10, &VAR_15->dev[VAR_18].flags))





  VAR_20 = VAR_16->disks[VAR_18].replacement;
 if (!VAR_20)
  VAR_20 = VAR_16->disks[VAR_18].rdev;

 if (FUNC_19(VAR_16, VAR_15))
  VAR_21 = VAR_15->sector + VAR_20->new_data_offset;
 else
  VAR_21 = VAR_15->sector + VAR_20->data_offset;
 if (!VAR_14->bi_status) {
  FUNC_17(VAR_11, &VAR_15->dev[VAR_18].flags);
  if (FUNC_18(VAR_8, &VAR_15->dev[VAR_18].flags)) {




   FUNC_11(
    "md/raid:%s: read error corrected (%lu sectors at %llu on %s)\n",
    FUNC_9(VAR_16->mddev), VAR_13,
    (unsigned long long)VAR_21,
    FUNC_5(VAR_20->bdev, VAR_19));
   FUNC_1(VAR_13, &VAR_20->corrected_errors);
   FUNC_7(VAR_8, &VAR_15->dev[VAR_18].flags);
   FUNC_7(VAR_7, &VAR_15->dev[VAR_18].flags);
  } else if (FUNC_18(VAR_9, &VAR_15->dev[VAR_18].flags))
   FUNC_7(VAR_9, &VAR_15->dev[VAR_18].flags);

  if (FUNC_18(VAR_4, &VAR_15->dev[VAR_18].flags))




   FUNC_17(VAR_6, &VAR_15->dev[VAR_18].flags);

  if (FUNC_3(&VAR_20->read_errors))
   FUNC_4(&VAR_20->read_errors, 0);
 } else {
  const char *VAR_22 = FUNC_5(VAR_20->bdev, VAR_19);
  int VAR_23 = 0;
  int VAR_24 = 0;

  FUNC_7(VAR_11, &VAR_15->dev[VAR_18].flags);
  if (!(VAR_14->bi_status == VAR_1))
   FUNC_2(&VAR_20->read_errors);
  if (FUNC_18(VAR_10, &VAR_15->dev[VAR_18].flags))
   FUNC_13(
    "md/raid:%s: read error on replacement device (sector %llu on %s).\n",
    FUNC_9(VAR_16->mddev),
    (unsigned long long)VAR_21,
    VAR_22);
  else if (VAR_16->mddev->degraded >= VAR_16->max_degraded) {
   VAR_24 = 1;
   FUNC_13(
    "md/raid:%s: read error not correctable (sector %llu on %s).\n",
    FUNC_9(VAR_16->mddev),
    (unsigned long long)VAR_21,
    VAR_22);
  } else if (FUNC_18(VAR_7, &VAR_15->dev[VAR_18].flags)) {

   VAR_24 = 1;
   FUNC_13(
    "md/raid:%s: read error NOT corrected!! (sector %llu on %s).\n",
    FUNC_9(VAR_16->mddev),
    (unsigned long long)VAR_21,
    VAR_22);
  } else if (FUNC_3(&VAR_20->read_errors)
    > VAR_16->max_nr_stripes) {
   if (!FUNC_18(VAR_2, &VAR_20->flags)) {
    FUNC_12("md/raid:%s: %d read_errors > %d stripes\n",
        FUNC_9(VAR_16->mddev),
        FUNC_3(&VAR_20->read_errors),
        VAR_16->max_nr_stripes);
    FUNC_12("md/raid:%s: Too many read errors, failing device %s.\n",
        FUNC_9(VAR_16->mddev), VAR_22);
   }
  } else
   VAR_23 = 1;
  if (VAR_24 && FUNC_18(VAR_3, &VAR_20->flags)
      && !FUNC_18(VAR_9, &VAR_15->dev[VAR_18].flags))
   VAR_23 = 1;
  if (VAR_23)
   if (VAR_15->qd_idx >= 0 && VAR_15->pd_idx == VAR_18)
    FUNC_17(VAR_8, &VAR_15->dev[VAR_18].flags);
   else if (FUNC_18(VAR_9, &VAR_15->dev[VAR_18].flags)) {
    FUNC_17(VAR_8, &VAR_15->dev[VAR_18].flags);
    FUNC_7(VAR_9, &VAR_15->dev[VAR_18].flags);
   } else
    FUNC_17(VAR_9, &VAR_15->dev[VAR_18].flags);
  else {
   FUNC_7(VAR_8, &VAR_15->dev[VAR_18].flags);
   FUNC_7(VAR_7, &VAR_15->dev[VAR_18].flags);
   if (!(VAR_24
         && FUNC_18(VAR_3, &VAR_20->flags)
         && FUNC_16(
          VAR_20, VAR_15->sector, VAR_13, 0)))
    FUNC_8(VAR_16->mddev, VAR_20);
  }
 }
 FUNC_15(VAR_20, VAR_16->mddev);
 FUNC_6(VAR_14);
 FUNC_7(VAR_5, &VAR_15->dev[VAR_18].flags);
 FUNC_17(VAR_12, &VAR_15->state);
 FUNC_14(VAR_15);
}
