
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_psb_private {int apm_base; int apm_reg; int ospm_base; int display_power; int suspended; TYPE_1__* ops; scalar_t__ display_count; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct TYPE_2__ {int (* init_pm ) (struct drm_device*) ;} ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_device*) ;

void FUNC_3(struct drm_device *VAR_2)
{
 struct drm_psb_private *VAR_3 = VAR_2->dev_private;


 VAR_3->apm_base = VAR_3->apm_reg & 0xffff;
 VAR_3->ospm_base &= 0xffff;

 VAR_3->display_power = 1;
 VAR_3->display_count = 0;
 VAR_3->suspended = 0;
 FUNC_1(&VAR_0);
 FUNC_0(&VAR_1);

 if (VAR_3->ops->init_pm)
  VAR_3->ops->init_pm(VAR_2);
}
