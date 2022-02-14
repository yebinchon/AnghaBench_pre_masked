
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct skl_ddb_values {int dirty_pipes; } ;
struct TYPE_5__ {scalar_t__ active_changed; int crtc; } ;
struct intel_crtc_state {TYPE_2__ base; } ;
struct TYPE_6__ {struct drm_device* dev; } ;
struct intel_crtc {TYPE_3__ base; } ;
struct intel_atomic_state {struct skl_ddb_values wm_results; } ;
struct TYPE_4__ {int wm_mutex; } ;
struct drm_i915_private {TYPE_1__ wm; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct intel_atomic_state*,struct intel_crtc_state*) ;
 struct drm_i915_private* FUNC_4 (struct drm_device*) ;
 struct intel_crtc* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct intel_atomic_state *VAR_0,
      struct intel_crtc_state *VAR_1)
{
 struct intel_crtc *VAR_2 = FUNC_5(VAR_1->base.crtc);
 struct drm_device *VAR_3 = VAR_2->base.dev;
 struct drm_i915_private *VAR_4 = FUNC_4(VAR_3);
 struct skl_ddb_values *VAR_5 = &VAR_0->wm_results;

 if ((VAR_5->dirty_pipes & FUNC_0(&VAR_2->base)) == 0)
  return;

 FUNC_1(&VAR_4->wm.wm_mutex);

 if (VAR_1->base.active_changed)
  FUNC_3(VAR_0, VAR_1);

 FUNC_2(&VAR_4->wm.wm_mutex);
}
