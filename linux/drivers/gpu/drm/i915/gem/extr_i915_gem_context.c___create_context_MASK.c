
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_gem_engines {int dummy; } ;
struct TYPE_4__ {int priority; } ;
struct i915_gem_context {scalar_t__ jump_whitelist_cmds; int * jump_whitelist; scalar_t__* hang_timestamp; int remap_slice; int hw_id_link; int handles_vma; int engines; int engines_mutex; int mutex; TYPE_2__ sched; struct drm_i915_private* i915; int link; int ref; } ;
struct TYPE_3__ {int list; } ;
struct drm_i915_private {TYPE_1__ contexts; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct i915_gem_context* FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (struct i915_gem_engines*) ;
 int FUNC_7 (struct i915_gem_engines*) ;
 int FUNC_8 (int ,struct i915_gem_engines*) ;
 struct i915_gem_engines* FUNC_9 (struct i915_gem_context*) ;
 int FUNC_10 (struct i915_gem_context*) ;
 int FUNC_11 (struct i915_gem_context*) ;
 scalar_t__ VAR_4 ;
 int FUNC_12 (struct i915_gem_context*) ;
 int FUNC_13 (int *) ;
 struct i915_gem_context* FUNC_14 (int,int ) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static struct i915_gem_context *
FUNC_17(struct drm_i915_private *VAR_5)
{
 struct i915_gem_context *VAR_6;
 struct i915_gem_engines *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_6 = FUNC_14(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return FUNC_2(-VAR_1);

 FUNC_13(&VAR_6->ref);
 FUNC_15(&VAR_6->link, &VAR_5->contexts.list);
 VAR_6->i915 = VAR_5;
 VAR_6->sched.priority = FUNC_3(VAR_3);
 FUNC_16(&VAR_6->mutex);

 FUNC_16(&VAR_6->engines_mutex);
 VAR_7 = FUNC_9(VAR_6);
 if (FUNC_6(VAR_7)) {
  VAR_8 = FUNC_7(VAR_7);
  goto err_free;
 }
 FUNC_8(VAR_6->engines, VAR_7);

 FUNC_5(&VAR_6->handles_vma, VAR_2);
 FUNC_4(&VAR_6->hw_id_link);




 VAR_6->remap_slice = FUNC_0(VAR_5);

 FUNC_10(VAR_6);
 FUNC_11(VAR_6);

 for (VAR_9 = 0; VAR_9 < FUNC_1(VAR_6->hang_timestamp); VAR_9++)
  VAR_6->hang_timestamp[VAR_9] = VAR_4 - VAR_0;

 VAR_6->jump_whitelist = ((void*)0);
 VAR_6->jump_whitelist_cmds = 0;

 return VAR_6;

err_free:
 FUNC_12(VAR_6);
 return FUNC_2(VAR_8);
}
