
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int dev; } ;
struct intel_encoder {TYPE_2__ base; } ;
struct intel_dsi {int pixel_overlap; scalar_t__ dual_link; } ;
struct drm_display_mode {int crtc_hdisplay; } ;
struct TYPE_3__ {struct drm_display_mode adjusted_mode; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int FUNC_5 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 struct intel_dsi* FUNC_6 (TYPE_2__*) ;
 struct drm_i915_private* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct intel_encoder *VAR_9,
         const struct intel_crtc_state *VAR_10)
{
 struct drm_i915_private *VAR_11 = FUNC_7(VAR_9->base.dev);
 struct intel_dsi *VAR_12 = FUNC_6(&VAR_9->base);
 u32 VAR_13;

 VAR_13 = FUNC_1(VAR_1);
 VAR_13 |= VAR_8;
 VAR_13 &= ~VAR_6;
 VAR_13 |= FUNC_4(VAR_12->pixel_overlap);

 if (VAR_12->dual_link == VAR_0) {
  const struct drm_display_mode *VAR_14 =
     &VAR_10->base.adjusted_mode;
  u32 VAR_15;
  u16 VAR_16 = VAR_14->crtc_hdisplay;
  u16 VAR_17;

  VAR_13 &= ~VAR_3;
  VAR_17 = VAR_16 / 2 + VAR_12->pixel_overlap;

  if (VAR_17 > VAR_5)
   FUNC_0("DL buffer depth exceed max value\n");

  VAR_13 &= ~VAR_4;
  VAR_13 |= FUNC_3(VAR_17);
  VAR_15 = FUNC_1(VAR_2);
  VAR_15 &= ~VAR_7;
  VAR_15 |= FUNC_5(VAR_17);
  FUNC_2(VAR_2, VAR_15);
 } else {

  VAR_13 |= VAR_3;
 }

 FUNC_2(VAR_1, VAR_13);
}
