
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {int irq_enabled; struct komeda_dev* dev_private; } ;
struct komeda_kms_dev {struct drm_device base; } ;
struct komeda_dev {int dev; TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* disable_irq ) (struct komeda_dev*) ;} ;


 int FUNC_0 (int ,struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct komeda_kms_dev*) ;
 int FUNC_7 (struct komeda_dev*) ;

void FUNC_8(struct komeda_kms_dev *VAR_0)
{
 struct drm_device *VAR_1 = &VAR_0->base;
 struct komeda_dev *VAR_2 = VAR_1->dev_private;

 FUNC_3(VAR_1);
 FUNC_4(VAR_1);
 FUNC_1(VAR_1);
 VAR_1->irq_enabled = 0;
 VAR_2->funcs->disable_irq(VAR_2);
 FUNC_0(VAR_2->dev, VAR_1);
 FUNC_5(VAR_1);
 FUNC_6(VAR_0);
 VAR_1->dev_private = ((void*)0);
 FUNC_2(VAR_1);
}
