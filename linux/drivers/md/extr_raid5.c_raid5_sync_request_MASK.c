
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_head {int state; } ;
struct r5conf {int quiesce; scalar_t__ max_degraded; int raid_disks; TYPE_1__* disks; scalar_t__ fullsync; int wait_for_overlap; } ;
struct mddev {scalar_t__ dev_sectors; scalar_t__ curr_resync; scalar_t__ degraded; int bitmap; int recovery; struct r5conf* private; } ;
struct md_rdev {int flags; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {int rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct md_rdev* FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct r5conf*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__*,int) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__*,int) ;
 struct stripe_head* FUNC_6 (struct r5conf*,scalar_t__,int ,int,int ) ;
 int FUNC_7 (struct stripe_head*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (struct mddev*,scalar_t__,int*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,int) ;

__attribute__((used)) static inline sector_t FUNC_15(struct mddev *VAR_7, sector_t VAR_8,
       int *VAR_9)
{
 struct r5conf *VAR_10 = VAR_7->private;
 struct stripe_head *VAR_11;
 sector_t VAR_12 = VAR_7->dev_sectors;
 sector_t VAR_13;
 int VAR_14 = 0;
 int VAR_15;

 if (VAR_8 >= VAR_12) {


  if (FUNC_13(VAR_2, &VAR_7->recovery)) {
   FUNC_1(VAR_10);
   return 0;
  }

  if (VAR_7->curr_resync < VAR_12)
   FUNC_4(VAR_7->bitmap, VAR_7->curr_resync,
        &VAR_13, 1);
  else
   VAR_10->fullsync = 0;
  FUNC_2(VAR_7->bitmap);

  return 0;
 }


 FUNC_14(VAR_10->wait_for_overlap, VAR_10->quiesce != 2);

 if (FUNC_13(VAR_2, &VAR_7->recovery))
  return FUNC_10(VAR_7, VAR_8, VAR_9);
 if (VAR_7->degraded >= VAR_10->max_degraded &&
     FUNC_13(VAR_3, &VAR_7->recovery)) {
  sector_t VAR_16 = VAR_7->dev_sectors - VAR_8;
  *VAR_9 = 1;
  return VAR_16;
 }
 if (!FUNC_13(VAR_1, &VAR_7->recovery) &&
     !VAR_10->fullsync &&
     !FUNC_5(VAR_7->bitmap, VAR_8, &VAR_13, 1) &&
     VAR_13 >= VAR_5) {

  VAR_13 /= VAR_5;
  *VAR_9 = 1;
  return VAR_13 * VAR_5;
 }

 FUNC_3(VAR_7->bitmap, VAR_8, 0);

 VAR_11 = FUNC_6(VAR_10, VAR_8, 0, 1, 0);
 if (VAR_11 == ((void*)0)) {
  VAR_11 = FUNC_6(VAR_10, VAR_8, 0, 0, 0);



  FUNC_11(1);
 }




 FUNC_8();
 for (VAR_15 = 0; VAR_15 < VAR_10->raid_disks; VAR_15++) {
  struct md_rdev *VAR_17 = FUNC_0(VAR_10->disks[VAR_15].rdev);

  if (VAR_17 == ((void*)0) || FUNC_13(VAR_0, &VAR_17->flags))
   VAR_14 = 1;
 }
 FUNC_9();

 FUNC_5(VAR_7->bitmap, VAR_8, &VAR_13, VAR_14);

 FUNC_12(VAR_6, &VAR_11->state);
 FUNC_12(VAR_4, &VAR_11->state);

 FUNC_7(VAR_11);

 return VAR_5;
}
