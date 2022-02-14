
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* state; int dev; } ;
struct TYPE_7__ {TYPE_3__ base; } ;
struct intel_sdvo_connector {TYPE_2__ base; } ;
struct intel_sdvo {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_6__ {int picture_aspect_ratio; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct intel_sdvo *VAR_1,
          struct intel_sdvo_connector *VAR_2)
{
 struct drm_i915_private *VAR_3 = FUNC_5(VAR_2->base.base.dev);

 FUNC_4(&VAR_2->base.base);
 if (FUNC_0(VAR_3) >= 4 && FUNC_1(VAR_3)) {
  FUNC_3(&VAR_2->base.base);
 }
 FUNC_2(&VAR_2->base.base);
 VAR_2->base.base.state->picture_aspect_ratio = VAR_0;
}
