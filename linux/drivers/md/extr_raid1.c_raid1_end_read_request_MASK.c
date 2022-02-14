
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r1conf {int raid_disks; int mddev; int device_lock; TYPE_1__* mirrors; } ;
struct r1bio {size_t read_disk; int state; scalar_t__ sector; TYPE_2__* mddev; } ;
struct md_rdev {int bdev; int flags; } ;
struct bio {struct r1bio* bi_private; int bi_status; } ;
struct TYPE_4__ {int degraded; struct r1conf* private; } ;
struct TYPE_3__ {struct md_rdev* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ,unsigned long long) ;
 int FUNC_3 (struct r1bio*) ;
 int FUNC_4 (struct md_rdev*,int ) ;
 int FUNC_5 (struct r1bio*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (size_t,struct r1bio*) ;

__attribute__((used)) static void FUNC_11(struct bio *VAR_6)
{
 int VAR_7 = !VAR_6->bi_status;
 struct r1bio *VAR_8 = VAR_6->bi_private;
 struct r1conf *VAR_9 = VAR_8->mddev->private;
 struct md_rdev *VAR_10 = VAR_9->mirrors[VAR_8->read_disk].rdev;




 FUNC_10(VAR_8->read_disk, VAR_8);

 if (VAR_7)
  FUNC_6(VAR_5, &VAR_8->state);
 else if (FUNC_9(VAR_1, &VAR_10->flags) &&
   FUNC_9(VAR_3, &VAR_8->state))


  ;
 else {




  unsigned long VAR_11;
  FUNC_7(&VAR_9->device_lock, VAR_11);
  if (VAR_8->mddev->degraded == VAR_9->raid_disks ||
      (VAR_8->mddev->degraded == VAR_9->raid_disks-1 &&
       FUNC_9(VAR_2, &VAR_10->flags)))
   VAR_7 = 1;
  FUNC_8(&VAR_9->device_lock, VAR_11);
 }

 if (VAR_7) {
  FUNC_3(VAR_8);
  FUNC_4(VAR_10, VAR_9->mddev);
 } else {



  char VAR_12[VAR_0];
  FUNC_2("md/raid1:%s: %s: rescheduling sector %llu\n",
       FUNC_1(VAR_9->mddev),
       FUNC_0(VAR_10->bdev, VAR_12),
       (unsigned long long)VAR_8->sector);
  FUNC_6(VAR_4, &VAR_8->state);
  FUNC_5(VAR_8);

 }
}
