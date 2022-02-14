
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct intel_wm_level {void* fbc_val; void* cur_val; void* spr_val; void* pri_val; int enable; } ;
struct intel_pipe_wm {struct intel_wm_level* wm; int sprites_scaled; int sprites_enabled; int pipe_enabled; } ;
struct TYPE_6__ {struct intel_pipe_wm optimal; struct intel_pipe_wm intermediate; } ;
struct TYPE_7__ {int need_postvbl_update; TYPE_2__ ilk; } ;
struct TYPE_8__ {int active; int state; int crtc; } ;
struct intel_crtc_state {TYPE_3__ wm; TYPE_4__ base; } ;
struct TYPE_5__ {int dev; } ;
struct intel_crtc {TYPE_1__ base; } ;
struct intel_atomic_state {scalar_t__ skip_intermediate_wm; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct drm_i915_private*,struct intel_pipe_wm*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 struct intel_crtc_state* FUNC_3 (struct intel_atomic_state*,struct intel_crtc*) ;
 void* FUNC_4 (void*,void*) ;
 scalar_t__ FUNC_5 (struct intel_pipe_wm*,struct intel_pipe_wm*,int) ;
 struct drm_i915_private* FUNC_6 (int ) ;
 struct intel_atomic_state* FUNC_7 (int ) ;
 struct intel_crtc* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct intel_crtc_state *VAR_1)
{
 struct intel_crtc *VAR_2 = FUNC_8(VAR_1->base.crtc);
 struct drm_i915_private *VAR_3 = FUNC_6(VAR_2->base.dev);
 struct intel_pipe_wm *VAR_4 = &VAR_1->wm.ilk.intermediate;
 struct intel_atomic_state *VAR_5 =
  FUNC_7(VAR_1->base.state);
 const struct intel_crtc_state *VAR_6 =
  FUNC_3(VAR_5, VAR_2);
 const struct intel_pipe_wm *VAR_7 = &VAR_6->wm.ilk.optimal;
 int VAR_8, VAR_9 = FUNC_2(VAR_3);






 *VAR_4 = VAR_1->wm.ilk.optimal;
 if (!VAR_1->base.active || FUNC_0(&VAR_1->base) ||
     VAR_5->skip_intermediate_wm)
  return 0;

 VAR_4->pipe_enabled |= VAR_7->pipe_enabled;
 VAR_4->sprites_enabled |= VAR_7->sprites_enabled;
 VAR_4->sprites_scaled |= VAR_7->sprites_scaled;

 for (VAR_8 = 0; VAR_8 <= VAR_9; VAR_8++) {
  struct intel_wm_level *VAR_10 = &VAR_4->wm[VAR_8];
  const struct intel_wm_level *VAR_11 = &VAR_7->wm[VAR_8];

  VAR_10->enable &= VAR_11->enable;
  VAR_10->pri_val = FUNC_4(VAR_10->pri_val, VAR_11->pri_val);
  VAR_10->spr_val = FUNC_4(VAR_10->spr_val, VAR_11->spr_val);
  VAR_10->cur_val = FUNC_4(VAR_10->cur_val, VAR_11->cur_val);
  VAR_10->fbc_val = FUNC_4(VAR_10->fbc_val, VAR_11->fbc_val);
 }







 if (!FUNC_1(VAR_3, VAR_4))
  return -VAR_0;





 if (FUNC_5(VAR_4, &VAR_1->wm.ilk.optimal, sizeof(*VAR_4)) != 0)
  VAR_1->wm.need_postvbl_update = 1;

 return 0;
}
