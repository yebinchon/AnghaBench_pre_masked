
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct dw_hdmi_plat_data {int dummy; } ;
struct dw_hdmi {int bridge; } ;
struct drm_encoder {int dummy; } ;


 int FUNC_0 (char*) ;
 struct dw_hdmi* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct dw_hdmi*) ;
 struct dw_hdmi* FUNC_3 (struct platform_device*,struct dw_hdmi_plat_data const*) ;
 int FUNC_4 (struct drm_encoder*,int *,int *) ;
 int FUNC_5 (struct dw_hdmi*) ;

struct dw_hdmi *FUNC_6(struct platform_device *VAR_0,
        struct drm_encoder *VAR_1,
        const struct dw_hdmi_plat_data *VAR_2)
{
 struct dw_hdmi *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_0, VAR_2);
 if (FUNC_2(VAR_3))
  return VAR_3;

 VAR_4 = FUNC_4(VAR_1, &VAR_3->bridge, ((void*)0));
 if (VAR_4) {
  FUNC_5(VAR_3);
  FUNC_0("Failed to initialize bridge with drm\n");
  return FUNC_1(VAR_4);
 }

 return VAR_3;
}
