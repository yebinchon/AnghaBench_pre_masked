
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc4_dev {scalar_t__ power_refcount; int power_lock; TYPE_2__* v3d; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct vc4_dev *VAR_0)
{
 FUNC_0(&VAR_0->power_lock);
 if (--VAR_0->power_refcount == 0) {
  FUNC_2(&VAR_0->v3d->pdev->dev);
  FUNC_3(&VAR_0->v3d->pdev->dev);
 }
 FUNC_1(&VAR_0->power_lock);
}
