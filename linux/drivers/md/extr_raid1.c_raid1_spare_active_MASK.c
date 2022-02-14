
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r1conf {int raid_disks; int device_lock; TYPE_1__* mirrors; } ;
struct mddev {int degraded; struct r1conf* private; } ;
struct md_rdev {scalar_t__ recovery_offset; int sysfs_state; int flags; } ;
struct TYPE_2__ {struct md_rdev* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct r1conf*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct mddev *VAR_4)
{
 int VAR_5;
 struct r1conf *VAR_6 = VAR_4->private;
 int VAR_7 = 0;
 unsigned long VAR_8;
 FUNC_2(&VAR_6->device_lock, VAR_8);
 for (VAR_5 = 0; VAR_5 < VAR_6->raid_disks; VAR_5++) {
  struct md_rdev *VAR_9 = VAR_6->mirrors[VAR_5].rdev;
  struct md_rdev *VAR_10 = VAR_6->mirrors[VAR_6->raid_disks + VAR_5].rdev;
  if (VAR_10
      && !FUNC_7(VAR_0, &VAR_10->flags)
      && VAR_10->recovery_offset == VAR_3
      && !FUNC_7(VAR_1, &VAR_10->flags)
      && !FUNC_6(VAR_2, &VAR_10->flags)) {

   if (!VAR_9 ||
       !FUNC_5(VAR_2, &VAR_9->flags))
    VAR_7++;
   if (VAR_9) {




    FUNC_1(VAR_1, &VAR_9->flags);
    FUNC_4(
     VAR_9->sysfs_state);
   }
  }
  if (VAR_9
      && VAR_9->recovery_offset == VAR_3
      && !FUNC_7(VAR_1, &VAR_9->flags)
      && !FUNC_6(VAR_2, &VAR_9->flags)) {
   VAR_7++;
   FUNC_4(VAR_9->sysfs_state);
  }
 }
 VAR_4->degraded -= VAR_7;
 FUNC_3(&VAR_6->device_lock, VAR_8);

 FUNC_0(VAR_6);
 return VAR_7;
}
