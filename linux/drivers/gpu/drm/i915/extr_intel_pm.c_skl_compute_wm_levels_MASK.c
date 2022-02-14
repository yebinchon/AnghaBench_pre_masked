
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skl_wm_params {int dummy; } ;
struct skl_wm_level {int dummy; } ;
struct TYPE_4__ {TYPE_1__* crtc; } ;
struct intel_crtc_state {TYPE_2__ base; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct intel_crtc_state const*,int,struct skl_wm_params const*,struct skl_wm_level*,struct skl_wm_level*) ;
 struct drm_i915_private* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(const struct intel_crtc_state *VAR_0,
        const struct skl_wm_params *VAR_1,
        struct skl_wm_level *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_2(VAR_0->base.crtc->dev);
 int VAR_4, VAR_5 = FUNC_0(VAR_3);
 struct skl_wm_level *VAR_6 = &VAR_2[0];

 for (VAR_4 = 0; VAR_4 <= VAR_5; VAR_4++) {
  struct skl_wm_level *VAR_7 = &VAR_2[VAR_4];

  FUNC_1(VAR_0, VAR_4, VAR_1,
         VAR_6, VAR_7);

  VAR_6 = VAR_7;
 }
}
