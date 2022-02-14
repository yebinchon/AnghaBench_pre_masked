
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_psb_private {int vdc_irq_mask; int irqmask_lock; TYPE_2__* ops; } ;
struct drm_device {TYPE_1__* vblank; struct drm_psb_private* dev_private; } ;
struct TYPE_4__ {int (* hotplug_enable ) (struct drm_device*,int) ;} ;
struct TYPE_3__ {scalar_t__ enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct drm_psb_private*,int,int ) ;
 int FUNC_4 (struct drm_psb_private*,int,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct drm_device*,int) ;

int FUNC_8(struct drm_device *VAR_7)
{
 struct drm_psb_private *VAR_8 = VAR_7->dev_private;
 unsigned long VAR_9;

 FUNC_5(&VAR_8->irqmask_lock, VAR_9);


 FUNC_1(VAR_5, VAR_2);
 FUNC_1(VAR_6, VAR_1);
 FUNC_0(VAR_1);


 FUNC_2(VAR_8->vdc_irq_mask, VAR_4);
 FUNC_2(0xFFFFFFFF, VAR_3);

 if (VAR_7->vblank[0].enabled)
  FUNC_4(VAR_8, 0, VAR_0);
 else
  FUNC_3(VAR_8, 0, VAR_0);

 if (VAR_7->vblank[1].enabled)
  FUNC_4(VAR_8, 1, VAR_0);
 else
  FUNC_3(VAR_8, 1, VAR_0);

 if (VAR_7->vblank[2].enabled)
  FUNC_4(VAR_8, 2, VAR_0);
 else
  FUNC_3(VAR_8, 2, VAR_0);

 if (VAR_8->ops->hotplug_enable)
  VAR_8->ops->hotplug_enable(VAR_7, 1);

 FUNC_6(&VAR_8->irqmask_lock, VAR_9);
 return 0;
}
