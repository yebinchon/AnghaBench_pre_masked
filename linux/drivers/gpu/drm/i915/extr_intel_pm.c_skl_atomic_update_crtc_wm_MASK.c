
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct skl_pipe_wm {int linetime; } ;
struct TYPE_9__ {struct skl_pipe_wm optimal; } ;
struct TYPE_10__ {TYPE_4__ skl; } ;
struct TYPE_7__ {int crtc; } ;
struct intel_crtc_state {TYPE_5__ wm; TYPE_2__ base; } ;
struct intel_crtc {int pipe; int base; } ;
struct TYPE_6__ {int dirty_pipes; } ;
struct TYPE_8__ {int dev; } ;
struct intel_atomic_state {TYPE_1__ wm_results; TYPE_3__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 struct drm_i915_private* FUNC_3 (int ) ;
 struct intel_crtc* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct intel_atomic_state *VAR_0,
          struct intel_crtc_state *VAR_1)
{
 struct intel_crtc *VAR_2 = FUNC_4(VAR_1->base.crtc);
 struct drm_i915_private *VAR_3 = FUNC_3(VAR_0->base.dev);
 struct skl_pipe_wm *VAR_4 = &VAR_1->wm.skl.optimal;
 enum pipe VAR_5 = VAR_2->pipe;

 if (!(VAR_0->wm_results.dirty_pipes & FUNC_2(&VAR_2->base)))
  return;

 FUNC_0(FUNC_1(VAR_5), VAR_4->linetime);
}
