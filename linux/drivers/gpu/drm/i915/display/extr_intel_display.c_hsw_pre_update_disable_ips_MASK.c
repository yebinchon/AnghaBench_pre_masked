
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ color_mgmt_changed; int crtc; } ;
struct intel_crtc_state {scalar_t__ gamma_mode; int ips_enabled; scalar_t__ update_pipe; TYPE_2__ base; } ;
struct TYPE_3__ {int dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct intel_crtc_state const*) ;
 struct drm_i915_private* FUNC_2 (int ) ;
 struct intel_crtc* FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(const struct intel_crtc_state *VAR_1,
           const struct intel_crtc_state *VAR_2)
{
 struct intel_crtc *VAR_3 = FUNC_3(VAR_2->base.crtc);
 struct drm_i915_private *VAR_4 = FUNC_2(VAR_3->base.dev);

 if (!VAR_1->ips_enabled)
  return 0;

 if (FUNC_1(VAR_2))
  return 1;







 if (FUNC_0(VAR_4) &&
     (VAR_2->base.color_mgmt_changed ||
      VAR_2->update_pipe) &&
     VAR_2->gamma_mode == VAR_0)
  return 1;

 return !VAR_2->ips_enabled;
}
