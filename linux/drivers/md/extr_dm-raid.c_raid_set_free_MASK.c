
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dev; int rdev; } ;
struct raid_set {int raid_disks; TYPE_2__* dev; int ti; TYPE_1__ journal_dev; } ;
struct TYPE_4__ {scalar_t__ data_dev; int rdev; scalar_t__ meta_dev; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct raid_set*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct raid_set *VAR_0)
{
 int VAR_1;

 if (VAR_0->journal_dev.dev) {
  FUNC_2(&VAR_0->journal_dev.rdev);
  FUNC_0(VAR_0->ti, VAR_0->journal_dev.dev);
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->raid_disks; VAR_1++) {
  if (VAR_0->dev[VAR_1].meta_dev)
   FUNC_0(VAR_0->ti, VAR_0->dev[VAR_1].meta_dev);
  FUNC_2(&VAR_0->dev[VAR_1].rdev);
  if (VAR_0->dev[VAR_1].data_dev)
   FUNC_0(VAR_0->ti, VAR_0->dev[VAR_1].data_dev);
 }

 FUNC_1(VAR_0);
}
