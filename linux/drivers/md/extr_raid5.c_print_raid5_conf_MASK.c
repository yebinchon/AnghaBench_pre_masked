
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r5conf {int level; int raid_disks; struct disk_info* disks; TYPE_1__* mddev; } ;
struct disk_info {TYPE_2__* rdev; } ;
struct TYPE_4__ {int bdev; int flags; } ;
struct TYPE_3__ {scalar_t__ degraded; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3 (struct r5conf *VAR_2)
{
 int VAR_3;
 struct disk_info *VAR_4;

 FUNC_1("RAID conf printout:\n");
 if (!VAR_2) {
  FUNC_1("(conf==NULL)\n");
  return;
 }
 FUNC_1(" --- level:%d rd:%d wd:%d\n", VAR_2->level,
        VAR_2->raid_disks,
        VAR_2->raid_disks - VAR_2->mddev->degraded);

 for (VAR_3 = 0; VAR_3 < VAR_2->raid_disks; VAR_3++) {
  char VAR_5[VAR_0];
  VAR_4 = VAR_2->disks + VAR_3;
  if (VAR_4->rdev)
   FUNC_1(" disk %d, o:%d, dev:%s\n",
          VAR_3, !FUNC_2(VAR_1, &VAR_4->rdev->flags),
          FUNC_0(VAR_4->rdev->bdev, VAR_5));
 }
}
