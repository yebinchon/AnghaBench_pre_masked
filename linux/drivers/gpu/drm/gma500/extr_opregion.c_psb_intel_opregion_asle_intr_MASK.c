
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int asle_work; scalar_t__ asle; } ;
struct drm_psb_private {TYPE_1__ opregion; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct drm_device *VAR_0)
{
 struct drm_psb_private *VAR_1 = VAR_0->dev_private;

 if (VAR_1->opregion.asle)
  FUNC_0(&VAR_1->opregion.asle_work);
}
