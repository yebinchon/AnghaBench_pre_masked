
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r5conf {int raid_disks; int chunk_sectors; int algorithm; TYPE_1__* disks; int device_lock; } ;
struct mddev {scalar_t__ delta_disks; scalar_t__ reshape_backwards; int reshape_position; int chunk_sectors; int layout; int degraded; int recovery; struct r5conf* private; } ;
struct md_rdev {int flags; } ;
struct TYPE_2__ {struct md_rdev* replacement; struct md_rdev* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct r5conf*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct mddev *VAR_3)
{
 struct r5conf *VAR_4 = VAR_3->private;

 if (!FUNC_4(VAR_1, &VAR_3->recovery)) {

  if (VAR_3->delta_disks <= 0) {
   int VAR_5;
   FUNC_2(&VAR_4->device_lock);
   VAR_3->degraded = FUNC_1(VAR_4);
   FUNC_3(&VAR_4->device_lock);
   for (VAR_5 = VAR_4->raid_disks ;
        VAR_5 < VAR_4->raid_disks - VAR_3->delta_disks;
        VAR_5++) {
    struct md_rdev *VAR_6 = VAR_4->disks[VAR_5].rdev;
    if (VAR_6)
     FUNC_0(VAR_0, &VAR_6->flags);
    VAR_6 = VAR_4->disks[VAR_5].replacement;
    if (VAR_6)
     FUNC_0(VAR_0, &VAR_6->flags);
   }
  }
  VAR_3->layout = VAR_4->algorithm;
  VAR_3->chunk_sectors = VAR_4->chunk_sectors;
  VAR_3->reshape_position = VAR_2;
  VAR_3->delta_disks = 0;
  VAR_3->reshape_backwards = 0;
 }
}
