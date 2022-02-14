
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* agp; } ;
struct TYPE_2__ {scalar_t__ acquired; int bridge; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct drm_device *VAR_1)
{
 if (!VAR_1->agp || !VAR_1->agp->acquired)
  return -VAR_0;
 FUNC_0(VAR_1->agp->bridge);
 VAR_1->agp->acquired = 0;
 return 0;
}
