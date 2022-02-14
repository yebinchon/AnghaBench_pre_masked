
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ raid_disks; } ;
struct r10conf {TYPE_1__ geo; int device_lock; } ;
struct mddev {scalar_t__ degraded; int sb_flags; int recovery; int fail_last_dev; struct r10conf* private; } ;
struct md_rdev {int bdev; int flags; int raid_disk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct r10conf*,int ) ;
 int FUNC_3 (struct mddev*) ;
 int FUNC_4 (char*,int ,int ,int ,scalar_t__) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static void FUNC_11(struct mddev *VAR_7, struct md_rdev *VAR_8)
{
 char VAR_9[VAR_0];
 struct r10conf *VAR_10 = VAR_7->private;
 unsigned long VAR_11;







 FUNC_7(&VAR_10->device_lock, VAR_11);
 if (FUNC_10(VAR_3, &VAR_8->flags) && !VAR_7->fail_last_dev
     && !FUNC_2(VAR_10, VAR_8->raid_disk)) {



  FUNC_8(&VAR_10->device_lock, VAR_11);
  return;
 }
 if (FUNC_9(VAR_3, &VAR_8->flags))
  VAR_7->degraded++;



 FUNC_5(VAR_4, &VAR_7->recovery);
 FUNC_5(VAR_1, &VAR_8->flags);
 FUNC_5(VAR_2, &VAR_8->flags);
 FUNC_6(&VAR_7->sb_flags, 0,
        FUNC_0(VAR_5) | FUNC_0(VAR_6));
 FUNC_8(&VAR_10->device_lock, VAR_11);
 FUNC_4("md/raid10:%s: Disk failure on %s, disabling device.\n"
  "md/raid10:%s: Operation continuing on %d devices.\n",
  FUNC_3(VAR_7), FUNC_1(VAR_8->bdev, VAR_9),
  FUNC_3(VAR_7), VAR_10->geo.raid_disks - VAR_7->degraded);
}
