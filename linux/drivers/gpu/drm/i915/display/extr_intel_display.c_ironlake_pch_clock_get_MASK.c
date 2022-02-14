
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int crtc_clock; } ;
struct TYPE_6__ {TYPE_2__ adjusted_mode; } ;
struct intel_crtc_state {int fdi_m_n; TYPE_3__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct intel_crtc*,struct intel_crtc_state*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct drm_i915_private*,struct intel_crtc_state*) ;
 struct drm_i915_private* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct intel_crtc *VAR_0,
       struct intel_crtc_state *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_3(VAR_0->base.dev);


 FUNC_0(VAR_0, VAR_1);






 VAR_1->base.adjusted_mode.crtc_clock =
  FUNC_1(FUNC_2(VAR_2, VAR_1),
      &VAR_1->fdi_m_n);
}
