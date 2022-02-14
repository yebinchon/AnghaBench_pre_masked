
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct drm_psb_private {int vdc_irq_mask; TYPE_1__* ops; int irqmask_lock; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* hotplug ) (struct drm_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*,int ,int ) ;
 int FUNC_7 (struct drm_device*,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct drm_device*) ;

irqreturn_t FUNC_12(int VAR_10, void *VAR_11)
{
 struct drm_device *VAR_12 = VAR_11;
 struct drm_psb_private *VAR_13 = VAR_12->dev_private;
 uint32_t VAR_14, VAR_15 = 0, VAR_16 = 0, VAR_17 = 0;
 u32 VAR_18, VAR_19;
 int VAR_20 = 0;

 FUNC_9(&VAR_13->irqmask_lock);

 VAR_14 = FUNC_1(VAR_5);

 if (VAR_14 & (VAR_9|VAR_6))
  VAR_15 = 1;






 if (VAR_14 & VAR_8)
  VAR_16 = 1;
 if (VAR_14 & VAR_7)
  VAR_17 = 1;

 VAR_14 &= VAR_13->vdc_irq_mask;
 FUNC_10(&VAR_13->irqmask_lock);

 if (VAR_15 && FUNC_5(VAR_12)) {
  FUNC_7(VAR_12, VAR_14);
  VAR_20 = 1;
 }

 if (VAR_16) {
  VAR_18 = FUNC_0(VAR_3);
  VAR_19 = FUNC_0(VAR_4);
  FUNC_6(VAR_12, VAR_18, VAR_19);
  VAR_20 = 1;
 }



 if (VAR_17 && VAR_13->ops->hotplug) {
  VAR_20 = VAR_13->ops->hotplug(VAR_12);
  FUNC_4(VAR_2, FUNC_3(VAR_2));
 }

 FUNC_2(VAR_14, VAR_5);
 (void) FUNC_1(VAR_5);
 FUNC_8();

 if (!VAR_20)
  return VAR_1;

 return VAR_0;
}
