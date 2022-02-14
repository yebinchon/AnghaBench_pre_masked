
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct intel_dp {int fec_capable; int dsc_dpcd; } ;
struct TYPE_2__ {struct drm_display_mode* fixed_mode; } ;
struct intel_connector {TYPE_1__ panel; } ;
struct drm_i915_private {int dummy; } ;
struct drm_display_mode {int clock; int flags; scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_connector {int dev; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct intel_dp* FUNC_6 (struct drm_connector*) ;
 int FUNC_7 (struct intel_dp*) ;
 int FUNC_8 (int,int,int,scalar_t__) ;
 scalar_t__ FUNC_9 (struct intel_dp*,int,scalar_t__) ;
 scalar_t__ FUNC_10 (struct intel_dp*) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (int,int) ;
 int FUNC_13 (struct intel_dp*) ;
 int FUNC_14 (struct intel_dp*) ;
 struct drm_i915_private* FUNC_15 (int ) ;
 struct intel_connector* FUNC_16 (struct drm_connector*) ;

__attribute__((used)) static enum drm_mode_status
FUNC_17(struct drm_connector *VAR_8,
      struct drm_display_mode *VAR_9)
{
 struct intel_dp *VAR_10 = FUNC_6(VAR_8);
 struct intel_connector *VAR_11 = FUNC_16(VAR_8);
 struct drm_display_mode *VAR_12 = VAR_11->panel.fixed_mode;
 struct drm_i915_private *VAR_13 = FUNC_15(VAR_8->dev);
 int VAR_14 = VAR_9->clock;
 int VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19;
 u16 VAR_20 = 0;
 u8 VAR_21 = 0;

 if (VAR_9->flags & VAR_1)
  return VAR_5;

 VAR_19 = FUNC_7(VAR_10);

 if (FUNC_10(VAR_10) && VAR_12) {
  if (VAR_9->hdisplay > VAR_12->hdisplay)
   return VAR_7;

  if (VAR_9->vdisplay > VAR_12->vdisplay)
   return VAR_7;

  VAR_14 = VAR_12->clock;
 }

 VAR_18 = FUNC_14(VAR_10);
 VAR_17 = FUNC_13(VAR_10);

 VAR_15 = FUNC_12(VAR_18, VAR_17);
 VAR_16 = FUNC_11(VAR_14, 18);





 if ((FUNC_0(VAR_13) >= 10 || FUNC_1(VAR_13)) &&
     FUNC_3(VAR_10->dsc_dpcd)) {
  if (FUNC_10(VAR_10)) {
   VAR_20 =
    FUNC_5(VAR_10->dsc_dpcd) >> 4;
   VAR_21 =
    FUNC_2(VAR_10->dsc_dpcd,
        1);
  } else if (FUNC_4(VAR_10->fec_capable)) {
   VAR_20 =
    FUNC_8(VAR_18,
           VAR_17,
           VAR_14,
           VAR_9->hdisplay) >> 4;
   VAR_21 =
    FUNC_9(VAR_10,
            VAR_14,
            VAR_9->hdisplay);
  }
 }

 if ((VAR_16 > VAR_15 && !(VAR_20 && VAR_21)) ||
     VAR_14 > VAR_19)
  return VAR_2;

 if (VAR_9->clock < 10000)
  return VAR_3;

 if (VAR_9->flags & VAR_0)
  return VAR_4;

 return VAR_6;
}
