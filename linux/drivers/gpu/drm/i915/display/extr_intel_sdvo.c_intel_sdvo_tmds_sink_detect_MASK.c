
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_sdvo_connector {scalar_t__ is_hdmi; } ;
struct intel_sdvo {int ddc_bus; int has_hdmi_audio; int has_hdmi_monitor; } ;
struct edid {int input; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct edid*) ;
 int FUNC_1 (struct edid*) ;
 struct intel_sdvo* FUNC_2 (struct drm_connector*) ;
 struct edid* FUNC_3 (struct drm_connector*) ;
 struct edid* FUNC_4 (struct drm_connector*) ;
 scalar_t__ FUNC_5 (struct intel_sdvo*) ;
 int FUNC_6 (struct edid*) ;
 struct intel_sdvo_connector* FUNC_7 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_8(struct drm_connector *VAR_4)
{
 struct intel_sdvo *VAR_5 = FUNC_2(VAR_4);
 struct intel_sdvo_connector *VAR_6 =
  FUNC_7(VAR_4);
 enum drm_connector_status VAR_7;
 struct edid *VAR_8;

 VAR_8 = FUNC_4(VAR_4);

 if (VAR_8 == ((void*)0) && FUNC_5(VAR_5)) {
  u8 VAR_9, VAR_10 = VAR_5->ddc_bus;





  for (VAR_9 = VAR_5->ddc_bus >> 1; VAR_9 > 1; VAR_9 >>= 1) {
   VAR_5->ddc_bus = VAR_9;
   VAR_8 = FUNC_4(VAR_4);
   if (VAR_8)
    break;
  }




  if (VAR_8 == ((void*)0))
   VAR_5->ddc_bus = VAR_10;
 }





 if (VAR_8 == ((void*)0))
  VAR_8 = FUNC_3(VAR_4);

 VAR_7 = VAR_3;
 if (VAR_8 != ((void*)0)) {

  if (VAR_8->input & VAR_0) {
   VAR_7 = VAR_1;
   if (VAR_6->is_hdmi) {
    VAR_5->has_hdmi_monitor = FUNC_0(VAR_8);
    VAR_5->has_hdmi_audio = FUNC_1(VAR_8);
   }
  } else
   VAR_7 = VAR_2;
  FUNC_6(VAR_8);
 }

 return VAR_7;
}
