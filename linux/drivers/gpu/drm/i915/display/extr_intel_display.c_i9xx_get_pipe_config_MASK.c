
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int crtc_clock; } ;
struct TYPE_8__ {TYPE_3__ adjusted_mode; } ;
struct TYPE_6__ {int dpll_md; int dpll; void* fp1; void* fp0; } ;
struct intel_crtc_state {int cpu_transcoder; int pipe_bpp; int limited_color_range; int gamma_mode; int double_wide; int pixel_multiplier; int port_clock; TYPE_4__ base; TYPE_2__ dpll_hw_state; void* cgm_mode; int * shared_dpll; int output_format; } ;
struct TYPE_5__ {int dev; } ;
struct intel_crtc {size_t pipe; TYPE_1__ base; } ;
struct drm_i915_private {int* chv_dpll_md; } ;
typedef int intel_wakeref_t ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum intel_display_power_domain { ____Placeholder_intel_display_power_domain } intel_display_power_domain ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int VAR_0 ;
 int FUNC_2 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (size_t) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 scalar_t__ FUNC_9 (struct drm_i915_private*) ;
 scalar_t__ FUNC_10 (struct drm_i915_private*) ;
 scalar_t__ FUNC_11 (struct drm_i915_private*) ;
 scalar_t__ FUNC_12 (struct drm_i915_private*) ;
 scalar_t__ FUNC_13 (struct drm_i915_private*) ;
 int FUNC_14 (size_t) ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int FUNC_15 (size_t) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_16 (struct intel_crtc*,struct intel_crtc_state*) ;
 int FUNC_17 (struct intel_crtc*,struct intel_crtc_state*) ;
 int FUNC_18 (struct intel_crtc*,struct intel_crtc_state*) ;
 int FUNC_19 (struct intel_crtc_state*) ;
 int FUNC_20 (struct intel_crtc_state*) ;
 int FUNC_21 (struct drm_i915_private*,int) ;
 int FUNC_22 (struct drm_i915_private*,int,int ) ;
 int FUNC_23 (struct intel_crtc*,struct intel_crtc_state*) ;
 int FUNC_24 (struct intel_crtc*,struct intel_crtc_state*) ;
 struct drm_i915_private* FUNC_25 (int ) ;
 int FUNC_26 (struct intel_crtc*,struct intel_crtc_state*) ;

__attribute__((used)) static bool FUNC_27(struct intel_crtc *VAR_15,
     struct intel_crtc_state *VAR_16)
{
 struct drm_i915_private *VAR_17 = FUNC_25(VAR_15->base.dev);
 enum intel_display_power_domain VAR_18;
 intel_wakeref_t VAR_19;
 u32 VAR_20;
 bool VAR_21;

 VAR_18 = FUNC_15(VAR_15->pipe);
 VAR_19 = FUNC_21(VAR_17, VAR_18);
 if (!VAR_19)
  return 0;

 VAR_16->output_format = VAR_5;
 VAR_16->cpu_transcoder = (enum transcoder) VAR_15->pipe;
 VAR_16->shared_dpll = ((void*)0);

 VAR_21 = 0;

 VAR_20 = FUNC_5(FUNC_14(VAR_15->pipe));
 if (!(VAR_20 & VAR_9))
  goto out;

 if (FUNC_9(VAR_17) || FUNC_13(VAR_17) ||
     FUNC_7(VAR_17)) {
  switch (VAR_20 & VAR_6) {
  case 129:
   VAR_16->pipe_bpp = 18;
   break;
  case 128:
   VAR_16->pipe_bpp = 24;
   break;
  case 130:
   VAR_16->pipe_bpp = 30;
   break;
  default:
   break;
  }
 }

 if ((FUNC_13(VAR_17) || FUNC_7(VAR_17)) &&
     (VAR_20 & VAR_7))
  VAR_16->limited_color_range = 1;

 VAR_16->gamma_mode = (VAR_20 & VAR_10) >>
  VAR_11;

 if (FUNC_7(VAR_17))
  VAR_16->cgm_mode = FUNC_5(FUNC_0(VAR_15->pipe));

 FUNC_19(VAR_16);
 FUNC_20(VAR_16);

 if (FUNC_6(VAR_17) < 4)
  VAR_16->double_wide = VAR_20 & VAR_8;

 FUNC_24(VAR_15, VAR_16);
 FUNC_23(VAR_15, VAR_16);

 FUNC_18(VAR_15, VAR_16);

 if (FUNC_6(VAR_17) >= 4) {

  if (FUNC_7(VAR_17) && VAR_15->pipe != VAR_12)
   VAR_20 = VAR_17->chv_dpll_md[VAR_15->pipe];
  else
   VAR_20 = FUNC_5(FUNC_2(VAR_15->pipe));
  VAR_16->pixel_multiplier =
   ((VAR_20 & VAR_1)
    >> VAR_2) + 1;
  VAR_16->dpll_hw_state.dpll_md = VAR_20;
 } else if (FUNC_10(VAR_17) || FUNC_11(VAR_17) ||
     FUNC_8(VAR_17) || FUNC_12(VAR_17)) {
  VAR_20 = FUNC_5(FUNC_1(VAR_15->pipe));
  VAR_16->pixel_multiplier =
   ((VAR_20 & VAR_13)
    >> VAR_14) + 1;
 } else {



  VAR_16->pixel_multiplier = 1;
 }
 VAR_16->dpll_hw_state.dpll = FUNC_5(FUNC_1(VAR_15->pipe));
 if (!FUNC_13(VAR_17) && !FUNC_7(VAR_17)) {
  VAR_16->dpll_hw_state.fp0 = FUNC_5(FUNC_3(VAR_15->pipe));
  VAR_16->dpll_hw_state.fp1 = FUNC_5(FUNC_4(VAR_15->pipe));
 } else {

  VAR_16->dpll_hw_state.dpll &= ~(VAR_0 |
           VAR_4 |
           VAR_3);
 }

 if (FUNC_7(VAR_17))
  FUNC_16(VAR_15, VAR_16);
 else if (FUNC_13(VAR_17))
  FUNC_26(VAR_15, VAR_16);
 else
  FUNC_17(VAR_15, VAR_16);






 VAR_16->base.adjusted_mode.crtc_clock =
  VAR_16->port_clock / VAR_16->pixel_multiplier;

 VAR_21 = 1;

out:
 FUNC_22(VAR_17, VAR_18, VAR_19);

 return VAR_21;
}
