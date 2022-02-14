
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int backing_dev_info; } ;
struct r1conf {scalar_t__ pending_count; int raid_disks; TYPE_1__* mirrors; } ;
struct mddev {struct r1conf* private; } ;
struct md_rdev {int bdev; int flags; } ;
struct TYPE_2__ {int rdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct request_queue* FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_2 ;
 struct md_rdev* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct mddev *VAR_3, int VAR_4)
{
 struct r1conf *VAR_5 = VAR_3->private;
 int VAR_6, VAR_7 = 0;

 if ((VAR_4 & (1 << VAR_1)) &&
     VAR_5->pending_count >= VAR_2)
  return 1;

 FUNC_4();
 for (VAR_6 = 0; VAR_6 < VAR_5->raid_disks * 2; VAR_6++) {
  struct md_rdev *VAR_8 = FUNC_3(VAR_5->mirrors[VAR_6].rdev);
  if (VAR_8 && !FUNC_6(VAR_0, &VAR_8->flags)) {
   struct request_queue *VAR_9 = FUNC_1(VAR_8->bdev);

   FUNC_0(!VAR_9);




   if ((VAR_4 & (1 << VAR_1)) || 1)
    VAR_7 |= FUNC_2(VAR_9->backing_dev_info, VAR_4);
   else
    VAR_7 &= FUNC_2(VAR_9->backing_dev_info, VAR_4);
  }
 }
 FUNC_5();
 return VAR_7;
}
