
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_avi_infoframe {int quantization_range; int ycc_quantization_range; } ;
struct drm_display_mode {int dummy; } ;
struct drm_display_info {scalar_t__ rgb_quant_range_selectable; } ;
struct drm_connector {struct drm_display_info display_info; } ;
typedef enum hdmi_quantization_range { ____Placeholder_hdmi_quantization_range } hdmi_quantization_range ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_display_mode const*) ;
 int FUNC_1 (struct drm_connector*) ;

void
FUNC_2(struct hdmi_avi_infoframe *VAR_4,
       struct drm_connector *VAR_5,
       const struct drm_display_mode *VAR_6,
       enum hdmi_quantization_range VAR_7)
{
 const struct drm_display_info *VAR_8 = &VAR_5->display_info;
 if (VAR_8->rgb_quant_range_selectable ||
     VAR_7 == FUNC_0(VAR_6))
  VAR_4->quantization_range = VAR_7;
 else
  VAR_4->quantization_range = VAR_0;
 if (!FUNC_1(VAR_5) ||
     VAR_7 == VAR_1)
  VAR_4->ycc_quantization_range =
   VAR_3;
 else
  VAR_4->ycc_quantization_range =
   VAR_2;
}
