
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpconf {int raid_disks; TYPE_1__* multipaths; } ;
struct md_rdev {int nr_pending; int flags; } ;
struct TYPE_2__ {int rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 struct md_rdev* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6 (struct mpconf *VAR_2)
{
 int VAR_3, VAR_4 = VAR_2->raid_disks;






 FUNC_3();
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  struct md_rdev *VAR_5 = FUNC_2(VAR_2->multipaths[VAR_3].rdev);
  if (VAR_5 && FUNC_5(VAR_1, &VAR_5->flags) &&
      !FUNC_5(VAR_0, &VAR_5->flags)) {
   FUNC_0(&VAR_5->nr_pending);
   FUNC_4();
   return VAR_3;
  }
 }
 FUNC_4();

 FUNC_1("multipath_map(): no more operational IO paths?\n");
 return (-1);
}
