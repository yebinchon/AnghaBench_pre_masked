
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_encoder {int dummy; } ;
struct TYPE_4__ {int state; } ;
struct intel_crtc_state {TYPE_2__ base; } ;
struct TYPE_3__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct intel_atomic_state {int dummy; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_1 ;
 int FUNC_2 (struct intel_crtc_state*,int ) ;
 struct intel_encoder* FUNC_3 (struct intel_atomic_state*,struct intel_crtc_state*) ;
 int FUNC_4 (struct intel_atomic_state*,struct intel_crtc*,struct intel_encoder*) ;
 int FUNC_5 (int ) ;
 struct drm_i915_private* FUNC_6 (int ) ;
 struct intel_atomic_state* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct intel_crtc *VAR_2,
          struct intel_crtc_state *VAR_3)
{
 struct drm_i915_private *VAR_4 = FUNC_6(VAR_2->base.dev);
 struct intel_atomic_state *VAR_5 =
  FUNC_7(VAR_3->base.state);

 if (!FUNC_2(VAR_3, VAR_1) ||
     FUNC_1(VAR_4) >= 11) {
  struct intel_encoder *VAR_6 =
   FUNC_3(VAR_5, VAR_3);

  if (!FUNC_4(VAR_5, VAR_2, VAR_6)) {
   FUNC_0("failed to find PLL for pipe %c\n",
          FUNC_5(VAR_2->pipe));
   return -VAR_0;
  }
 }

 return 0;
}
