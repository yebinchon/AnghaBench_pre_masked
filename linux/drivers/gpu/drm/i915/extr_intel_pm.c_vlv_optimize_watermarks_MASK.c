
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


struct TYPE_10__ {int optimal; } ;
struct TYPE_13__ {TYPE_3__ vlv; int need_postvbl_update; } ;
struct TYPE_12__ {TYPE_7__* crtc; } ;
struct intel_crtc_state {TYPE_6__ wm; TYPE_5__ base; } ;
struct TYPE_8__ {int vlv; } ;
struct TYPE_9__ {TYPE_1__ active; } ;
struct intel_crtc {TYPE_2__ wm; } ;
struct intel_atomic_state {int dummy; } ;
struct TYPE_11__ {int wm_mutex; } ;
struct drm_i915_private {TYPE_4__ wm; } ;
struct TYPE_14__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct drm_i915_private* FUNC_2 (int ) ;
 struct intel_crtc* FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_5(struct intel_atomic_state *VAR_0,
        struct intel_crtc_state *VAR_1)
{
 struct drm_i915_private *VAR_2 = FUNC_2(VAR_1->base.crtc->dev);
 struct intel_crtc *VAR_3 = FUNC_3(VAR_1->base.crtc);

 if (!VAR_1->wm.need_postvbl_update)
  return;

 FUNC_0(&VAR_2->wm.wm_mutex);
 VAR_3->wm.active.vlv = VAR_1->wm.vlv.optimal;
 FUNC_4(VAR_2);
 FUNC_1(&VAR_2->wm.wm_mutex);
}
