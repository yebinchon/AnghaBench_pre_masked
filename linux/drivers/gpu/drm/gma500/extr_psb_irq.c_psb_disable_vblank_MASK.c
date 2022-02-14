
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_psb_private {int irqmask_lock; int vdc_irq_mask; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct drm_device*,unsigned int) ;
 int FUNC_3 (struct drm_psb_private*,unsigned int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct drm_device *VAR_5, unsigned int VAR_6)
{
 struct drm_psb_private *VAR_7 = VAR_5->dev_private;
 unsigned long VAR_8;

 if (FUNC_0(VAR_5))
  FUNC_2(VAR_5, VAR_6);
 FUNC_4(&VAR_7->irqmask_lock, VAR_8);

 if (VAR_6 == 0)
  VAR_7->vdc_irq_mask &= ~VAR_3;
 else if (VAR_6 == 1)
  VAR_7->vdc_irq_mask &= ~VAR_4;

 FUNC_1(~VAR_7->vdc_irq_mask, VAR_2);
 FUNC_1(VAR_7->vdc_irq_mask, VAR_1);
 FUNC_3(VAR_7, VAR_6, VAR_0);

 FUNC_5(&VAR_7->irqmask_lock, VAR_8);
}
