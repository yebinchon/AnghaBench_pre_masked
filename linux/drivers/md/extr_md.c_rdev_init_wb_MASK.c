
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct md_rdev {int flags; int wb_io_wait; int wb_list; int wb_list_lock; TYPE_2__* bdev; } ;
struct TYPE_4__ {TYPE_1__* bd_queue; } ;
struct TYPE_3__ {int nr_hw_queues; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct md_rdev *VAR_1)
{
 if (VAR_1->bdev->bd_queue->nr_hw_queues == 1)
  return 0;

 FUNC_3(&VAR_1->wb_list_lock);
 FUNC_0(&VAR_1->wb_list);
 FUNC_1(&VAR_1->wb_io_wait);
 FUNC_2(VAR_0, &VAR_1->flags);

 return 1;
}
