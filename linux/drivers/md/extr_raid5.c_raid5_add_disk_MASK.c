
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r5conf {int raid_disks; scalar_t__ recovery_disabled; int fullsync; struct disk_info* disks; scalar_t__ log; } ;
struct mddev {scalar_t__ recovery_disabled; struct r5conf* private; } ;
struct md_rdev {int raid_disk; int saved_raid_disk; int flags; } ;
struct disk_info {TYPE_1__* replacement; TYPE_1__* rdev; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct r5conf*) ;
 int FUNC_2 (struct r5conf*,struct md_rdev*,int) ;
 int FUNC_3 (struct r5conf*,struct md_rdev*,int) ;
 int FUNC_4 (struct r5conf*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_1__*,struct md_rdev*) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct mddev *VAR_7, struct md_rdev *VAR_8)
{
 struct r5conf *VAR_9 = VAR_7->private;
 int VAR_10, VAR_11 = -VAR_1;
 int VAR_12;
 struct disk_info *VAR_13;
 int VAR_14 = 0;
 int VAR_15 = VAR_9->raid_disks - 1;

 if (FUNC_8(VAR_4, &VAR_8->flags)) {
  if (VAR_9->log)
   return -VAR_0;

  VAR_8->raid_disk = 0;




  VAR_10 = FUNC_2(VAR_9, VAR_8, 0);
  if (VAR_10)
   return VAR_10;

  VAR_10 = FUNC_5(VAR_9->log);
  if (VAR_10)
   return VAR_10;

  return 0;
 }
 if (VAR_7->recovery_disabled == VAR_9->recovery_disabled)
  return -VAR_0;

 if (VAR_8->saved_raid_disk < 0 && FUNC_1(VAR_9))

  return -VAR_2;

 if (VAR_8->raid_disk >= 0)
  VAR_14 = VAR_15 = VAR_8->raid_disk;





 if (VAR_8->saved_raid_disk >= 0 &&
     VAR_8->saved_raid_disk >= VAR_14 &&
     VAR_9->disks[VAR_8->saved_raid_disk].rdev == ((void*)0))
  VAR_14 = VAR_8->saved_raid_disk;

 for (VAR_12 = VAR_14; VAR_12 <= VAR_15; VAR_12++) {
  VAR_13 = VAR_9->disks + VAR_12;
  if (VAR_13->rdev == ((void*)0)) {
   FUNC_0(VAR_3, &VAR_8->flags);
   VAR_8->raid_disk = VAR_12;
   if (VAR_8->saved_raid_disk != VAR_12)
    VAR_9->fullsync = 1;
   FUNC_6(VAR_13->rdev, VAR_8);

   VAR_11 = FUNC_3(VAR_9, VAR_8, 1);

   goto out;
  }
 }
 for (VAR_12 = VAR_14; VAR_12 <= VAR_15; VAR_12++) {
  VAR_13 = VAR_9->disks + VAR_12;
  if (FUNC_8(VAR_6, &VAR_13->rdev->flags) &&
      VAR_13->replacement == ((void*)0)) {
   FUNC_0(VAR_3, &VAR_8->flags);
   FUNC_7(VAR_5, &VAR_8->flags);
   VAR_8->raid_disk = VAR_12;
   VAR_11 = 0;
   VAR_9->fullsync = 1;
   FUNC_6(VAR_13->replacement, VAR_8);
   break;
  }
 }
out:
 FUNC_4(VAR_9);
 return VAR_11;
}
