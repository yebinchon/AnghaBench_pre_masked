
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dev; } ;
struct intel_encoder {TYPE_2__ base; } ;
struct TYPE_4__ {int enable; int gcp; } ;
struct TYPE_6__ {int crtc; } ;
struct intel_crtc_state {TYPE_1__ infoframes; int cpu_transcoder; TYPE_3__ base; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct drm_i915_private* FUNC_9 (int ) ;
 struct intel_crtc* FUNC_10 (int ) ;

void FUNC_11(struct intel_encoder *VAR_1,
       struct intel_crtc_state *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_9(VAR_1->base.dev);
 struct intel_crtc *VAR_4 = FUNC_10(VAR_2->base.crtc);
 i915_reg_t VAR_5;

 if ((VAR_2->infoframes.enable &
      FUNC_8(VAR_0)) == 0)
  return;

 if (FUNC_0(VAR_3))
  VAR_5 = FUNC_2(VAR_2->cpu_transcoder);
 else if (FUNC_5(VAR_3) || FUNC_4(VAR_3))
  VAR_5 = FUNC_7(VAR_4->pipe);
 else if (FUNC_1(VAR_3))
  VAR_5 = FUNC_6(VAR_4->pipe);
 else
  return;

 VAR_2->infoframes.gcp = FUNC_3(VAR_5);
}
