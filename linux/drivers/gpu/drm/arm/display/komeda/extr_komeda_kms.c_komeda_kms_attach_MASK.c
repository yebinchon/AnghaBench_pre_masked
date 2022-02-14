
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {int irq_enabled; struct komeda_dev* dev_private; TYPE_1__* driver; int dev; } ;
struct komeda_kms_dev {int n_crtcs; struct drm_device base; } ;
struct komeda_dev {int dev; TYPE_2__* funcs; int irq; } ;
struct TYPE_4__ {int (* enable_irq ) (struct komeda_dev*) ;int (* disable_irq ) (struct komeda_dev*) ;} ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 struct komeda_kms_dev* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct komeda_kms_dev*) ;
 int FUNC_2 (int ,struct drm_device*) ;
 int FUNC_3 (int ,int ,int ,int ,int ,struct drm_device*) ;
 int FUNC_4 (struct drm_device*,int *,int ) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*,int ) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_device*,int ) ;
 int FUNC_12 (struct komeda_kms_dev*) ;
 int FUNC_13 (struct komeda_kms_dev*,struct komeda_dev*) ;
 int FUNC_14 (struct komeda_kms_dev*,struct komeda_dev*) ;
 int FUNC_15 (struct komeda_kms_dev*,struct komeda_dev*) ;
 int FUNC_16 (struct komeda_kms_dev*,struct komeda_dev*) ;
 int FUNC_17 (struct komeda_kms_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_18 (struct komeda_kms_dev*,struct komeda_dev*) ;
 struct komeda_kms_dev* FUNC_19 (int,int ) ;
 int FUNC_20 (struct komeda_dev*) ;
 int FUNC_21 (struct komeda_dev*) ;

struct komeda_kms_dev *FUNC_22(struct komeda_dev *VAR_5)
{
 struct komeda_kms_dev *VAR_6 = FUNC_19(sizeof(*VAR_6), VAR_1);
 struct drm_device *VAR_7;
 int VAR_8;

 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_7 = &VAR_6->base;
 VAR_8 = FUNC_4(VAR_7, &VAR_3, VAR_5->dev);
 if (VAR_8)
  goto free_kms;

 VAR_7->dev_private = VAR_5;

 FUNC_18(VAR_6, VAR_5);

 VAR_8 = FUNC_15(VAR_6, VAR_5);
 if (VAR_8)
  goto cleanup_mode_config;

 VAR_8 = FUNC_14(VAR_6, VAR_5);
 if (VAR_8)
  goto cleanup_mode_config;

 VAR_8 = FUNC_11(VAR_7, VAR_6->n_crtcs);
 if (VAR_8)
  goto cleanup_mode_config;

 VAR_8 = FUNC_13(VAR_6, VAR_5);
 if (VAR_8)
  goto cleanup_mode_config;

 VAR_8 = FUNC_16(VAR_6, VAR_5);
 if (VAR_8)
  goto cleanup_mode_config;

 VAR_8 = FUNC_1(VAR_5->dev, VAR_6);
 if (VAR_8)
  goto cleanup_mode_config;

 FUNC_10(VAR_7);

 VAR_8 = FUNC_3(VAR_7->dev, VAR_5->irq,
          VAR_4, VAR_2,
          VAR_7->driver->name, VAR_7);
 if (VAR_8)
  goto free_component_binding;

 VAR_8 = VAR_5->funcs->enable_irq(VAR_5);
 if (VAR_8)
  goto free_component_binding;

 VAR_7->irq_enabled = 1;

 FUNC_8(VAR_7);

 VAR_8 = FUNC_6(VAR_7, 0);
 if (VAR_8)
  goto free_interrupts;

 return VAR_6;

free_interrupts:
 FUNC_7(VAR_7);
 VAR_7->irq_enabled = 0;
 VAR_5->funcs->disable_irq(VAR_5);
free_component_binding:
 FUNC_2(VAR_5->dev, VAR_7);
cleanup_mode_config:
 FUNC_9(VAR_7);
 FUNC_17(VAR_6);
 VAR_7->dev_private = ((void*)0);
 FUNC_5(VAR_7);
free_kms:
 FUNC_12(VAR_6);
 return FUNC_0(VAR_8);
}
