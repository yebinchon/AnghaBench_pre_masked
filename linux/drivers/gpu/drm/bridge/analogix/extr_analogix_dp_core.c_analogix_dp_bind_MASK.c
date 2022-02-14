
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct drm_device {int dummy; } ;
struct analogix_dp_plat_data {int encoder; } ;
struct TYPE_2__ {char* name; struct device* dev; int transfer; } ;
struct analogix_dp_device {int panel_is_modeset; TYPE_1__ aux; struct analogix_dp_plat_data* plat_data; int encoder; struct drm_device* drm_dev; int irq; int * hpd_gpiod; int force_hpd; int * reg_base; int * clock; int * phy; struct device* dev; int panel_lock; int dpms_mode; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct analogix_dp_device* FUNC_1 (int *) ;
 struct analogix_dp_device* FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct drm_device*,struct analogix_dp_device*) ;
 int FUNC_6 (struct analogix_dp_device*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct device*,char*,...) ;
 int * FUNC_9 (struct device*,char*) ;
 void* FUNC_10 (struct device*,char*,int ) ;
 int * FUNC_11 (struct device*,struct resource*) ;
 struct analogix_dp_device* FUNC_12 (struct device*,int,int ) ;
 int * FUNC_13 (struct device*,char*) ;
 int FUNC_14 (struct device*,int ,int ,int ,unsigned int,char*,struct analogix_dp_device*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ,char*) ;
 int FUNC_20 (struct platform_device*,int ) ;
 struct resource* FUNC_21 (struct platform_device*,int ,int ) ;
 int FUNC_22 (struct device*) ;
 int FUNC_23 (struct device*) ;
 struct platform_device* FUNC_24 (struct device*) ;

struct analogix_dp_device *
FUNC_25(struct device *VAR_14, struct drm_device *VAR_15,
   struct analogix_dp_plat_data *VAR_16)
{
 struct platform_device *VAR_17 = FUNC_24(VAR_14);
 struct analogix_dp_device *VAR_18;
 struct resource *VAR_19;
 unsigned int VAR_20;
 int VAR_21;

 if (!VAR_16) {
  FUNC_8(VAR_14, "Invalided input plat_data\n");
  return FUNC_2(-VAR_1);
 }

 VAR_18 = FUNC_12(VAR_14, sizeof(struct analogix_dp_device), VAR_6);
 if (!VAR_18)
  return FUNC_2(-VAR_3);

 VAR_18->dev = &VAR_17->dev;
 VAR_18->dpms_mode = VAR_0;

 FUNC_18(&VAR_18->panel_lock);
 VAR_18->panel_is_modeset = 0;






 VAR_18->plat_data = VAR_16;

 VAR_21 = FUNC_6(VAR_18);
 if (VAR_21)
  return FUNC_2(VAR_21);

 VAR_18->phy = FUNC_13(VAR_18->dev, "dp");
 if (FUNC_3(VAR_18->phy)) {
  FUNC_8(VAR_18->dev, "no DP phy configured\n");
  VAR_21 = FUNC_4(VAR_18->phy);
  if (VAR_21) {




   if (VAR_21 == -VAR_4 || VAR_21 == -VAR_2)
    VAR_18->phy = ((void*)0);
   else
    return FUNC_2(VAR_21);
  }
 }

 VAR_18->clock = FUNC_9(&VAR_17->dev, "dp");
 if (FUNC_3(VAR_18->clock)) {
  FUNC_8(&VAR_17->dev, "failed to get clock\n");
  return FUNC_1(VAR_18->clock);
 }

 FUNC_7(VAR_18->clock);

 VAR_19 = FUNC_21(VAR_17, VAR_8, 0);

 VAR_18->reg_base = FUNC_11(&VAR_17->dev, VAR_19);
 if (FUNC_3(VAR_18->reg_base))
  return FUNC_1(VAR_18->reg_base);

 VAR_18->force_hpd = FUNC_19(VAR_14->of_node, "force-hpd");


 VAR_18->hpd_gpiod = FUNC_10(VAR_14, "hpd", VAR_7);
 if (!VAR_18->hpd_gpiod)
  VAR_18->hpd_gpiod = FUNC_10(VAR_14, "samsung,hpd",
       VAR_7);
 if (FUNC_3(VAR_18->hpd_gpiod)) {
  FUNC_8(VAR_14, "error getting HDP GPIO: %ld\n",
   FUNC_4(VAR_18->hpd_gpiod));
  return FUNC_1(VAR_18->hpd_gpiod);
 }

 if (VAR_18->hpd_gpiod) {







  VAR_18->irq = FUNC_17(VAR_18->hpd_gpiod);
  VAR_20 = VAR_10 | VAR_9;
 } else {
  VAR_18->irq = FUNC_20(VAR_17, 0);
  VAR_20 = 0;
 }

 if (VAR_18->irq == -VAR_5) {
  FUNC_8(&VAR_17->dev, "failed to get irq\n");
  return FUNC_2(-VAR_2);
 }

 VAR_21 = FUNC_14(&VAR_17->dev, VAR_18->irq,
     VAR_11,
     VAR_12,
     VAR_20, "analogix-dp", VAR_18);
 if (VAR_21) {
  FUNC_8(&VAR_17->dev, "failed to request irq\n");
  goto err_disable_pm_runtime;
 }
 FUNC_15(VAR_18->irq);

 VAR_18->drm_dev = VAR_15;
 VAR_18->encoder = VAR_18->plat_data->encoder;

 VAR_18->aux.name = "DP-AUX";
 VAR_18->aux.transfer = VAR_13;
 VAR_18->aux.dev = &VAR_17->dev;

 VAR_21 = FUNC_16(&VAR_18->aux);
 if (VAR_21)
  return FUNC_2(VAR_21);

 FUNC_23(VAR_14);

 VAR_21 = FUNC_5(VAR_15, VAR_18);
 if (VAR_21) {
  FUNC_0("failed to create bridge (%d)\n", VAR_21);
  goto err_disable_pm_runtime;
 }

 return VAR_18;

err_disable_pm_runtime:

 FUNC_22(VAR_14);

 return FUNC_2(VAR_21);
}
