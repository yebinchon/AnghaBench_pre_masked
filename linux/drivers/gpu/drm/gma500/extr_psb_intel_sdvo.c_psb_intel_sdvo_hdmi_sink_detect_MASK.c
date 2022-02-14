
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct psb_intel_sdvo_connector {scalar_t__ force_audio; } ;
struct psb_intel_sdvo {int ddc_bus; int has_hdmi_audio; int has_hdmi_monitor; scalar_t__ is_hdmi; } ;
struct edid {int input; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct edid*) ;
 int FUNC_1 (struct edid*) ;
 struct psb_intel_sdvo* FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct edid*) ;
 struct edid* FUNC_4 (struct drm_connector*) ;
 struct edid* FUNC_5 (struct drm_connector*) ;
 scalar_t__ FUNC_6 (struct psb_intel_sdvo*) ;
 struct psb_intel_sdvo_connector* FUNC_7 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_8(struct drm_connector *VAR_4)
{
 struct psb_intel_sdvo *VAR_5 = FUNC_2(VAR_4);
 enum drm_connector_status VAR_6;
 struct edid *VAR_7;

 VAR_7 = FUNC_5(VAR_4);

 if (VAR_7 == ((void*)0) && FUNC_6(VAR_5)) {
  u8 VAR_8, VAR_9 = VAR_5->ddc_bus;





  for (VAR_8 = VAR_5->ddc_bus >> 1; VAR_8 > 1; VAR_8 >>= 1) {
   VAR_5->ddc_bus = VAR_8;
   VAR_7 = FUNC_5(VAR_4);
   if (VAR_7)
    break;
  }




  if (VAR_7 == ((void*)0))
   VAR_5->ddc_bus = VAR_9;
 }





 if (VAR_7 == ((void*)0))
  VAR_7 = FUNC_4(VAR_4);

 VAR_6 = VAR_3;
 if (VAR_7 != ((void*)0)) {

  if (VAR_7->input & VAR_0) {
   VAR_6 = VAR_1;
   if (VAR_5->is_hdmi) {
    VAR_5->has_hdmi_monitor = FUNC_0(VAR_7);
    VAR_5->has_hdmi_audio = FUNC_1(VAR_7);
   }
  } else
   VAR_6 = VAR_2;
  FUNC_3(VAR_7);
 }

 if (VAR_6 == VAR_1) {
  struct psb_intel_sdvo_connector *VAR_10 = FUNC_7(VAR_4);
  if (VAR_10->force_audio)
   VAR_5->has_hdmi_audio = VAR_10->force_audio > 0;
 }

 return VAR_6;
}
