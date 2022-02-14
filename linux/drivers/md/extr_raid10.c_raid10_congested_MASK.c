
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct request_queue {int backing_dev_info; } ;
struct TYPE_5__ {int raid_disks; } ;
struct TYPE_4__ {int raid_disks; } ;
struct r10conf {scalar_t__ pending_count; TYPE_3__* mirrors; TYPE_2__ prev; TYPE_1__ geo; } ;
struct mddev {struct r10conf* private; } ;
struct md_rdev {int bdev; int flags; } ;
struct TYPE_6__ {int rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct request_queue* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_2 ;
 struct md_rdev* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct mddev *VAR_3, int VAR_4)
{
 struct r10conf *VAR_5 = VAR_3->private;
 int VAR_6, VAR_7 = 0;

 if ((VAR_4 & (1 << VAR_1)) &&
     VAR_5->pending_count >= VAR_2)
  return 1;

 FUNC_3();
 for (VAR_6 = 0;
      (VAR_6 < VAR_5->geo.raid_disks || VAR_6 < VAR_5->prev.raid_disks)
       && VAR_7 == 0;
      VAR_6++) {
  struct md_rdev *VAR_8 = FUNC_2(VAR_5->mirrors[VAR_6].rdev);
  if (VAR_8 && !FUNC_5(VAR_0, &VAR_8->flags)) {
   struct request_queue *VAR_9 = FUNC_0(VAR_8->bdev);

   VAR_7 |= FUNC_1(VAR_9->backing_dev_info, VAR_4);
  }
 }
 FUNC_4();
 return VAR_7;
}
