
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int control; int pgm_ratios; } ;
struct TYPE_4__ {int crtc; } ;
struct intel_crtc_state {TYPE_3__ gmch_pfit; TYPE_1__ base; } ;
struct TYPE_5__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct drm_i915_private*,int ) ;
 struct drm_i915_private* FUNC_5 (int ) ;
 struct intel_crtc* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(const struct intel_crtc_state *VAR_3)
{
 struct intel_crtc *VAR_4 = FUNC_6(VAR_3->base.crtc);
 struct drm_i915_private *VAR_5 = FUNC_5(VAR_4->base.dev);

 if (!VAR_3->gmch_pfit.control)
  return;





 FUNC_3(FUNC_1(VAR_0) & VAR_1);
 FUNC_4(VAR_5, VAR_4->pipe);

 FUNC_2(VAR_2, VAR_3->gmch_pfit.pgm_ratios);
 FUNC_2(VAR_0, VAR_3->gmch_pfit.control);



 FUNC_2(FUNC_0(VAR_4->pipe), 0);
}
