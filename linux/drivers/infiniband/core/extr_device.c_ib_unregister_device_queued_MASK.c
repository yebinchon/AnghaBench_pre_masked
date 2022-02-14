
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dealloc_driver; } ;
struct ib_device {int dev; int unregistration_work; TYPE_1__ ops; int refcount; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

void FUNC_5(struct ib_device *VAR_1)
{
 FUNC_0(!FUNC_4(&VAR_1->refcount));
 FUNC_0(!VAR_1->ops.dealloc_driver);
 FUNC_1(&VAR_1->dev);
 if (!FUNC_3(VAR_0, &VAR_1->unregistration_work))
  FUNC_2(&VAR_1->dev);
}
