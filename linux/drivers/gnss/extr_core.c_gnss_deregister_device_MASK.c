
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gnss_device {int disconnected; int dev; int cdev; int rwsem; TYPE_1__* ops; int read_queue; scalar_t__ count; } ;
struct TYPE_2__ {int (* close ) (struct gnss_device*) ;} ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct gnss_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct gnss_device *VAR_0)
{
 FUNC_1(&VAR_0->rwsem);
 VAR_0->disconnected = 1;
 if (VAR_0->count) {
  FUNC_4(&VAR_0->read_queue);
  VAR_0->ops->close(VAR_0);
 }
 FUNC_3(&VAR_0->rwsem);

 FUNC_0(&VAR_0->cdev, &VAR_0->dev);
}
