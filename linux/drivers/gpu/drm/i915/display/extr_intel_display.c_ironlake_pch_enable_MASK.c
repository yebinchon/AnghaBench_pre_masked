
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct drm_display_mode {int flags; } ;
struct TYPE_7__ {struct drm_display_mode adjusted_mode; int crtc; } ;
struct intel_crtc_state {scalar_t__ shared_dpll; TYPE_3__ base; } ;
struct TYPE_5__ {struct drm_device* dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct intel_atomic_state {int dummy; } ;
struct TYPE_6__ {int (* fdi_link_train ) (struct intel_crtc*,struct intel_crtc_state const*) ;} ;
struct drm_i915_private {TYPE_2__ display; } ;
struct drm_device {int dummy; } ;
typedef int i915_reg_t ;
typedef enum port { ____Placeholder_port } port ;
struct TYPE_8__ {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 int VAR_3 ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int FUNC_6 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_7 ;
 int FUNC_9 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct drm_i915_private*,int) ;
 int FUNC_13 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_14 (struct intel_crtc_state const*) ;
 int FUNC_15 (struct intel_crtc_state const*) ;
 int FUNC_16 (struct intel_crtc*) ;
 TYPE_4__* FUNC_17 (struct intel_atomic_state const*,struct intel_crtc_state const*) ;
 scalar_t__ FUNC_18 (struct drm_i915_private*,int ) ;
 int FUNC_19 (struct intel_crtc_state const*) ;
 int FUNC_20 (struct intel_crtc_state const*,int) ;
 int FUNC_21 (struct intel_crtc_state const*) ;
 int FUNC_22 (struct intel_crtc*,struct intel_crtc_state const*) ;
 struct drm_i915_private* FUNC_23 (struct drm_device*) ;
 struct intel_crtc* FUNC_24 (int ) ;

__attribute__((used)) static void FUNC_25(const struct intel_atomic_state *VAR_14,
    const struct intel_crtc_state *VAR_15)
{
 struct intel_crtc *VAR_16 = FUNC_24(VAR_15->base.crtc);
 struct drm_device *VAR_17 = VAR_16->base.dev;
 struct drm_i915_private *VAR_18 = FUNC_23(VAR_17);
 int VAR_19 = VAR_16->pipe;
 u32 VAR_20;

 FUNC_13(VAR_18, VAR_19);

 if (FUNC_4(VAR_18))
  FUNC_21(VAR_15);



 FUNC_3(FUNC_0(VAR_19),
     FUNC_2(FUNC_6(VAR_19)) & VAR_13);


 VAR_18->display.fdi_link_train(VAR_16, VAR_15);



 if (FUNC_1(VAR_18)) {
  u32 VAR_21;

  VAR_20 = FUNC_2(VAR_3);
  VAR_20 |= FUNC_8(VAR_19);
  VAR_21 = FUNC_7(VAR_19);
  if (VAR_15->shared_dpll ==
      FUNC_18(VAR_18, VAR_0))
   VAR_20 |= VAR_21;
  else
   VAR_20 &= ~VAR_21;
  FUNC_3(VAR_3, VAR_20);
 }
 FUNC_15(VAR_15);


 FUNC_12(VAR_18, VAR_19);
 FUNC_20(VAR_15, VAR_19);

 FUNC_16(VAR_16);


 if (FUNC_1(VAR_18) &&
     FUNC_14(VAR_15)) {
  const struct drm_display_mode *VAR_22 =
   &VAR_15->base.adjusted_mode;
  u32 VAR_23 = (FUNC_2(FUNC_5(VAR_19)) & VAR_4) >> 5;
  i915_reg_t VAR_24 = FUNC_9(VAR_19);
  enum port VAR_25;

  VAR_20 = FUNC_2(VAR_24);
  VAR_20 &= ~(VAR_10 |
     VAR_11 |
     VAR_7);
  VAR_20 |= VAR_9;
  VAR_20 |= VAR_23 << 9;

  if (VAR_22->flags & VAR_1)
   VAR_20 |= VAR_8;
  if (VAR_22->flags & VAR_2)
   VAR_20 |= VAR_12;

  VAR_25 = FUNC_17(VAR_14, VAR_15)->port;
  FUNC_11(VAR_25 < VAR_5 || VAR_25 > VAR_6);
  VAR_20 |= FUNC_10(VAR_25);

  FUNC_3(VAR_24, VAR_20);
 }

 FUNC_19(VAR_15);
}
