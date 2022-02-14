
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int raid_disks; } ;
struct raid_set {TYPE_2__* dev; TYPE_1__ md; } ;
struct md_rdev {scalar_t__ sectors; scalar_t__ bdev; int flags; } ;
typedef scalar_t__ sector_t ;
struct TYPE_4__ {struct md_rdev rdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static sector_t FUNC_1(struct raid_set *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->md.raid_disks; VAR_2++) {
  struct md_rdev *VAR_3 = &VAR_1->dev[VAR_2].rdev;

  if (!FUNC_0(VAR_0, &VAR_3->flags) &&
      VAR_3->bdev && VAR_3->sectors)
   return VAR_3->sectors;
 }

 return 0;
}
