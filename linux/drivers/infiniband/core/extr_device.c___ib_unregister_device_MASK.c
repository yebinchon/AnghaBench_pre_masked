
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kref; } ;
struct TYPE_6__ {TYPE_1__ kobj; } ;
struct TYPE_5__ {scalar_t__ dealloc_driver; } ;
struct ib_device {int unregistration_lock; TYPE_3__ dev; TYPE_2__ ops; int refcount; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct ib_device*) ;
 int FUNC_3 (struct ib_device*) ;
 int FUNC_4 (struct ib_device*) ;
 int FUNC_5 (struct ib_device*) ;
 int FUNC_6 (struct ib_device*) ;
 int FUNC_7 (struct ib_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct ib_device *VAR_0)
{







 FUNC_9(&VAR_0->unregistration_lock);
 if (!FUNC_11(&VAR_0->refcount))
  goto out;

 FUNC_2(VAR_0);


 FUNC_3(VAR_0);

 FUNC_7(VAR_0);
 FUNC_1(&VAR_0->dev);
 FUNC_6(VAR_0);
 FUNC_4(VAR_0);





 if (VAR_0->ops.dealloc_driver) {
  FUNC_0(FUNC_8(&VAR_0->dev.kobj.kref) <= 1);
  FUNC_5(VAR_0);
 }
out:
 FUNC_10(&VAR_0->unregistration_lock);
}
