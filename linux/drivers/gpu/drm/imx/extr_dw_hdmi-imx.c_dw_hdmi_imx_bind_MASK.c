
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {struct dw_hdmi_plat_data* data; } ;
struct drm_encoder {scalar_t__ possible_crtcs; } ;
struct imx_hdmi {int hdmi; struct drm_encoder encoder; TYPE_1__* dev; } ;
struct dw_hdmi_plat_data {int dummy; } ;
struct drm_device {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct imx_hdmi* FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (struct drm_encoder*) ;
 int FUNC_4 (struct drm_encoder*,int *) ;
 int FUNC_5 (struct drm_device*,struct drm_encoder*,int *,int ,int *) ;
 scalar_t__ FUNC_6 (struct drm_device*,int ) ;
 int FUNC_7 (struct platform_device*,struct drm_encoder*,struct dw_hdmi_plat_data const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (struct imx_hdmi*) ;
 struct of_device_id* FUNC_9 (int ,int ) ;
 int FUNC_10 (struct platform_device*,struct imx_hdmi*) ;
 struct platform_device* FUNC_11 (struct device*) ;

__attribute__((used)) static int FUNC_12(struct device *VAR_8, struct device *VAR_9,
       void *VAR_10)
{
 struct platform_device *VAR_11 = FUNC_11(VAR_8);
 const struct dw_hdmi_plat_data *VAR_12;
 const struct of_device_id *VAR_13;
 struct drm_device *VAR_14 = VAR_10;
 struct drm_encoder *VAR_15;
 struct imx_hdmi *VAR_16;
 int VAR_17;

 if (!VAR_11->dev.of_node)
  return -VAR_1;

 VAR_16 = FUNC_2(&VAR_11->dev, sizeof(*VAR_16), VAR_4);
 if (!VAR_16)
  return -VAR_2;

 VAR_13 = FUNC_9(VAR_5, VAR_11->dev.of_node);
 VAR_12 = VAR_13->data;
 VAR_16->dev = &VAR_11->dev;
 VAR_15 = &VAR_16->encoder;

 VAR_15->possible_crtcs = FUNC_6(VAR_14, VAR_8->of_node);






 if (VAR_15->possible_crtcs == 0)
  return -VAR_3;

 VAR_17 = FUNC_8(VAR_16);
 if (VAR_17 < 0)
  return VAR_17;

 FUNC_4(VAR_15, &VAR_7);
 FUNC_5(VAR_14, VAR_15, &VAR_6,
    VAR_0, ((void*)0));

 FUNC_10(VAR_11, VAR_16);

 VAR_16->hdmi = FUNC_7(VAR_11, VAR_15, VAR_12);





 if (FUNC_0(VAR_16->hdmi)) {
  VAR_17 = FUNC_1(VAR_16->hdmi);
  FUNC_3(VAR_15);
 }

 return VAR_17;
}
