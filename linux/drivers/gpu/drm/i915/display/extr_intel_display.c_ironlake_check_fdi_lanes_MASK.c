
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct drm_atomic_state* state; } ;
struct intel_crtc_state {int fdi_lanes; TYPE_1__ base; } ;
struct intel_crtc {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_atomic_state {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;
struct TYPE_4__ {int num_pipes; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct intel_crtc_state*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;



 int FUNC_6 (struct intel_crtc_state*) ;
 struct intel_crtc_state* FUNC_7 (struct drm_atomic_state*,struct intel_crtc*) ;
 struct intel_crtc* FUNC_8 (struct drm_i915_private*,int const) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct intel_crtc_state*) ;
 struct drm_i915_private* FUNC_11 (struct drm_device*) ;

__attribute__((used)) static int FUNC_12(struct drm_device *VAR_1, enum pipe VAR_2,
         struct intel_crtc_state *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_11(VAR_1);
 struct drm_atomic_state *VAR_5 = VAR_3->base.state;
 struct intel_crtc *VAR_6;
 struct intel_crtc_state *VAR_7;

 FUNC_1("checking fdi config on pipe %c, lanes %i\n",
        FUNC_9(VAR_2), VAR_3->fdi_lanes);
 if (VAR_3->fdi_lanes > 4) {
  FUNC_1("invalid fdi lane config on pipe %c: %i lanes\n",
         FUNC_9(VAR_2), VAR_3->fdi_lanes);
  return -VAR_0;
 }

 if (FUNC_5(VAR_4) || FUNC_3(VAR_4)) {
  if (VAR_3->fdi_lanes > 2) {
   FUNC_1("only 2 lanes on haswell, required: %i lanes\n",
          VAR_3->fdi_lanes);
   return -VAR_0;
  } else {
   return 0;
  }
 }

 if (FUNC_2(VAR_4)->num_pipes == 2)
  return 0;


 switch (VAR_2) {
 case 130:
  return 0;
 case 129:
  if (VAR_3->fdi_lanes <= 2)
   return 0;

  VAR_6 = FUNC_8(VAR_4, 128);
  VAR_7 =
   FUNC_7(VAR_5, VAR_6);
  if (FUNC_4(VAR_7))
   return FUNC_6(VAR_7);

  if (FUNC_10(VAR_7) > 0) {
   FUNC_1("invalid shared fdi lane config on pipe %c: %i lanes\n",
          FUNC_9(VAR_2), VAR_3->fdi_lanes);
   return -VAR_0;
  }
  return 0;
 case 128:
  if (VAR_3->fdi_lanes > 2) {
   FUNC_1("only 2 lanes on pipe %c: required %i lanes\n",
          FUNC_9(VAR_2), VAR_3->fdi_lanes);
   return -VAR_0;
  }

  VAR_6 = FUNC_8(VAR_4, 129);
  VAR_7 =
   FUNC_7(VAR_5, VAR_6);
  if (FUNC_4(VAR_7))
   return FUNC_6(VAR_7);

  if (FUNC_10(VAR_7) > 2) {
   FUNC_1("fdi link B uses too many lanes to enable link C\n");
   return -VAR_0;
  }
  return 0;
 default:
  FUNC_0();
 }
}
