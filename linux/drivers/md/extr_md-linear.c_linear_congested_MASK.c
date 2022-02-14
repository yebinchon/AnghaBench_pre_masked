
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int backing_dev_info; } ;
struct mddev {int private; } ;
struct linear_conf {int raid_disks; TYPE_2__* disks; } ;
struct TYPE_4__ {TYPE_1__* rdev; } ;
struct TYPE_3__ {int bdev; } ;


 struct request_queue* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct linear_conf* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct mddev *VAR_0, int VAR_1)
{
 struct linear_conf *VAR_2;
 int VAR_3, VAR_4 = 0;

 FUNC_3();
 VAR_2 = FUNC_2(VAR_0->private);

 for (VAR_3 = 0; VAR_3 < VAR_2->raid_disks && !VAR_4 ; VAR_3++) {
  struct request_queue *VAR_5 = FUNC_0(VAR_2->disks[VAR_3].rdev->bdev);
  VAR_4 |= FUNC_1(VAR_5->backing_dev_info, VAR_1);
 }

 FUNC_4();
 return VAR_4;
}
