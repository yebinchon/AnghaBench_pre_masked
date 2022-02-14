
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct mpconf {int raid_disks; TYPE_1__* multipaths; } ;
struct mddev {scalar_t__ degraded; struct mpconf* private; } ;
struct md_rdev {int flags; } ;
struct TYPE_2__ {int rdev; } ;


 int VAR_0 ;
 struct md_rdev* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct seq_file*,char*,...) ;
 int FUNC_4 (struct seq_file*,char) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct seq_file *VAR_1, struct mddev *VAR_2)
{
 struct mpconf *VAR_3 = VAR_2->private;
 int VAR_4;

 FUNC_3 (VAR_1, " [%d/%d] [", VAR_3->raid_disks,
      VAR_3->raid_disks - VAR_2->degraded);
 FUNC_1();
 for (VAR_4 = 0; VAR_4 < VAR_3->raid_disks; VAR_4++) {
  struct md_rdev *VAR_5 = FUNC_0(VAR_3->multipaths[VAR_4].rdev);
  FUNC_3 (VAR_1, "%s", VAR_5 && FUNC_5(VAR_0, &VAR_5->flags) ? "U" : "_");
 }
 FUNC_2();
 FUNC_4(VAR_1, ']');
}
