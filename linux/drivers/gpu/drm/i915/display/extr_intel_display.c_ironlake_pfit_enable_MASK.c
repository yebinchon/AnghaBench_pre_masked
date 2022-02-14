
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pos; int size; scalar_t__ enabled; } ;
struct TYPE_5__ {int crtc; } ;
struct intel_crtc_state {TYPE_1__ pch_pfit; TYPE_2__ base; } ;
struct TYPE_6__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_3__ base; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 struct drm_i915_private* FUNC_7 (int ) ;
 struct intel_crtc* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(const struct intel_crtc_state *VAR_2)
{
 struct intel_crtc *VAR_3 = FUNC_8(VAR_2->base.crtc);
 struct drm_i915_private *VAR_4 = FUNC_7(VAR_3->base.dev);
 int VAR_5 = VAR_3->pipe;

 if (VAR_2->pch_pfit.enabled) {




  if (FUNC_2(VAR_4) || FUNC_1(VAR_4))
   FUNC_0(FUNC_3(VAR_5), VAR_0 | VAR_1 |
       FUNC_4(VAR_5));
  else
   FUNC_0(FUNC_3(VAR_5), VAR_0 | VAR_1);
  FUNC_0(FUNC_5(VAR_5), VAR_2->pch_pfit.pos);
  FUNC_0(FUNC_6(VAR_5), VAR_2->pch_pfit.size);
 }
}
