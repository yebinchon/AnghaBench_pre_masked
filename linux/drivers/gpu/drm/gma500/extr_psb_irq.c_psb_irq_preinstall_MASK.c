
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_psb_private {int vdc_irq_mask; int irqmask_lock; TYPE_2__* ops; } ;
struct drm_device {TYPE_1__* vblank; scalar_t__ dev_private; } ;
struct TYPE_4__ {scalar_t__ hotplug; } ;
struct TYPE_3__ {scalar_t__ enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct drm_device *VAR_9)
{
 struct drm_psb_private *VAR_10 =
     (struct drm_psb_private *) VAR_9->dev_private;
 unsigned long VAR_11;

 FUNC_4(&VAR_10->irqmask_lock, VAR_11);

 if (FUNC_3(VAR_9)) {
  FUNC_2(0xFFFFFFFF, VAR_1);
  FUNC_2(0x00000000, VAR_3);
  FUNC_2(0x00000000, VAR_2);
  FUNC_1(0x00000000, VAR_0);
  FUNC_0(VAR_0);
 }
 if (VAR_9->vblank[0].enabled)
  VAR_10->vdc_irq_mask |= VAR_7;
 if (VAR_9->vblank[1].enabled)
  VAR_10->vdc_irq_mask |= VAR_8;
 if (VAR_10->ops->hotplug)
  VAR_10->vdc_irq_mask |= VAR_5;
 VAR_10->vdc_irq_mask |= VAR_4 | VAR_6;


 FUNC_2(~VAR_10->vdc_irq_mask, VAR_3);
 FUNC_5(&VAR_10->irqmask_lock, VAR_11);
}
