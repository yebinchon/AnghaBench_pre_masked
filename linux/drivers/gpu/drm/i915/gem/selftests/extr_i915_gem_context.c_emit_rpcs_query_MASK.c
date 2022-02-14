
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_context {int vm; int engine; } ;
struct TYPE_4__ {int size; int start; } ;
struct i915_vma {int obj; TYPE_2__ node; TYPE_1__* engine; } ;
struct i915_request {int obj; TYPE_2__ node; TYPE_1__* engine; } ;
struct drm_i915_gem_object {int dummy; } ;
struct TYPE_3__ {int (* emit_bb_start ) (struct i915_vma*,int ,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct i915_vma*) ;
 int VAR_1 ;
 int FUNC_2 (struct i915_vma*) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (struct drm_i915_gem_object*,int) ;
 int FUNC_5 (struct drm_i915_gem_object*) ;
 int FUNC_6 (struct i915_vma*) ;
 int FUNC_7 (struct i915_vma*,int ,int) ;
 struct i915_vma* FUNC_8 (struct intel_context*) ;
 struct i915_vma* FUNC_9 (struct i915_vma*) ;
 int FUNC_10 (struct i915_vma*,int) ;
 int FUNC_11 (struct i915_vma*) ;
 struct i915_vma* FUNC_12 (struct drm_i915_gem_object*,int ,int *) ;
 int FUNC_13 (struct i915_vma*) ;
 int FUNC_14 (struct i915_vma*,struct i915_vma*,int ) ;
 int FUNC_15 (struct i915_vma*,int ,int ,int ) ;
 int FUNC_16 (struct i915_vma*) ;
 int FUNC_17 (struct i915_vma*) ;
 int FUNC_18 (struct i915_vma*) ;
 int FUNC_19 (int ) ;
 struct i915_vma* FUNC_20 (struct i915_vma*) ;
 int FUNC_21 (struct i915_vma*,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_22(struct drm_i915_gem_object *VAR_2,
  struct intel_context *VAR_3,
  struct i915_request **VAR_4)
{
 struct i915_request *VAR_5;
 struct i915_vma *VAR_6;
 struct i915_vma *VAR_7;
 int VAR_8;

 FUNC_0(!FUNC_19(VAR_3->engine));

 VAR_7 = FUNC_12(VAR_2, VAR_3->vm, ((void*)0));
 if (FUNC_1(VAR_7))
  return FUNC_2(VAR_7);

 FUNC_3(VAR_2);
 VAR_8 = FUNC_4(VAR_2, 0);
 FUNC_5(VAR_2);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_15(VAR_7, 0, 0, VAR_1);
 if (VAR_8)
  return VAR_8;

 VAR_6 = FUNC_20(VAR_7);
 if (FUNC_1(VAR_6)) {
  VAR_8 = FUNC_2(VAR_6);
  goto err_vma;
 }

 VAR_5 = FUNC_8(VAR_3);
 if (FUNC_1(VAR_5)) {
  VAR_8 = FUNC_2(VAR_5);
  goto err_batch;
 }

 VAR_8 = VAR_5->engine->emit_bb_start(VAR_5,
     VAR_6->node.start, VAR_6->node.size,
     0);
 if (VAR_8)
  goto err_request;

 FUNC_13(VAR_6);
 VAR_8 = FUNC_7(VAR_5, VAR_6->obj, 0);
 if (VAR_8 == 0)
  VAR_8 = FUNC_14(VAR_6, VAR_5, 0);
 FUNC_17(VAR_6);
 if (VAR_8)
  goto skip_request;

 FUNC_13(VAR_7);
 VAR_8 = FUNC_7(VAR_5, VAR_7->obj, 1);
 if (VAR_8 == 0)
  VAR_8 = FUNC_14(VAR_7, VAR_5, VAR_0);
 FUNC_17(VAR_7);
 if (VAR_8)
  goto skip_request;

 FUNC_18(VAR_6);
 FUNC_11(VAR_6);
 FUNC_16(VAR_6);

 FUNC_18(VAR_7);

 *VAR_4 = FUNC_9(VAR_5);

 FUNC_6(VAR_5);

 return 0;

skip_request:
 FUNC_10(VAR_5, VAR_8);
err_request:
 FUNC_6(VAR_5);
err_batch:
 FUNC_18(VAR_6);
 FUNC_16(VAR_6);
err_vma:
 FUNC_18(VAR_7);

 return VAR_8;
}
