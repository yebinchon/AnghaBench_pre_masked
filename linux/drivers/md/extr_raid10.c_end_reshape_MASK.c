
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int raid_disks; int near_copies; } ;
struct r10conf {scalar_t__ fullsync; TYPE_4__* mddev; TYPE_1__ geo; int device_lock; void* reshape_safe; void* reshape_progress; TYPE_1__ prev; } ;
struct TYPE_8__ {int chunk_sectors; TYPE_3__* queue; int recovery; } ;
struct TYPE_7__ {TYPE_2__* backing_dev_info; } ;
struct TYPE_6__ {int ra_pages; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct r10conf *VAR_3)
{
 if (FUNC_4(VAR_0, &VAR_3->mddev->recovery))
  return;

 FUNC_2(&VAR_3->device_lock);
 VAR_3->prev = VAR_3->geo;
 FUNC_0(VAR_3->mddev);
 FUNC_1();
 VAR_3->reshape_progress = VAR_1;
 VAR_3->reshape_safe = VAR_1;
 FUNC_3(&VAR_3->device_lock);




 if (VAR_3->mddev->queue) {
  int VAR_4 = VAR_3->geo.raid_disks *
   ((VAR_3->mddev->chunk_sectors << 9) / VAR_2);
  VAR_4 /= VAR_3->geo.near_copies;
  if (VAR_3->mddev->queue->backing_dev_info->ra_pages < 2 * VAR_4)
   VAR_3->mddev->queue->backing_dev_info->ra_pages = 2 * VAR_4;
 }
 VAR_3->fullsync = 0;
}
