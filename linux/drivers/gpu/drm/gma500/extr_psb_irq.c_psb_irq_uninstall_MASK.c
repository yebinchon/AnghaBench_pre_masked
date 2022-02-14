
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_psb_private {int vdc_irq_mask; int irqmask_lock; TYPE_1__* ops; } ;
struct drm_device {TYPE_2__* vblank; struct drm_psb_private* dev_private; } ;
struct TYPE_4__ {scalar_t__ enabled; } ;
struct TYPE_3__ {int (* hotplug_enable ) (struct drm_device*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct drm_psb_private*,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct drm_device*,int) ;
 int FUNC_6 () ;

void FUNC_7(struct drm_device *VAR_8)
{
 struct drm_psb_private *VAR_9 = VAR_8->dev_private;
 unsigned long VAR_10;

 FUNC_3(&VAR_9->irqmask_lock, VAR_10);

 if (VAR_9->ops->hotplug_enable)
  VAR_9->ops->hotplug_enable(VAR_8, 0);

 FUNC_1(0xFFFFFFFF, VAR_1);

 if (VAR_8->vblank[0].enabled)
  FUNC_2(VAR_9, 0, VAR_0);

 if (VAR_8->vblank[1].enabled)
  FUNC_2(VAR_9, 1, VAR_0);

 if (VAR_8->vblank[2].enabled)
  FUNC_2(VAR_9, 2, VAR_0);

 VAR_9->vdc_irq_mask &= VAR_7 |
      VAR_6 |
      VAR_5;


 FUNC_1(~VAR_9->vdc_irq_mask, VAR_4);
 FUNC_1(VAR_9->vdc_irq_mask, VAR_2);

 FUNC_6();


 FUNC_1(FUNC_0(VAR_3), VAR_3);
 FUNC_4(&VAR_9->irqmask_lock, VAR_10);
}
