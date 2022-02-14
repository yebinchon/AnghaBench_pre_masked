
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int private_flags; } ;
struct TYPE_5__ {TYPE_1__ adjusted_mode; scalar_t__ color_mgmt_changed; int crtc; } ;
struct intel_crtc_state {scalar_t__ gamma_mode; int ips_enabled; TYPE_2__ base; scalar_t__ update_pipe; } ;
struct TYPE_6__ {int dev; } ;
struct intel_crtc {TYPE_3__ base; } ;
struct drm_i915_private {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct intel_crtc_state const*) ;
 struct drm_i915_private* FUNC_2 (int ) ;
 struct intel_crtc* FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(const struct intel_crtc_state *VAR_2,
           const struct intel_crtc_state *VAR_3)
{
 struct intel_crtc *VAR_4 = FUNC_3(VAR_3->base.crtc);
 struct drm_i915_private *VAR_5 = FUNC_2(VAR_4->base.dev);

 if (!VAR_3->ips_enabled)
  return 0;

 if (FUNC_1(VAR_3))
  return 1;







 if (FUNC_0(VAR_5) &&
     (VAR_3->base.color_mgmt_changed ||
      VAR_3->update_pipe) &&
     VAR_3->gamma_mode == VAR_0)
  return 1;





 if (VAR_3->update_pipe &&
     VAR_2->base.adjusted_mode.private_flags & VAR_1)
  return 1;

 return !VAR_2->ips_enabled;
}
