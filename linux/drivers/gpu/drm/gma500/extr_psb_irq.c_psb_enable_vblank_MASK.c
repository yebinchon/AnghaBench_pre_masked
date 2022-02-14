
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_psb_private {int irqmask_lock; int vdc_irq_mask; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct drm_device*,int) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (struct drm_psb_private*,unsigned int,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

int FUNC_10(struct drm_device *VAR_7, unsigned int VAR_8)
{
 struct drm_psb_private *VAR_9 = VAR_7->dev_private;
 unsigned long VAR_10;
 uint32_t VAR_11 = 0;
 uint32_t VAR_12 = FUNC_6(VAR_8);



 if (FUNC_0(VAR_7))
  return FUNC_5(VAR_7, VAR_8);

 if (FUNC_3(VAR_7, 0)) {
  VAR_11 = FUNC_2(VAR_12);
  FUNC_4(VAR_7);
 }

 if (!(VAR_11 & VAR_1))
  return -VAR_0;

 FUNC_8(&VAR_9->irqmask_lock, VAR_10);

 if (VAR_8 == 0)
  VAR_9->vdc_irq_mask |= VAR_5;
 else if (VAR_8 == 1)
  VAR_9->vdc_irq_mask |= VAR_6;

 FUNC_1(~VAR_9->vdc_irq_mask, VAR_4);
 FUNC_1(VAR_9->vdc_irq_mask, VAR_3);
 FUNC_7(VAR_9, VAR_8, VAR_2);

 FUNC_9(&VAR_9->irqmask_lock, VAR_10);

 return 0;
}
