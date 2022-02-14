
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc4_dev {int power_lock; int power_refcount; TYPE_2__* v3d; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct vc4_dev *VAR_0)
{
 FUNC_0(&VAR_0->power_lock);
 if (VAR_0->power_refcount++ == 0) {
  int VAR_1 = FUNC_2(&VAR_0->v3d->pdev->dev);

  if (VAR_1 < 0) {
   VAR_0->power_refcount--;
   FUNC_1(&VAR_0->power_lock);
   return VAR_1;
  }
 }
 FUNC_1(&VAR_0->power_lock);

 return 0;
}
