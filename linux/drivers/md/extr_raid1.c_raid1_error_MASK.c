
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r1conf {int raid_disks; int device_lock; int recovery_disabled; } ;
struct mddev {int degraded; int sb_flags; int recovery; int recovery_disabled; int fail_last_dev; struct r1conf* private; } ;
struct md_rdev {int bdev; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mddev*) ;
 int FUNC_3 (char*,int ,int ,int ,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct mddev *VAR_7, struct md_rdev *VAR_8)
{
 char VAR_9[VAR_0];
 struct r1conf *VAR_10 = VAR_7->private;
 unsigned long VAR_11;







 FUNC_6(&VAR_10->device_lock, VAR_11);
 if (FUNC_9(VAR_3, &VAR_8->flags) && !VAR_7->fail_last_dev
     && (VAR_10->raid_disks - VAR_7->degraded) == 1) {






  VAR_10->recovery_disabled = VAR_7->recovery_disabled;
  FUNC_7(&VAR_10->device_lock, VAR_11);
  return;
 }
 FUNC_4(VAR_1, &VAR_8->flags);
 if (FUNC_8(VAR_3, &VAR_8->flags))
  VAR_7->degraded++;
 FUNC_4(VAR_2, &VAR_8->flags);
 FUNC_7(&VAR_10->device_lock, VAR_11);



 FUNC_4(VAR_4, &VAR_7->recovery);
 FUNC_5(&VAR_7->sb_flags, 0,
        FUNC_0(VAR_5) | FUNC_0(VAR_6));
 FUNC_3("md/raid1:%s: Disk failure on %s, disabling device.\n"
  "md/raid1:%s: Operation continuing on %d devices.\n",
  FUNC_2(VAR_7), FUNC_1(VAR_8->bdev, VAR_9),
  FUNC_2(VAR_7), VAR_10->raid_disks - VAR_7->degraded);
}
