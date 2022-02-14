
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct raid10_info {TYPE_3__* rdev; TYPE_2__* replacement; } ;
struct TYPE_4__ {int raid_disks; } ;
struct r10conf {int device_lock; struct raid10_info* mirrors; TYPE_1__ geo; } ;
struct mddev {int degraded; struct r10conf* private; } ;
struct TYPE_6__ {scalar_t__ recovery_offset; int sysfs_state; int flags; } ;
struct TYPE_5__ {scalar_t__ recovery_offset; int sysfs_state; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct r10conf*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct mddev *VAR_3)
{
 int VAR_4;
 struct r10conf *VAR_5 = VAR_3->private;
 struct raid10_info *VAR_6;
 int VAR_7 = 0;
 unsigned long VAR_8;





 for (VAR_4 = 0; VAR_4 < VAR_5->geo.raid_disks; VAR_4++) {
  VAR_6 = VAR_5->mirrors + VAR_4;
  if (VAR_6->replacement
      && VAR_6->replacement->recovery_offset == VAR_2
      && !FUNC_7(VAR_0, &VAR_6->replacement->flags)
      && !FUNC_6(VAR_1, &VAR_6->replacement->flags)) {

   if (!VAR_6->rdev
       || !FUNC_5(VAR_1, &VAR_6->rdev->flags))
    VAR_7++;
   if (VAR_6->rdev) {




    FUNC_1(VAR_0, &VAR_6->rdev->flags);
    FUNC_4(
     VAR_6->rdev->sysfs_state);
   }
   FUNC_4(VAR_6->replacement->sysfs_state);
  } else if (VAR_6->rdev
      && VAR_6->rdev->recovery_offset == VAR_2
      && !FUNC_7(VAR_0, &VAR_6->rdev->flags)
      && !FUNC_6(VAR_1, &VAR_6->rdev->flags)) {
   VAR_7++;
   FUNC_4(VAR_6->rdev->sysfs_state);
  }
 }
 FUNC_2(&VAR_5->device_lock, VAR_8);
 VAR_3->degraded -= VAR_7;
 FUNC_3(&VAR_5->device_lock, VAR_8);

 FUNC_0(VAR_5);
 return VAR_7;
}
