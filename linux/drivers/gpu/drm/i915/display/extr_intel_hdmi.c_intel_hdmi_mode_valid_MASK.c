
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_hdmi {scalar_t__ has_hdmi_sink; } ;
struct drm_i915_private {int max_dotclk_freq; } ;
struct drm_display_mode {int flags; int clock; } ;
struct drm_device {int dummy; } ;
struct drm_connector {int display_info; int state; struct drm_device* dev; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;
struct TYPE_2__ {int force_audio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,struct drm_display_mode*) ;
 int FUNC_4 (struct intel_hdmi*,int,int,int) ;
 struct intel_hdmi* FUNC_5 (struct drm_connector*) ;
 struct drm_device* FUNC_6 (struct intel_hdmi*) ;
 struct drm_i915_private* FUNC_7 (struct drm_device*) ;
 TYPE_1__* FUNC_8 (int ) ;

__attribute__((used)) static enum drm_mode_status
FUNC_9(struct drm_connector *VAR_8,
        struct drm_display_mode *VAR_9)
{
 struct intel_hdmi *VAR_10 = FUNC_5(VAR_8);
 struct drm_device *VAR_11 = FUNC_6(VAR_10);
 struct drm_i915_private *VAR_12 = FUNC_7(VAR_11);
 enum drm_mode_status VAR_13;
 int VAR_14;
 int VAR_15 = FUNC_7(VAR_8->dev)->max_dotclk_freq;
 bool VAR_16 =
  FUNC_2(FUNC_8(VAR_8->state)->force_audio) == VAR_4;

 if (VAR_9->flags & VAR_3)
  return VAR_6;

 VAR_14 = VAR_9->clock;

 if ((VAR_9->flags & VAR_1) == VAR_0)
  VAR_14 *= 2;

 if (VAR_14 > VAR_15)
  return VAR_5;

 if (VAR_9->flags & VAR_2)
  VAR_14 *= 2;

 if (FUNC_3(&VAR_8->display_info, VAR_9))
  VAR_14 /= 2;


 VAR_13 = FUNC_4(VAR_10, VAR_14, 1, VAR_16);

 if (VAR_10->has_hdmi_sink && !VAR_16) {

  if (VAR_13 != VAR_7 && !FUNC_0(VAR_12))
   VAR_13 = FUNC_4(VAR_10, VAR_14 * 3 / 2,
             1, VAR_16);


  if (VAR_13 != VAR_7 && FUNC_1(VAR_12) >= 11)
   VAR_13 = FUNC_4(VAR_10, VAR_14 * 5 / 4,
             1, VAR_16);
 }

 return VAR_13;
}
