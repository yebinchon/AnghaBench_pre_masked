
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_11__ {int dpms; } ;
struct TYPE_10__ {TYPE_5__ connector; int encoder; int dev; } ;
struct tegra_sor {int clk_dp; int clk_safe; scalar_t__ rst; int dev; int clk; TYPE_2__ output; scalar_t__ aux; TYPE_1__* soc; } ;
struct host1x_client {int dev; int parent; } ;
struct drm_encoder_helper_funcs {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_9__ {scalar_t__ supports_dp; scalar_t__ supports_edp; scalar_t__ supports_lvds; scalar_t__ supports_hdmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 struct drm_device* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*,int *) ;
 int FUNC_4 (TYPE_5__*,int *) ;
 int FUNC_5 (struct drm_device*,TYPE_5__*,int *,int) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (scalar_t__,TYPE_2__*) ;
 int FUNC_8 (int *,struct drm_encoder_helper_funcs const*) ;
 int FUNC_9 (struct drm_device*,int *,int *,int,int *) ;
 struct tegra_sor* FUNC_10 (struct host1x_client*) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (TYPE_2__*,struct drm_device*) ;
 int FUNC_16 (struct drm_device*,TYPE_2__*) ;
 int VAR_13 ;
 int VAR_14 ;
 struct drm_encoder_helper_funcs VAR_15 ;
 int VAR_16 ;
 struct drm_encoder_helper_funcs VAR_17 ;
 int FUNC_17 (struct tegra_sor*,int,int ) ;
 int FUNC_18 (int,int) ;

__attribute__((used)) static int FUNC_19(struct host1x_client *VAR_18)
{
 struct drm_device *VAR_19 = FUNC_2(VAR_18->parent);
 const struct drm_encoder_helper_funcs *VAR_20 = ((void*)0);
 struct tegra_sor *VAR_21 = FUNC_10(VAR_18);
 int VAR_22 = VAR_3;
 int VAR_23 = VAR_7;
 u32 VAR_24;
 int VAR_25;

 if (!VAR_21->aux) {
  if (VAR_21->soc->supports_hdmi) {
   VAR_22 = VAR_1;
   VAR_23 = VAR_8;
   VAR_20 = &VAR_17;
  } else if (VAR_21->soc->supports_lvds) {
   VAR_22 = VAR_2;
   VAR_23 = VAR_6;
  }
 } else {
  if (VAR_21->soc->supports_edp) {
   VAR_22 = VAR_4;
   VAR_23 = VAR_8;
   VAR_20 = &VAR_15;
  } else if (VAR_21->soc->supports_dp) {
   VAR_22 = VAR_0;
   VAR_23 = VAR_8;
  }
 }

 VAR_21->output.dev = VAR_21->dev;

 FUNC_5(VAR_19, &VAR_21->output.connector,
      &VAR_13,
      VAR_22);
 FUNC_4(&VAR_21->output.connector,
     &VAR_14);
 VAR_21->output.connector.dpms = VAR_5;

 FUNC_9(VAR_19, &VAR_21->output.encoder, &VAR_16,
    VAR_23, ((void*)0));
 FUNC_8(&VAR_21->output.encoder, VAR_20);

 FUNC_3(&VAR_21->output.connector,
       &VAR_21->output.encoder);
 FUNC_6(&VAR_21->output.connector);

 VAR_25 = FUNC_16(VAR_19, &VAR_21->output);
 if (VAR_25 < 0) {
  FUNC_1(VAR_18->dev, "failed to initialize output: %d\n", VAR_25);
  return VAR_25;
 }

 FUNC_15(&VAR_21->output, VAR_19);

 if (VAR_21->aux) {
  VAR_25 = FUNC_7(VAR_21->aux, &VAR_21->output);
  if (VAR_25 < 0) {
   FUNC_1(VAR_21->dev, "failed to attach DP: %d\n", VAR_25);
   return VAR_25;
  }
 }





 if (VAR_21->rst) {
  VAR_25 = FUNC_11(VAR_21->rst);
  if (VAR_25 < 0) {
   FUNC_1(VAR_21->dev, "failed to acquire SOR reset: %d\n",
    VAR_25);
   return VAR_25;
  }

  VAR_25 = FUNC_12(VAR_21->rst);
  if (VAR_25 < 0) {
   FUNC_1(VAR_21->dev, "failed to assert SOR reset: %d\n",
    VAR_25);
   return VAR_25;
  }
 }

 VAR_25 = FUNC_0(VAR_21->clk);
 if (VAR_25 < 0) {
  FUNC_1(VAR_21->dev, "failed to enable clock: %d\n", VAR_25);
  return VAR_25;
 }

 FUNC_18(1000, 3000);

 if (VAR_21->rst) {
  VAR_25 = FUNC_13(VAR_21->rst);
  if (VAR_25 < 0) {
   FUNC_1(VAR_21->dev, "failed to deassert SOR reset: %d\n",
    VAR_25);
   return VAR_25;
  }

  FUNC_14(VAR_21->rst);
 }

 VAR_25 = FUNC_0(VAR_21->clk_safe);
 if (VAR_25 < 0)
  return VAR_25;

 VAR_25 = FUNC_0(VAR_21->clk_dp);
 if (VAR_25 < 0)
  return VAR_25;






 VAR_24 = VAR_10 | VAR_9;
 FUNC_17(VAR_21, VAR_24, VAR_11);
 FUNC_17(VAR_21, VAR_24, VAR_12);

 return 0;
}
