
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct intel_shared_dpll {TYPE_3__* info; } ;
struct TYPE_8__ {int dpll; } ;
struct intel_crtc_state {int cpu_transcoder; int pipe_bpp; int limited_color_range; int gamma_mode; int csc_mode; int has_pch_encoder; int fdi_lanes; int pixel_multiplier; TYPE_4__ dpll_hw_state; struct intel_shared_dpll* shared_dpll; int output_format; } ;
struct TYPE_5__ {struct drm_device* dev; } ;
struct intel_crtc {scalar_t__ pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
typedef int intel_wakeref_t ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum intel_dpll_id { ____Placeholder_intel_dpll_id } intel_dpll_id ;
typedef enum intel_display_power_domain { ____Placeholder_intel_display_power_domain } intel_display_power_domain ;
struct TYPE_7__ {TYPE_2__* funcs; } ;
struct TYPE_6__ {int (* get_hw_state ) (struct drm_i915_private*,struct intel_shared_dpll*,TYPE_4__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;




 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (scalar_t__) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int VAR_13 ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct intel_crtc_state*) ;
 int FUNC_10 (struct intel_crtc_state*) ;
 int FUNC_11 (struct drm_i915_private*,int) ;
 int FUNC_12 (struct drm_i915_private*,int,int ) ;
 int FUNC_13 (struct intel_crtc*,struct intel_crtc_state*) ;
 int FUNC_14 (struct intel_crtc*,struct intel_crtc_state*) ;
 struct intel_shared_dpll* FUNC_15 (struct drm_i915_private*,int) ;
 int FUNC_16 (struct intel_crtc*,struct intel_crtc_state*) ;
 int FUNC_17 (struct intel_crtc*,struct intel_crtc_state*) ;
 int FUNC_18 (struct intel_crtc*,struct intel_crtc_state*) ;
 int FUNC_19 (struct drm_i915_private*,struct intel_shared_dpll*,TYPE_4__*) ;
 struct drm_i915_private* FUNC_20 (struct drm_device*) ;

__attribute__((used)) static bool FUNC_21(struct intel_crtc *VAR_14,
         struct intel_crtc_state *VAR_15)
{
 struct drm_device *VAR_16 = VAR_14->base.dev;
 struct drm_i915_private *VAR_17 = FUNC_20(VAR_16);
 enum intel_display_power_domain VAR_18;
 intel_wakeref_t VAR_19;
 u32 VAR_20;
 bool VAR_21;

 VAR_18 = FUNC_6(VAR_14->pipe);
 VAR_19 = FUNC_11(VAR_17, VAR_18);
 if (!VAR_19)
  return 0;

 VAR_15->output_format = VAR_4;
 VAR_15->cpu_transcoder = (enum transcoder) VAR_14->pipe;
 VAR_15->shared_dpll = ((void*)0);

 VAR_21 = 0;
 VAR_20 = FUNC_2(FUNC_4(VAR_14->pipe));
 if (!(VAR_20 & VAR_8))
  goto out;

 switch (VAR_20 & VAR_6) {
 case 129:
  VAR_15->pipe_bpp = 18;
  break;
 case 128:
  VAR_15->pipe_bpp = 24;
  break;
 case 131:
  VAR_15->pipe_bpp = 30;
  break;
 case 130:
  VAR_15->pipe_bpp = 36;
  break;
 default:
  break;
 }

 if (VAR_20 & VAR_7)
  VAR_15->limited_color_range = 1;

 VAR_15->gamma_mode = (VAR_20 & VAR_9) >>
  VAR_10;

 VAR_15->csc_mode = FUNC_2(FUNC_5(VAR_14->pipe));

 FUNC_9(VAR_15);
 FUNC_10(VAR_15);

 if (FUNC_2(FUNC_3(VAR_14->pipe)) & VAR_13) {
  struct intel_shared_dpll *VAR_22;
  enum intel_dpll_id VAR_23;

  VAR_15->has_pch_encoder = 1;

  VAR_20 = FUNC_2(FUNC_0(VAR_14->pipe));
  VAR_15->fdi_lanes = ((VAR_2 & VAR_20) >>
       VAR_3) + 1;

  FUNC_16(VAR_14, VAR_15);

  if (FUNC_1(VAR_17)) {




   VAR_23 = (enum intel_dpll_id) VAR_14->pipe;
  } else {
   VAR_20 = FUNC_2(VAR_5);
   if (VAR_20 & FUNC_7(VAR_14->pipe))
    VAR_23 = VAR_1;
   else
    VAR_23= VAR_0;
  }

  VAR_15->shared_dpll =
   FUNC_15(VAR_17, VAR_23);
  VAR_22 = VAR_15->shared_dpll;

  FUNC_8(!VAR_22->info->funcs->get_hw_state(VAR_17, VAR_22,
      &VAR_15->dpll_hw_state));

  VAR_20 = VAR_15->dpll_hw_state.dpll;
  VAR_15->pixel_multiplier =
   ((VAR_20 & VAR_11)
    >> VAR_12) + 1;

  FUNC_18(VAR_14, VAR_15);
 } else {
  VAR_15->pixel_multiplier = 1;
 }

 FUNC_14(VAR_14, VAR_15);
 FUNC_13(VAR_14, VAR_15);

 FUNC_17(VAR_14, VAR_15);

 VAR_21 = 1;

out:
 FUNC_12(VAR_17, VAR_18, VAR_19);

 return VAR_21;
}
