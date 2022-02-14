
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rtl2832_sdr_dev {int v4l2_dev; int vb_queue_lock; int v4l2_lock; int vdev; int * udev; } ;
struct TYPE_6__ {TYPE_2__* parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_4__ {int owner; } ;


 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct rtl2832_sdr_dev* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct rtl2832_sdr_dev *VAR_1 = FUNC_4(VAR_0);

 FUNC_0(&VAR_0->dev, "\n");

 FUNC_2(&VAR_1->vb_queue_lock);
 FUNC_2(&VAR_1->v4l2_lock);

 VAR_1->udev = ((void*)0);
 FUNC_5(&VAR_1->v4l2_dev);
 FUNC_7(&VAR_1->vdev);
 FUNC_3(&VAR_1->v4l2_lock);
 FUNC_3(&VAR_1->vb_queue_lock);
 FUNC_6(&VAR_1->v4l2_dev);
 FUNC_1(VAR_0->dev.parent->driver->owner);

 return 0;
}
