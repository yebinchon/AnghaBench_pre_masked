
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct drm_encoder {scalar_t__ possible_crtcs; } ;
struct rockchip_hdmi {int vpll_clk; int hdmi; TYPE_1__* dev; int phy; struct drm_encoder encoder; struct rockchip_hdmi* chip_data; } ;
struct TYPE_4__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {int data; } ;
struct dw_hdmi_plat_data {struct rockchip_hdmi* phy_data; } ;
struct drm_device {int dummy; } ;
struct device {int of_node; } ;


 int FUNC_0 (TYPE_1__*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct dw_hdmi_plat_data* FUNC_5 (TYPE_1__*,int ,int,int ) ;
 struct rockchip_hdmi* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (struct device*,char*) ;
 int FUNC_8 (struct drm_encoder*) ;
 int FUNC_9 (struct drm_encoder*,int *) ;
 int FUNC_10 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 scalar_t__ FUNC_11 (struct drm_device*,int ) ;
 int FUNC_12 (struct platform_device*,struct drm_encoder*,struct dw_hdmi_plat_data*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct of_device_id* FUNC_13 (int ,int ) ;
 int FUNC_14 (struct platform_device*,struct rockchip_hdmi*) ;
 int FUNC_15 (struct rockchip_hdmi*) ;
 struct platform_device* FUNC_16 (struct device*) ;

__attribute__((used)) static int FUNC_17(struct device *VAR_8, struct device *VAR_9,
     void *VAR_10)
{
 struct platform_device *VAR_11 = FUNC_16(VAR_8);
 struct dw_hdmi_plat_data *VAR_12;
 const struct of_device_id *VAR_13;
 struct drm_device *VAR_14 = VAR_10;
 struct drm_encoder *VAR_15;
 struct rockchip_hdmi *VAR_16;
 int VAR_17;

 if (!VAR_11->dev.of_node)
  return -VAR_1;

 VAR_16 = FUNC_6(&VAR_11->dev, sizeof(*VAR_16), VAR_4);
 if (!VAR_16)
  return -VAR_2;

 VAR_13 = FUNC_13(VAR_5, VAR_11->dev.of_node);
 VAR_12 = FUNC_5(&VAR_11->dev, VAR_13->data,
          sizeof(*VAR_12), VAR_4);
 if (!VAR_12)
  return -VAR_2;

 VAR_16->dev = &VAR_11->dev;
 VAR_16->chip_data = VAR_12->phy_data;
 VAR_12->phy_data = VAR_16;
 VAR_15 = &VAR_16->encoder;

 VAR_15->possible_crtcs = FUNC_11(VAR_14, VAR_8->of_node);






 if (VAR_15->possible_crtcs == 0)
  return -VAR_3;

 VAR_17 = FUNC_15(VAR_16);
 if (VAR_17) {
  FUNC_0(VAR_16->dev, "Unable to parse OF data\n");
  return VAR_17;
 }

 VAR_17 = FUNC_4(VAR_16->vpll_clk);
 if (VAR_17) {
  FUNC_0(VAR_16->dev, "Failed to enable HDMI vpll: %d\n",
         VAR_17);
  return VAR_17;
 }

 VAR_16->phy = FUNC_7(VAR_8, "hdmi");
 if (FUNC_1(VAR_16->phy)) {
  VAR_17 = FUNC_2(VAR_16->phy);
  if (VAR_17 != -VAR_3)
   FUNC_0(VAR_16->dev, "failed to get phy\n");
  return VAR_17;
 }

 FUNC_9(VAR_15, &VAR_7);
 FUNC_10(VAR_14, VAR_15, &VAR_6,
    VAR_0, ((void*)0));

 FUNC_14(VAR_11, VAR_16);

 VAR_16->hdmi = FUNC_12(VAR_11, VAR_15, VAR_12);





 if (FUNC_1(VAR_16->hdmi)) {
  VAR_17 = FUNC_2(VAR_16->hdmi);
  FUNC_8(VAR_15);
  FUNC_3(VAR_16->vpll_clk);
 }

 return VAR_17;
}
