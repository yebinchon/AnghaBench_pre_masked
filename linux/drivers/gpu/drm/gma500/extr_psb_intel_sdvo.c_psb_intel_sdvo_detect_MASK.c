
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct psb_intel_sdvo_connector {int output_flag; } ;
struct TYPE_4__ {int needs_tv_clock; } ;
struct TYPE_3__ {int output_flags; } ;
struct psb_intel_sdvo {int attached_output; int has_hdmi_monitor; int has_hdmi_audio; int is_tv; int is_lvds; int * sdvo_lvds_fixed_mode; TYPE_2__ base; TYPE_1__ caps; } ;
struct edid {int input; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int FUNC_0 (char*,int,int,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct psb_intel_sdvo_connector*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct psb_intel_sdvo* FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct edid*) ;
 int FUNC_4 (int) ;
 struct edid* FUNC_5 (struct drm_connector*) ;
 struct edid* FUNC_6 (struct drm_connector*) ;
 int FUNC_7 (struct drm_connector*) ;
 int FUNC_8 (struct psb_intel_sdvo*,int*,int) ;
 int FUNC_9 (struct psb_intel_sdvo*,int ,int *,int ) ;
 struct psb_intel_sdvo_connector* FUNC_10 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_11(struct drm_connector *VAR_9, bool VAR_10)
{
 uint16_t VAR_11;
 struct psb_intel_sdvo *VAR_12 = FUNC_2(VAR_9);
 struct psb_intel_sdvo_connector *VAR_13 = FUNC_10(VAR_9);
 enum drm_connector_status VAR_14;

 if (!FUNC_9(VAR_12,
      VAR_1, ((void*)0), 0))
  return VAR_8;


 if (VAR_12->caps.output_flags &
     (VAR_4 | VAR_3))
  FUNC_4(30);

 if (!FUNC_8(VAR_12, &VAR_11, 2))
  return VAR_8;

 FUNC_0("SDVO response %d %d [%x]\n",
        VAR_11 & 0xff, VAR_11 >> 8,
        VAR_13->output_flag);

 if (VAR_11 == 0)
  return VAR_7;

 VAR_12->attached_output = VAR_11;

 VAR_12->has_hdmi_monitor = 0;
 VAR_12->has_hdmi_audio = 0;

 if ((VAR_13->output_flag & VAR_11) == 0)
  VAR_14 = VAR_7;
 else if (FUNC_1(VAR_13))
  VAR_14 = FUNC_7(VAR_9);
 else {
  struct edid *VAR_15;


  VAR_15 = FUNC_6(VAR_9);
  if (VAR_15 == ((void*)0))
   VAR_15 = FUNC_5(VAR_9);
  if (VAR_15 != ((void*)0)) {
   if (VAR_15->input & VAR_0)
    VAR_14 = VAR_7;
   else
    VAR_14 = VAR_6;
   FUNC_3(VAR_15);
  } else
   VAR_14 = VAR_6;
 }


 if (VAR_14 == VAR_6) {
  VAR_12->is_tv = 0;
  VAR_12->is_lvds = 0;
  VAR_12->base.needs_tv_clock = 0;

  if (VAR_11 & VAR_5) {
   VAR_12->is_tv = 1;
   VAR_12->base.needs_tv_clock = 1;
  }
  if (VAR_11 & VAR_2)
   VAR_12->is_lvds = VAR_12->sdvo_lvds_fixed_mode != ((void*)0);
 }

 return VAR_14;
}
