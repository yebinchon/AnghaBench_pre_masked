
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct r5conf {int chunk_sectors; int raid_disks; TYPE_1__* disks; } ;
struct mddev {scalar_t__ degraded; int layout; int level; struct r5conf* private; } ;
struct md_rdev {int flags; } ;
struct TYPE_2__ {int rdev; } ;


 int VAR_0 ;
 struct md_rdev* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct seq_file*,char*,...) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct seq_file *VAR_1, struct mddev *VAR_2)
{
 struct r5conf *VAR_3 = VAR_2->private;
 int VAR_4;

 FUNC_3(VAR_1, " level %d, %dk chunk, algorithm %d", VAR_2->level,
  VAR_3->chunk_sectors / 2, VAR_2->layout);
 FUNC_3 (VAR_1, " [%d/%d] [", VAR_3->raid_disks, VAR_3->raid_disks - VAR_2->degraded);
 FUNC_1();
 for (VAR_4 = 0; VAR_4 < VAR_3->raid_disks; VAR_4++) {
  struct md_rdev *VAR_5 = FUNC_0(VAR_3->disks[VAR_4].rdev);
  FUNC_3 (VAR_1, "%s", VAR_5 && FUNC_4(VAR_0, &VAR_5->flags) ? "U" : "_");
 }
 FUNC_2();
 FUNC_3 (VAR_1, "]");
}
