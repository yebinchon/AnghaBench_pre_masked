
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * port; } ;
struct hdlcd_drm_private {TYPE_2__ crtc; } ;
struct TYPE_3__ {int num_crtc; } ;
struct drm_device {int dev; TYPE_1__ mode_config; struct hdlcd_drm_private* dev_private; } ;
struct device {int of_node; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct device*,struct drm_device*) ;
 int FUNC_4 (struct device*,struct drm_device*) ;
 int FUNC_5 (struct device*,struct drm_device*) ;
 struct hdlcd_drm_private* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct drm_device*) ;
 struct drm_device* FUNC_8 (int *,struct device*) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_device*,int ) ;
 int FUNC_11 (struct drm_device*,int) ;
 int FUNC_12 (struct drm_device*) ;
 int FUNC_13 (struct drm_device*) ;
 int FUNC_14 (struct drm_device*) ;
 int FUNC_15 (struct drm_device*) ;
 int FUNC_16 (struct drm_device*) ;
 int FUNC_17 (struct drm_device*,int ) ;
 int VAR_2 ;
 int FUNC_18 (struct drm_device*,int ) ;
 int FUNC_19 (struct drm_device*) ;
 int * FUNC_20 (int ,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (struct device*) ;
 int FUNC_25 (struct device*) ;

__attribute__((used)) static int FUNC_26(struct device *VAR_3)
{
 struct drm_device *VAR_4;
 struct hdlcd_drm_private *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_6(VAR_3, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_4 = FUNC_8(&VAR_2, VAR_3);
 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_4);

 VAR_4->dev_private = VAR_5;
 FUNC_5(VAR_3, VAR_4);

 FUNC_19(VAR_4);
 VAR_6 = FUNC_18(VAR_4, 0);
 if (VAR_6)
  goto err_free;


 VAR_5->crtc.port = FUNC_20(VAR_3->of_node, 0);

 VAR_6 = FUNC_3(VAR_3, VAR_4);
 if (VAR_6) {
  FUNC_0("Failed to bind all components\n");
  goto err_unload;
 }

 VAR_6 = FUNC_25(VAR_3);
 if (VAR_6)
  goto err_pm_active;

 FUNC_24(VAR_3);

 VAR_6 = FUNC_17(VAR_4, VAR_4->mode_config.num_crtc);
 if (VAR_6 < 0) {
  FUNC_0("failed to initialise vblank\n");
  goto err_vblank;
 }

 FUNC_16(VAR_4);
 FUNC_14(VAR_4);

 VAR_6 = FUNC_10(VAR_4, 0);
 if (VAR_6)
  goto err_register;

 FUNC_11(VAR_4, 32);

 return 0;

err_register:
 FUNC_13(VAR_4);
err_vblank:
 FUNC_23(VAR_4->dev);
err_pm_active:
 FUNC_7(VAR_4);
 FUNC_4(VAR_3, VAR_4);
err_unload:
 FUNC_21(VAR_5->crtc.port);
 VAR_5->crtc.port = ((void*)0);
 FUNC_12(VAR_4);
 FUNC_22(VAR_4->dev);
err_free:
 FUNC_15(VAR_4);
 FUNC_5(VAR_3, ((void*)0));
 FUNC_9(VAR_4);

 return VAR_6;
}
