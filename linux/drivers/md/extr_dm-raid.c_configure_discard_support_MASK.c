
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct raid_set {int raid_disks; TYPE_1__* dev; struct dm_target* ti; } ;
struct dm_target {int num_discard_bios; } ;
struct TYPE_4__ {int bdev; } ;
struct TYPE_3__ {TYPE_2__ rdev; } ;


 int FUNC_0 (char*) ;
 struct request_queue* FUNC_1 (int ) ;
 int FUNC_2 (struct request_queue*) ;
 int VAR_0 ;
 int FUNC_3 (struct raid_set*) ;

__attribute__((used)) static void FUNC_4(struct raid_set *VAR_1)
{
 int VAR_2;
 bool VAR_3;
 struct dm_target *VAR_4 = VAR_1->ti;




 VAR_3 = FUNC_3(VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_1->raid_disks; VAR_2++) {
  struct request_queue *VAR_5;

  if (!VAR_1->dev[VAR_2].rdev.bdev)
   continue;

  VAR_5 = FUNC_1(VAR_1->dev[VAR_2].rdev.bdev);
  if (!VAR_5 || !FUNC_2(VAR_5))
   return;

  if (VAR_3) {
   if (!VAR_0) {
    FUNC_0("raid456 discard support disabled due to discard_zeroes_data uncertainty.");
    FUNC_0("Set dm-raid.devices_handle_discard_safely=Y to override.");
    return;
   }
  }
 }

 VAR_4->num_discard_bios = 1;
}
