
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* agp; int pdev; } ;
struct TYPE_2__ {int acquired; int bridge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct drm_device *VAR_2)
{
 if (!VAR_2->agp)
  return -VAR_1;
 if (VAR_2->agp->acquired)
  return -VAR_0;
 VAR_2->agp->bridge = FUNC_0(VAR_2->pdev);
 if (!VAR_2->agp->bridge)
  return -VAR_1;
 VAR_2->agp->acquired = 1;
 return 0;
}
