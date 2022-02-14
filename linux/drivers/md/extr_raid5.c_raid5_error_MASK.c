
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {scalar_t__ max_degraded; scalar_t__ raid_disks; int device_lock; int recovery_disabled; } ;
struct mddev {scalar_t__ degraded; int sb_flags; int recovery; int recovery_disabled; struct r5conf* private; } ;
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
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct mddev*) ;
 int FUNC_4 (char*,int ,int ,int ,scalar_t__) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct mddev*,struct md_rdev*) ;
 scalar_t__ FUNC_7 (struct r5conf*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static void FUNC_13(struct mddev *VAR_7, struct md_rdev *VAR_8)
{
 char VAR_9[VAR_0];
 struct r5conf *VAR_10 = VAR_7->private;
 unsigned long VAR_11;
 FUNC_5("raid456: error called\n");

 FUNC_10(&VAR_10->device_lock, VAR_11);

 if (FUNC_12(VAR_3, &VAR_8->flags) &&
     VAR_7->degraded == VAR_10->max_degraded) {




  VAR_10->recovery_disabled = VAR_7->recovery_disabled;
  FUNC_11(&VAR_10->device_lock, VAR_11);
  return;
 }

 FUNC_8(VAR_2, &VAR_8->flags);
 FUNC_2(VAR_3, &VAR_8->flags);
 VAR_7->degraded = FUNC_7(VAR_10);
 FUNC_11(&VAR_10->device_lock, VAR_11);
 FUNC_8(VAR_4, &VAR_7->recovery);

 FUNC_8(VAR_1, &VAR_8->flags);
 FUNC_9(&VAR_7->sb_flags, 0,
        FUNC_0(VAR_5) | FUNC_0(VAR_6));
 FUNC_4("md/raid:%s: Disk failure on %s, disabling device.\n"
  "md/raid:%s: Operation continuing on %d devices.\n",
  FUNC_3(VAR_7),
  FUNC_1(VAR_8->bdev, VAR_9),
  FUNC_3(VAR_7),
  VAR_10->raid_disks - VAR_7->degraded);
 FUNC_6(VAR_7, VAR_8);
}
