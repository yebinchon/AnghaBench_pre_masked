
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ color_mgmt_changed; } ;
struct intel_crtc_state {scalar_t__ update_pipe; TYPE_1__ base; } ;
struct TYPE_6__ {int dev; } ;
struct intel_crtc {TYPE_3__ base; } ;
struct intel_atomic_state {int dummy; } ;
struct TYPE_5__ {int (* atomic_update_watermarks ) (struct intel_atomic_state*,struct intel_crtc_state*) ;} ;
struct drm_i915_private {TYPE_2__ display; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct intel_crtc_state*) ;
 struct intel_crtc_state* FUNC_3 (struct intel_atomic_state*,struct intel_crtc*) ;
 struct intel_crtc_state* FUNC_4 (struct intel_atomic_state*,struct intel_crtc*) ;
 int FUNC_5 (struct intel_crtc_state*) ;
 int FUNC_6 (struct intel_crtc_state*) ;
 int FUNC_7 (struct intel_crtc_state*,struct intel_crtc_state*) ;
 int FUNC_8 (struct intel_crtc_state*) ;
 int FUNC_9 (struct intel_crtc_state*) ;
 int FUNC_10 (struct intel_atomic_state*,struct intel_crtc_state*) ;
 struct drm_i915_private* FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct intel_atomic_state *VAR_0,
        struct intel_crtc *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_11(VAR_1->base.dev);
 struct intel_crtc_state *VAR_3 =
  FUNC_4(VAR_0, VAR_1);
 struct intel_crtc_state *VAR_4 =
  FUNC_3(VAR_0, VAR_1);
 bool VAR_5 = FUNC_8(VAR_4);


 FUNC_6(VAR_4);

 if (VAR_5)
  goto out;

 if (VAR_4->base.color_mgmt_changed ||
     VAR_4->update_pipe)
  FUNC_5(VAR_4);

 if (VAR_4->update_pipe)
  FUNC_7(VAR_3, VAR_4);
 else if (FUNC_0(VAR_2) >= 9)
  FUNC_9(VAR_4);

 if (FUNC_0(VAR_2) >= 9 || FUNC_1(VAR_2))
  FUNC_2(VAR_4);

out:
 if (VAR_2->display.atomic_update_watermarks)
  VAR_2->display.atomic_update_watermarks(VAR_0,
          VAR_4);
}
