
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_modeset_acquire_ctx {int dummy; } ;
struct TYPE_6__ {int connection_mutex; } ;
struct TYPE_8__ {TYPE_2__ mode_config; } ;
struct drm_i915_private {TYPE_4__ drm; } ;
struct drm_atomic_state {struct drm_modeset_acquire_ctx* acquire_ctx; } ;
struct TYPE_5__ {int force_min_cdclk_changed; int force_min_cdclk; } ;
struct TYPE_7__ {TYPE_1__ cdclk; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_atomic_state*) ;
 struct drm_atomic_state* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct drm_atomic_state*) ;
 int FUNC_4 (struct drm_atomic_state*) ;
 int FUNC_5 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_6 (struct drm_modeset_acquire_ctx*,int ) ;
 int FUNC_7 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_8 (struct drm_modeset_acquire_ctx*) ;
 int FUNC_9 (int *,struct drm_modeset_acquire_ctx*) ;
 TYPE_3__* FUNC_10 (struct drm_atomic_state*) ;

__attribute__((used)) static void FUNC_11(struct drm_i915_private *VAR_1,
      bool VAR_2)
{
 struct drm_modeset_acquire_ctx VAR_3;
 struct drm_atomic_state *VAR_4;
 int VAR_5;

 FUNC_6(&VAR_3, 0);
 VAR_4 = FUNC_2(&VAR_1->drm);
 if (FUNC_0(!VAR_4))
  return;

 VAR_4->acquire_ctx = &VAR_3;

retry:
 FUNC_10(VAR_4)->cdclk.force_min_cdclk_changed = 1;
 FUNC_10(VAR_4)->cdclk.force_min_cdclk =
  VAR_2 ? 2 * 96000 : 0;






 VAR_5 = FUNC_9(&VAR_1->drm.mode_config.connection_mutex,
          &VAR_3);
 if (!VAR_5)
  VAR_5 = FUNC_1(VAR_4);

 if (VAR_5 == -VAR_0) {
  FUNC_3(VAR_4);
  FUNC_7(&VAR_3);
  goto retry;
 }

 FUNC_0(VAR_5);

 FUNC_4(VAR_4);

 FUNC_8(&VAR_3);
 FUNC_5(&VAR_3);
}
