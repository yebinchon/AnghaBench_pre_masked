
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_plane {int i9xx_plane; } ;
struct intel_encoder {int (* get_hw_state ) (struct intel_encoder*,int*) ;} ;
struct TYPE_3__ {int primary; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_connector {struct intel_encoder* encoder; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef int intel_wakeref_t ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
typedef enum intel_display_power_domain { ____Placeholder_intel_display_power_domain } intel_display_power_domain ;
typedef enum drm_panel_orientation { ____Placeholder_drm_panel_orientation } drm_panel_orientation ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (struct drm_i915_private*,int,int ) ;
 struct intel_crtc* FUNC_5 (struct drm_i915_private*,int) ;
 int FUNC_6 (struct intel_encoder*,int*) ;
 struct drm_i915_private* FUNC_7 (int ) ;
 struct intel_plane* FUNC_8 (int ) ;

__attribute__((used)) static enum drm_panel_orientation
FUNC_9(struct intel_connector *VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_7(VAR_5->base.dev);
 struct intel_encoder *VAR_7 = VAR_5->encoder;
 enum intel_display_power_domain VAR_8;
 enum drm_panel_orientation VAR_9;
 struct intel_plane *VAR_10;
 struct intel_crtc *VAR_11;
 intel_wakeref_t VAR_12;
 enum pipe VAR_13;
 u32 VAR_14;

 if (!VAR_7->get_hw_state(VAR_7, &VAR_13))
  return VAR_4;

 VAR_11 = FUNC_5(VAR_6, VAR_13);
 VAR_10 = FUNC_8(VAR_11->base.primary);

 VAR_8 = FUNC_2(VAR_13);
 VAR_12 = FUNC_3(VAR_6, VAR_8);
 if (!VAR_12)
  return VAR_4;

 VAR_14 = FUNC_1(FUNC_0(VAR_10->i9xx_plane));

 if (!(VAR_14 & VAR_0))
  VAR_9 = VAR_4;
 else if (VAR_14 & VAR_1)
  VAR_9 = VAR_2;
 else
  VAR_9 = VAR_3;

 FUNC_4(VAR_6, VAR_8, VAR_12);

 return VAR_9;
}
