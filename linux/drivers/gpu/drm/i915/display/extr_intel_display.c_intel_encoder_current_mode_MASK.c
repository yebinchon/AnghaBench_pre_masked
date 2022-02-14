
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int dev; } ;
struct intel_encoder {int (* get_config ) (struct intel_encoder*,struct intel_crtc_state*) ;int (* get_hw_state ) (struct intel_encoder*,int*) ;TYPE_3__ base; } ;
struct TYPE_4__ {int * crtc; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct intel_crtc {int base; } ;
struct TYPE_5__ {int (* get_pipe_config ) (struct intel_crtc*,struct intel_crtc_state*) ;} ;
struct drm_i915_private {TYPE_2__ display; } ;
struct drm_display_mode {TYPE_1__ base; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 struct intel_crtc* FUNC_0 (struct drm_i915_private*,int) ;
 int FUNC_1 (struct intel_crtc_state*,struct intel_crtc_state*) ;
 int FUNC_2 (struct intel_crtc_state*) ;
 struct intel_crtc_state* FUNC_3 (int,int ) ;
 int FUNC_4 (struct intel_encoder*,int*) ;
 int FUNC_5 (struct intel_crtc*,struct intel_crtc_state*) ;
 int FUNC_6 (struct intel_encoder*,struct intel_crtc_state*) ;
 struct drm_i915_private* FUNC_7 (int ) ;

struct drm_display_mode *
FUNC_8(struct intel_encoder *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_7(VAR_1->base.dev);
 struct intel_crtc_state *VAR_3;
 struct drm_display_mode *VAR_4;
 struct intel_crtc *VAR_5;
 enum pipe VAR_6;

 if (!VAR_1->get_hw_state(VAR_1, &VAR_6))
  return ((void*)0);

 VAR_5 = FUNC_0(VAR_2, VAR_6);

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (!VAR_3) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }

 VAR_3->base.crtc = &VAR_5->base;

 if (!VAR_2->display.get_pipe_config(VAR_5, VAR_3)) {
  FUNC_2(VAR_3);
  FUNC_2(VAR_4);
  return ((void*)0);
 }

 VAR_1->get_config(VAR_1, VAR_3);

 FUNC_1(VAR_4, VAR_3);

 FUNC_2(VAR_3);

 return VAR_4;
}
