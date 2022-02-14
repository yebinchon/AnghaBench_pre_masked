
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_gem_context {int hw_id_link; int hw_id; struct drm_i915_private* i915; } ;
struct TYPE_2__ {int mutex; int hw_ida; } ;
struct drm_i915_private {TYPE_1__ contexts; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct i915_gem_context *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->i915;

 if (FUNC_2(&VAR_0->hw_id_link))
  return;

 FUNC_3(&VAR_1->contexts.mutex);
 if (!FUNC_2(&VAR_0->hw_id_link)) {
  FUNC_0(&VAR_1->contexts.hw_ida, VAR_0->hw_id);
  FUNC_1(&VAR_0->hw_id_link);
 }
 FUNC_4(&VAR_1->contexts.mutex);
}
