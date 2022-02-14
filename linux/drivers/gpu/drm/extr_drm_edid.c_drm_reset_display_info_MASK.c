
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_info {int dvi_dual; int has_hdmi_infoframe; int rgb_quant_range_selectable; scalar_t__ non_desktop; int hdmi; scalar_t__ max_tmds_clock; scalar_t__ cea_rev; scalar_t__ color_formats; scalar_t__ bpc; scalar_t__ height_mm; scalar_t__ width_mm; } ;
struct drm_connector {struct drm_display_info display_info; } ;


 int FUNC_0 (int *,int ,int) ;

void
FUNC_1(struct drm_connector *VAR_0)
{
 struct drm_display_info *VAR_1 = &VAR_0->display_info;

 VAR_1->width_mm = 0;
 VAR_1->height_mm = 0;

 VAR_1->bpc = 0;
 VAR_1->color_formats = 0;
 VAR_1->cea_rev = 0;
 VAR_1->max_tmds_clock = 0;
 VAR_1->dvi_dual = 0;
 VAR_1->has_hdmi_infoframe = 0;
 VAR_1->rgb_quant_range_selectable = 0;
 FUNC_0(&VAR_1->hdmi, 0, sizeof(VAR_1->hdmi));

 VAR_1->non_desktop = 0;
}
