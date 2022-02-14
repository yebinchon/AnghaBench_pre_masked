
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct raid1_info {TYPE_1__* rdev; scalar_t__ head_position; } ;
struct r1conf {int raid_disks; scalar_t__ recovery_disabled; int fullsync; struct raid1_info* mirrors; } ;
struct mddev {scalar_t__ recovery_disabled; scalar_t__ queue; scalar_t__ gendisk; struct r1conf* private; } ;
struct md_rdev {int raid_disk; int saved_raid_disk; int data_offset; int bdev; int flags; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_5 (struct md_rdev*,struct mddev*) ;
 int FUNC_6 (struct r1conf*) ;
 int FUNC_7 (TYPE_1__*,struct md_rdev*) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct mddev *VAR_7, struct md_rdev *VAR_8)
{
 struct r1conf *VAR_9 = VAR_7->private;
 int VAR_10 = -VAR_1;
 int VAR_11 = 0;
 struct raid1_info *VAR_12;
 int VAR_13 = 0;
 int VAR_14 = VAR_9->raid_disks - 1;

 if (VAR_7->recovery_disabled == VAR_9->recovery_disabled)
  return -VAR_0;

 if (FUNC_5(VAR_8, VAR_7))
  return -VAR_2;

 if (VAR_8->raid_disk >= 0)
  VAR_13 = VAR_14 = VAR_8->raid_disk;





 if (VAR_8->saved_raid_disk >= 0 &&
     VAR_8->saved_raid_disk >= VAR_13 &&
     VAR_8->saved_raid_disk < VAR_9->raid_disks &&
     VAR_9->mirrors[VAR_8->saved_raid_disk].rdev == ((void*)0))
  VAR_13 = VAR_14 = VAR_8->saved_raid_disk;

 for (VAR_11 = VAR_13; VAR_11 <= VAR_14; VAR_11++) {
  VAR_12 = VAR_9->mirrors + VAR_11;
  if (!VAR_12->rdev) {
   if (VAR_7->gendisk)
    FUNC_4(VAR_7->gendisk, VAR_8->bdev,
        VAR_8->data_offset << 9);

   VAR_12->head_position = 0;
   VAR_8->raid_disk = VAR_11;
   VAR_10 = 0;



   if (VAR_8->saved_raid_disk < 0)
    VAR_9->fullsync = 1;
   FUNC_7(VAR_12->rdev, VAR_8);
   break;
  }
  if (FUNC_9(VAR_6, &VAR_12->rdev->flags) &&
      VAR_12[VAR_9->raid_disks].rdev == ((void*)0)) {

   FUNC_3(VAR_3, &VAR_8->flags);
   FUNC_8(VAR_5, &VAR_8->flags);
   VAR_8->raid_disk = VAR_11;
   VAR_10 = 0;
   VAR_9->fullsync = 1;
   FUNC_7(VAR_12[VAR_9->raid_disks].rdev, VAR_8);
   break;
  }
 }
 if (VAR_7->queue && FUNC_1(FUNC_0(VAR_8->bdev)))
  FUNC_2(VAR_4, VAR_7->queue);
 FUNC_6(VAR_9);
 return VAR_10;
}
