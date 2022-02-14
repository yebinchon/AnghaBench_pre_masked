
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int backing_dev_info; } ;
struct mpconf {TYPE_1__* multipaths; } ;
struct mddev {int raid_disks; struct mpconf* private; } ;
struct md_rdev {int bdev; int flags; } ;
struct TYPE_2__ {int rdev; } ;


 int VAR_0 ;
 struct request_queue* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct md_rdev* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct mddev *VAR_1, int VAR_2)
{
 struct mpconf *VAR_3 = VAR_1->private;
 int VAR_4, VAR_5 = 0;

 FUNC_3();
 for (VAR_4 = 0; VAR_4 < VAR_1->raid_disks ; VAR_4++) {
  struct md_rdev *VAR_6 = FUNC_2(VAR_3->multipaths[VAR_4].rdev);
  if (VAR_6 && !FUNC_5(VAR_0, &VAR_6->flags)) {
   struct request_queue *VAR_7 = FUNC_0(VAR_6->bdev);

   VAR_5 |= FUNC_1(VAR_7->backing_dev_info, VAR_2);



   break;
  }
 }
 FUNC_4();
 return VAR_5;
}
