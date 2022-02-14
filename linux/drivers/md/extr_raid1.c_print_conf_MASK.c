
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r1conf {int raid_disks; TYPE_1__* mirrors; TYPE_2__* mddev; } ;
struct md_rdev {int bdev; int flags; } ;
struct TYPE_4__ {scalar_t__ degraded; } ;
struct TYPE_3__ {int rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,...) ;
 struct md_rdev* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct r1conf *VAR_3)
{
 int VAR_4;

 FUNC_1("RAID1 conf printout:\n");
 if (!VAR_3) {
  FUNC_1("(!conf)\n");
  return;
 }
 FUNC_1(" --- wd:%d rd:%d\n", VAR_3->raid_disks - VAR_3->mddev->degraded,
   VAR_3->raid_disks);

 FUNC_3();
 for (VAR_4 = 0; VAR_4 < VAR_3->raid_disks; VAR_4++) {
  char VAR_5[VAR_0];
  struct md_rdev *VAR_6 = FUNC_2(VAR_3->mirrors[VAR_4].rdev);
  if (VAR_6)
   FUNC_1(" disk %d, wo:%d, o:%d, dev:%s\n",
     VAR_4, !FUNC_5(VAR_2, &VAR_6->flags),
     !FUNC_5(VAR_1, &VAR_6->flags),
     FUNC_0(VAR_6->bdev,VAR_5));
 }
 FUNC_4();
}
