
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct preempt_smoke {int engine; } ;
struct TYPE_6__ {int start; } ;
struct i915_vma {TYPE_3__ node; TYPE_2__* engine; int obj; } ;
struct i915_request {TYPE_3__ node; TYPE_2__* engine; int obj; } ;
struct TYPE_4__ {int priority; } ;
struct i915_gem_context {TYPE_1__ sched; int vm; } ;
struct drm_i915_gem_object {int dummy; } ;
struct TYPE_5__ {int (* emit_bb_start ) (struct i915_vma*,int ,int ,int ) ;} ;


 scalar_t__ FUNC_0 (struct i915_vma*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct i915_vma*) ;
 int FUNC_2 (struct i915_vma*) ;
 int FUNC_3 (struct i915_vma*,int ,int) ;
 struct i915_vma* FUNC_4 (struct drm_i915_gem_object*,int ,int *) ;
 int FUNC_5 (struct i915_vma*) ;
 int FUNC_6 (struct i915_vma*,struct i915_vma*,int ) ;
 int FUNC_7 (struct i915_vma*,int ,int ,int ) ;
 int FUNC_8 (struct i915_vma*) ;
 int FUNC_9 (struct i915_vma*) ;
 struct i915_vma* FUNC_10 (struct i915_gem_context*,int ) ;
 int FUNC_11 (struct i915_vma*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct preempt_smoke *VAR_2,
   struct i915_gem_context *VAR_3, int VAR_4,
   struct drm_i915_gem_object *VAR_5)
{
 struct i915_request *VAR_6;
 struct i915_vma *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 if (VAR_5) {
  VAR_7 = FUNC_4(VAR_5, VAR_3->vm, ((void*)0));
  if (FUNC_0(VAR_7))
   return FUNC_1(VAR_7);

  VAR_8 = FUNC_7(VAR_7, 0, 0, VAR_1);
  if (VAR_8)
   return VAR_8;
 }

 VAR_3->sched.priority = VAR_4;

 VAR_6 = FUNC_10(VAR_3, VAR_2->engine);
 if (FUNC_0(VAR_6)) {
  VAR_8 = FUNC_1(VAR_6);
  goto unpin;
 }

 if (VAR_7) {
  FUNC_5(VAR_7);
  VAR_8 = FUNC_3(VAR_6, VAR_7->obj, 0);
  if (!VAR_8)
   VAR_8 = FUNC_6(VAR_7, VAR_6, 0);
  if (!VAR_8)
   VAR_8 = VAR_6->engine->emit_bb_start(VAR_6,
       VAR_7->node.start,
       VAR_0, 0);
  FUNC_8(VAR_7);
 }

 FUNC_2(VAR_6);

unpin:
 if (VAR_7)
  FUNC_9(VAR_7);

 return VAR_8;
}
