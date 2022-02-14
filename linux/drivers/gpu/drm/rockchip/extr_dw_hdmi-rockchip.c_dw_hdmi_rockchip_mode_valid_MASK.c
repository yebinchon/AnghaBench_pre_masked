
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_hdmi_mpll_config {unsigned long mpixelclock; } ;
struct drm_display_mode {int clock; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 struct dw_hdmi_mpll_config* VAR_2 ;

__attribute__((used)) static enum drm_mode_status
FUNC_0(struct drm_connector *VAR_3,
       const struct drm_display_mode *VAR_4)
{
 const struct dw_hdmi_mpll_config *VAR_5 = VAR_2;
 int VAR_6 = VAR_4->clock * 1000;
 bool VAR_7 = 0;
 int VAR_8;

 for (VAR_8 = 0; VAR_5[VAR_8].mpixelclock != (~0UL); VAR_8++) {
  if (VAR_6 == VAR_5[VAR_8].mpixelclock) {
   VAR_7 = 1;
   break;
  }
 }

 return (VAR_7) ? VAR_1 : VAR_0;
}
