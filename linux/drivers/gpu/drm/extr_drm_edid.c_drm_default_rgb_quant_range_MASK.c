
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int dummy; } ;
typedef enum hdmi_quantization_range { ____Placeholder_hdmi_quantization_range } hdmi_quantization_range ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_display_mode const*) ;

enum hdmi_quantization_range
FUNC_1(const struct drm_display_mode *VAR_2)
{

 return FUNC_0(VAR_2) > 1 ?
  VAR_1 :
  VAR_0;
}
