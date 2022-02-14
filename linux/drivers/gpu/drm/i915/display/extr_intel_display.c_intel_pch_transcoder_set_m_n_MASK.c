
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_link_m_n {int gmch_m; int gmch_n; int link_m; int link_n; int tu; } ;
struct TYPE_3__ {int crtc; } ;
struct intel_crtc_state {TYPE_1__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 struct drm_i915_private* FUNC_6 (int ) ;
 struct intel_crtc* FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(const struct intel_crtc_state *VAR_0,
      const struct intel_link_m_n *VAR_1)
{
 struct intel_crtc *VAR_2 = FUNC_7(VAR_0->base.crtc);
 struct drm_i915_private *VAR_3 = FUNC_6(VAR_2->base.dev);
 enum pipe VAR_4 = VAR_2->pipe;

 FUNC_0(FUNC_1(VAR_4), FUNC_5(VAR_1->tu) | VAR_1->gmch_m);
 FUNC_0(FUNC_2(VAR_4), VAR_1->gmch_n);
 FUNC_0(FUNC_3(VAR_4), VAR_1->link_m);
 FUNC_0(FUNC_4(VAR_4), VAR_1->link_n);
}
