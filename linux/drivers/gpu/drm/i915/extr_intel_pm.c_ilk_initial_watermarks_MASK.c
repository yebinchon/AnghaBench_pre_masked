
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int intermediate; } ;
struct TYPE_11__ {TYPE_3__ ilk; } ;
struct TYPE_12__ {TYPE_7__* crtc; } ;
struct intel_crtc_state {TYPE_4__ wm; TYPE_5__ base; } ;
struct TYPE_8__ {int ilk; } ;
struct TYPE_9__ {TYPE_1__ active; } ;
struct intel_crtc {TYPE_2__ wm; } ;
struct intel_atomic_state {int dummy; } ;
struct TYPE_13__ {int wm_mutex; } ;
struct drm_i915_private {TYPE_6__ wm; } ;
struct TYPE_14__ {int dev; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct drm_i915_private* FUNC_3 (int ) ;
 struct intel_crtc* FUNC_4 (TYPE_7__*) ;

__attribute__((used)) static void FUNC_5(struct intel_atomic_state *VAR_0,
       struct intel_crtc_state *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_3(VAR_1->base.crtc->dev);
 struct intel_crtc *VAR_3 = FUNC_4(VAR_1->base.crtc);

 FUNC_1(&VAR_2->wm.wm_mutex);
 VAR_3->wm.active.ilk = VAR_1->wm.ilk.intermediate;
 FUNC_0(VAR_2);
 FUNC_2(&VAR_2->wm.wm_mutex);
}
