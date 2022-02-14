
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rockchip_drm_private {int psr_list_lock; int psr_list; } ;
struct TYPE_2__ {int num_crtc; } ;
struct drm_device {int irq_enabled; struct rockchip_drm_private* dev_private; TYPE_1__ mode_config; int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct device*,struct drm_device*) ;
 int FUNC_4 (struct device*,struct drm_device*) ;
 int FUNC_5 (struct device*,struct drm_device*) ;
 struct rockchip_drm_private* FUNC_6 (int ,int,int ) ;
 struct drm_device* FUNC_7 (int *,struct device*) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*,int ) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_device*) ;
 int FUNC_12 (struct drm_device*) ;
 int FUNC_13 (struct drm_device*) ;
 int FUNC_14 (struct drm_device*) ;
 int FUNC_15 (struct drm_device*,int ) ;
 int FUNC_16 (int *) ;
 int VAR_2 ;
 int FUNC_17 (struct drm_device*) ;
 int FUNC_18 (struct drm_device*) ;
 int FUNC_19 (struct drm_device*) ;
 int FUNC_20 (struct drm_device*) ;
 int FUNC_21 (struct drm_device*) ;

__attribute__((used)) static int FUNC_22(struct device *VAR_3)
{
 struct drm_device *VAR_4;
 struct rockchip_drm_private *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_7(&VAR_2, VAR_3);
 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_4);

 FUNC_5(VAR_3, VAR_4);

 VAR_5 = FUNC_6(VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto err_free;
 }

 VAR_4->dev_private = VAR_5;

 FUNC_0(&VAR_5->psr_list);
 FUNC_16(&VAR_5->psr_list_lock);

 VAR_6 = FUNC_19(VAR_4);
 if (VAR_6)
  goto err_free;

 FUNC_13(VAR_4);

 FUNC_20(VAR_4);


 VAR_6 = FUNC_3(VAR_3, VAR_4);
 if (VAR_6)
  goto err_mode_config_cleanup;

 VAR_6 = FUNC_15(VAR_4, VAR_4->mode_config.num_crtc);
 if (VAR_6)
  goto err_unbind_all;

 FUNC_14(VAR_4);





 VAR_4->irq_enabled = 1;

 VAR_6 = FUNC_18(VAR_4);
 if (VAR_6)
  goto err_unbind_all;


 FUNC_11(VAR_4);

 VAR_6 = FUNC_9(VAR_4, 0);
 if (VAR_6)
  goto err_kms_helper_poll_fini;

 return 0;
err_kms_helper_poll_fini:
 FUNC_10(VAR_4);
 FUNC_17(VAR_4);
err_unbind_all:
 FUNC_4(VAR_3, VAR_4);
err_mode_config_cleanup:
 FUNC_12(VAR_4);
 FUNC_21(VAR_4);
err_free:
 VAR_4->dev_private = ((void*)0);
 FUNC_5(VAR_3, ((void*)0));
 FUNC_8(VAR_4);
 return VAR_6;
}
