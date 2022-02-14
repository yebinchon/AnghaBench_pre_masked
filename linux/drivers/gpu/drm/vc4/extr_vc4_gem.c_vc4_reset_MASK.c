
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc4_dev {int power_lock; TYPE_2__* v3d; scalar_t__ power_refcount; } ;
struct drm_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct vc4_dev* FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;

__attribute__((used)) static void
FUNC_8(struct drm_device *VAR_0)
{
 struct vc4_dev *VAR_1 = FUNC_5(VAR_0);

 FUNC_0("Resetting GPU.\n");

 FUNC_1(&VAR_1->power_lock);
 if (VAR_1->power_refcount) {



  FUNC_4(&VAR_1->v3d->pdev->dev);
  FUNC_3(&VAR_1->v3d->pdev->dev);
 }
 FUNC_2(&VAR_1->power_lock);

 FUNC_6(VAR_0);





 FUNC_7(VAR_0);
}
