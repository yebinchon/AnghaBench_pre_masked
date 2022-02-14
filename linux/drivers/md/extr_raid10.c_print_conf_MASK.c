
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int raid_disks; } ;
struct r10conf {TYPE_3__* mirrors; TYPE_2__ geo; TYPE_1__* mddev; } ;
struct md_rdev {int bdev; int flags; } ;
struct TYPE_6__ {struct md_rdev* rdev; } ;
struct TYPE_4__ {scalar_t__ degraded; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct r10conf *VAR_3)
{
 int VAR_4;
 struct md_rdev *VAR_5;

 FUNC_1("RAID10 conf printout:\n");
 if (!VAR_3) {
  FUNC_1("(!conf)\n");
  return;
 }
 FUNC_1(" --- wd:%d rd:%d\n", VAR_3->geo.raid_disks - VAR_3->mddev->degraded,
   VAR_3->geo.raid_disks);



 for (VAR_4 = 0; VAR_4 < VAR_3->geo.raid_disks; VAR_4++) {
  char VAR_6[VAR_0];
  VAR_5 = VAR_3->mirrors[VAR_4].rdev;
  if (VAR_5)
   FUNC_1(" disk %d, wo:%d, o:%d, dev:%s\n",
     VAR_4, !FUNC_2(VAR_2, &VAR_5->flags),
     !FUNC_2(VAR_1, &VAR_5->flags),
     FUNC_0(VAR_5->bdev,VAR_6));
 }
}
