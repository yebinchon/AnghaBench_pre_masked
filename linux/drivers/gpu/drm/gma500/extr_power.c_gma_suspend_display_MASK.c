
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_psb_private {int display_power; TYPE_1__* ops; scalar_t__ suspended; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct TYPE_2__ {int (* power_down ) (struct drm_device*) ;int (* save_regs ) (struct drm_device*) ;} ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_0)
{
 struct drm_psb_private *VAR_1 = VAR_0->dev_private;

 if (VAR_1->suspended)
  return;
 VAR_1->ops->save_regs(VAR_0);
 VAR_1->ops->power_down(VAR_0);
 VAR_1->display_power = 0;
}
