
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_encoder {TYPE_1__* funcs; } ;
struct TYPE_4__ {struct drm_encoder* encoder; int panel; int get_modes; int attach; int power_off; int power_on_start; int dev_type; } ;
struct exynos_dp_device {int adp; struct drm_encoder encoder; TYPE_2__ plat_data; struct drm_device* drm_dev; int ptn_bridge; struct device* dev; } ;
struct drm_device {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int (* destroy ) (struct drm_encoder*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,struct drm_device*,TYPE_2__*) ;
 struct exynos_dp_device* FUNC_3 (struct device*) ;
 int FUNC_4 (struct drm_encoder*,int *) ;
 int FUNC_5 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 int VAR_3 ;
 int FUNC_6 (struct exynos_dp_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (struct drm_encoder*,int ) ;
 int FUNC_8 (struct drm_encoder*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_9, struct device *VAR_10, void *VAR_11)
{
 struct exynos_dp_device *VAR_12 = FUNC_3(VAR_9);
 struct drm_encoder *VAR_13 = &VAR_12->encoder;
 struct drm_device *VAR_14 = VAR_11;
 int VAR_15;

 VAR_12->dev = VAR_9;
 VAR_12->drm_dev = VAR_14;

 VAR_12->plat_data.dev_type = VAR_2;
 VAR_12->plat_data.power_on_start = VAR_8;
 VAR_12->plat_data.power_off = VAR_7;
 VAR_12->plat_data.attach = VAR_3;
 VAR_12->plat_data.get_modes = VAR_6;

 if (!VAR_12->plat_data.panel && !VAR_12->ptn_bridge) {
  VAR_15 = FUNC_6(VAR_12);
  if (VAR_15)
   return VAR_15;
 }

 FUNC_5(VAR_14, VAR_13, &VAR_4,
    VAR_0, ((void*)0));

 FUNC_4(VAR_13, &VAR_5);

 VAR_15 = FUNC_7(VAR_13, VAR_1);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_12->plat_data.encoder = VAR_13;

 VAR_12->adp = FUNC_2(VAR_9, VAR_12->drm_dev, &VAR_12->plat_data);
 if (FUNC_0(VAR_12->adp)) {
  VAR_12->encoder.funcs->destroy(&VAR_12->encoder);
  return FUNC_1(VAR_12->adp);
 }

 return 0;
}
