
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_encoder {scalar_t__ possible_crtcs; } ;
struct dw_hdmi_plat_data {int mode_valid; } ;
struct sun8i_dw_hdmi {scalar_t__ ddc_en; scalar_t__ regulator; scalar_t__ rst_ctrl; scalar_t__ clk_tmds; scalar_t__ hdmi; int phy; TYPE_1__* quirks; struct drm_encoder encoder; TYPE_2__* dev; struct dw_hdmi_plat_data plat_data; } ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct drm_device {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;
struct TYPE_4__ {int mode_valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct device*,char*) ;
 scalar_t__ FUNC_5 (struct device*,char*) ;
 struct sun8i_dw_hdmi* FUNC_6 (TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_7 (struct device*,char*) ;
 scalar_t__ FUNC_8 (struct device*,char*) ;
 int FUNC_9 (struct drm_encoder*) ;
 int FUNC_10 (struct drm_encoder*,int *) ;
 int FUNC_11 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 scalar_t__ FUNC_12 (struct platform_device*,struct drm_encoder*,struct dw_hdmi_plat_data*) ;
 scalar_t__ FUNC_13 (TYPE_2__*,char*,int ) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__,int) ;
 TYPE_1__* FUNC_16 (struct device*) ;
 int FUNC_17 (struct device_node*) ;
 struct device_node* FUNC_18 (int ,char*,int ) ;
 int FUNC_19 (struct platform_device*) ;
 int FUNC_20 (struct platform_device*,struct sun8i_dw_hdmi*) ;
 int FUNC_21 (scalar_t__) ;
 int FUNC_22 (scalar_t__) ;
 int FUNC_23 (scalar_t__) ;
 int FUNC_24 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_25 (struct device*,struct platform_device**) ;
 scalar_t__ FUNC_26 (struct drm_device*,int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (struct sun8i_dw_hdmi*,struct device_node*) ;
 int FUNC_29 (struct sun8i_dw_hdmi*) ;
 int FUNC_30 (int ,struct dw_hdmi_plat_data*) ;
 struct platform_device* FUNC_31 (struct device*) ;

__attribute__((used)) static int FUNC_32(struct device *VAR_8, struct device *VAR_9,
         void *VAR_10)
{
 struct platform_device *VAR_11 = FUNC_31(VAR_8), *VAR_12;
 struct dw_hdmi_plat_data *VAR_13;
 struct drm_device *VAR_14 = VAR_10;
 struct device_node *VAR_15;
 struct drm_encoder *VAR_16;
 struct sun8i_dw_hdmi *VAR_17;
 int VAR_18;

 if (!VAR_11->dev.of_node)
  return -VAR_1;

 VAR_17 = FUNC_6(&VAR_11->dev, sizeof(*VAR_17), VAR_4);
 if (!VAR_17)
  return -VAR_2;

 VAR_13 = &VAR_17->plat_data;
 VAR_17->dev = &VAR_11->dev;
 VAR_16 = &VAR_17->encoder;

 VAR_17->quirks = FUNC_16(VAR_8);

 VAR_16->possible_crtcs =
  FUNC_26(VAR_14, VAR_8->of_node);






 if (VAR_16->possible_crtcs == 0)
  return -VAR_3;

 VAR_17->rst_ctrl = FUNC_8(VAR_8, "ctrl");
 if (FUNC_0(VAR_17->rst_ctrl)) {
  FUNC_4(VAR_8, "Could not get ctrl reset control\n");
  return FUNC_1(VAR_17->rst_ctrl);
 }

 VAR_17->clk_tmds = FUNC_5(VAR_8, "tmds");
 if (FUNC_0(VAR_17->clk_tmds)) {
  FUNC_4(VAR_8, "Couldn't get the tmds clock\n");
  return FUNC_1(VAR_17->clk_tmds);
 }

 VAR_17->regulator = FUNC_7(VAR_8, "hvcc");
 if (FUNC_0(VAR_17->regulator)) {
  FUNC_4(VAR_8, "Couldn't get regulator\n");
  return FUNC_1(VAR_17->regulator);
 }

 VAR_18 = FUNC_25(VAR_8, &VAR_12);
 if (!VAR_18) {
  VAR_17->ddc_en = FUNC_13(&VAR_12->dev,
        "ddc-en", VAR_5);
  FUNC_19(VAR_12);

  if (FUNC_0(VAR_17->ddc_en)) {
   FUNC_4(VAR_8, "Couldn't get ddc-en gpio\n");
   return FUNC_1(VAR_17->ddc_en);
  }
 }

 VAR_18 = FUNC_22(VAR_17->regulator);
 if (VAR_18) {
  FUNC_4(VAR_8, "Failed to enable regulator\n");
  goto err_unref_ddc_en;
 }

 FUNC_15(VAR_17->ddc_en, 1);

 VAR_18 = FUNC_24(VAR_17->rst_ctrl);
 if (VAR_18) {
  FUNC_4(VAR_8, "Could not deassert ctrl reset control\n");
  goto err_disable_ddc_en;
 }

 VAR_18 = FUNC_3(VAR_17->clk_tmds);
 if (VAR_18) {
  FUNC_4(VAR_8, "Could not enable tmds clock\n");
  goto err_assert_ctrl_reset;
 }

 VAR_15 = FUNC_18(VAR_8->of_node, "phys", 0);
 if (!VAR_15) {
  FUNC_4(VAR_8, "Can't found PHY phandle\n");
  goto err_disable_clk_tmds;
 }

 VAR_18 = FUNC_28(VAR_17, VAR_15);
 FUNC_17(VAR_15);
 if (VAR_18) {
  FUNC_4(VAR_8, "Couldn't get the HDMI PHY\n");
  goto err_disable_clk_tmds;
 }

 FUNC_10(VAR_16, &VAR_7);
 FUNC_11(VAR_14, VAR_16, &VAR_6,
    VAR_0, ((void*)0));

 FUNC_27(VAR_17->phy);

 VAR_13->mode_valid = VAR_17->quirks->mode_valid;
 FUNC_30(VAR_17->phy, VAR_13);

 FUNC_20(VAR_11, VAR_17);

 VAR_17->hdmi = FUNC_12(VAR_11, VAR_16, VAR_13);





 if (FUNC_0(VAR_17->hdmi)) {
  VAR_18 = FUNC_1(VAR_17->hdmi);
  goto cleanup_encoder;
 }

 return 0;

cleanup_encoder:
 FUNC_9(VAR_16);
 FUNC_29(VAR_17);
err_disable_clk_tmds:
 FUNC_2(VAR_17->clk_tmds);
err_assert_ctrl_reset:
 FUNC_23(VAR_17->rst_ctrl);
err_disable_ddc_en:
 FUNC_15(VAR_17->ddc_en, 0);
 FUNC_21(VAR_17->regulator);
err_unref_ddc_en:
 if (VAR_17->ddc_en)
  FUNC_14(VAR_17->ddc_en);

 return VAR_18;
}
