
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_gem_context {int hw_id_pin_count; int hw_id_link; int hw_id; struct drm_i915_private* i915; } ;
struct TYPE_2__ {int mutex; int hw_id_list; } ;
struct drm_i915_private {TYPE_1__ contexts; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_i915_private*,int *) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (struct i915_gem_context*) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct i915_gem_context *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->i915;
 int VAR_2 = 0;

 FUNC_7(&VAR_1->contexts.mutex);

 FUNC_0(FUNC_4(VAR_0));

 if (FUNC_6(&VAR_0->hw_id_link)) {
  FUNC_0(FUNC_3(&VAR_0->hw_id_pin_count));

  VAR_2 = FUNC_1(VAR_1, &VAR_0->hw_id);
  if (VAR_2)
   goto out_unlock;

  FUNC_5(&VAR_0->hw_id_link, &VAR_1->contexts.hw_id_list);
 }

 FUNC_0(FUNC_3(&VAR_0->hw_id_pin_count) == ~0u);
 FUNC_2(&VAR_0->hw_id_pin_count);

out_unlock:
 FUNC_8(&VAR_1->contexts.mutex);
 return VAR_2;
}
