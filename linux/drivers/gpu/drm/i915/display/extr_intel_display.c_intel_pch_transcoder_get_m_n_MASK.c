
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_link_m_n {int link_m; int link_n; int gmch_m; int gmch_n; int tu; } ;
struct TYPE_2__ {struct drm_device* dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct drm_i915_private* FUNC_5 (struct drm_device*) ;

__attribute__((used)) static void FUNC_6(struct intel_crtc *VAR_2,
      struct intel_link_m_n *VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->base.dev;
 struct drm_i915_private *VAR_5 = FUNC_5(VAR_4);
 enum pipe VAR_6 = VAR_2->pipe;

 VAR_3->link_m = FUNC_0(FUNC_3(VAR_6));
 VAR_3->link_n = FUNC_0(FUNC_4(VAR_6));
 VAR_3->gmch_m = FUNC_0(FUNC_1(VAR_6))
  & ~VAR_0;
 VAR_3->gmch_n = FUNC_0(FUNC_2(VAR_6));
 VAR_3->tu = ((FUNC_0(FUNC_1(VAR_6))
      & VAR_0) >> VAR_1) + 1;
}
