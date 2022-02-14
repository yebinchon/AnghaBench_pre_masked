
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r5conf {int previous_raid_disks; int raid_disks; TYPE_1__* disks; } ;
struct md_rdev {int flags; } ;
struct TYPE_2__ {int replacement; int rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct md_rdev* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int *) ;

int FUNC_4(struct r5conf *VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5;

 FUNC_1();
 VAR_3 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_2->previous_raid_disks; VAR_5++) {
  struct md_rdev *VAR_6 = FUNC_0(VAR_2->disks[VAR_5].rdev);
  if (VAR_6 && FUNC_3(VAR_0, &VAR_6->flags))
   VAR_6 = FUNC_0(VAR_2->disks[VAR_5].replacement);
  if (!VAR_6 || FUNC_3(VAR_0, &VAR_6->flags))
   VAR_3++;
  else if (FUNC_3(VAR_1, &VAR_6->flags))
   ;
  else
   if (VAR_2->raid_disks >= VAR_2->previous_raid_disks)
    VAR_3++;
 }
 FUNC_2();
 if (VAR_2->raid_disks == VAR_2->previous_raid_disks)
  return VAR_3;
 FUNC_1();
 VAR_4 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_2->raid_disks; VAR_5++) {
  struct md_rdev *VAR_7 = FUNC_0(VAR_2->disks[VAR_5].rdev);
  if (VAR_7 && FUNC_3(VAR_0, &VAR_7->flags))
   VAR_7 = FUNC_0(VAR_2->disks[VAR_5].replacement);
  if (!VAR_7 || FUNC_3(VAR_0, &VAR_7->flags))
   VAR_4++;
  else if (FUNC_3(VAR_1, &VAR_7->flags))
   ;
  else





   if (VAR_2->raid_disks <= VAR_2->previous_raid_disks)
    VAR_4++;
 }
 FUNC_2();
 if (VAR_4 > VAR_3)
  return VAR_4;
 return VAR_3;
}
