
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_drm_private {int dispc; TYPE_1__* dispc_ops; } ;
struct drm_device {int irq_enabled; struct omap_drm_private* dev_private; } ;
struct TYPE_2__ {int (* free_irq ) (int ,struct drm_device*) ;} ;


 int FUNC_0 (int ,struct drm_device*) ;

void FUNC_1(struct drm_device *VAR_0)
{
 struct omap_drm_private *VAR_1 = VAR_0->dev_private;

 if (!VAR_0->irq_enabled)
  return;

 VAR_0->irq_enabled = 0;

 VAR_1->dispc_ops->free_irq(VAR_1->dispc, VAR_0);
}
