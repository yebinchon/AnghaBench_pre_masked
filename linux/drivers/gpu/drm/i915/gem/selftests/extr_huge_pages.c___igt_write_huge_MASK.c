
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u64 ;
typedef int u32 ;
struct intel_engine_cs {TYPE_2__* gt; } ;
struct i915_vma {int dummy; } ;
struct i915_gem_context {int vm; } ;
struct i915_address_space {int dummy; } ;
struct drm_i915_gem_object {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ggtt; } ;
struct TYPE_3__ {struct i915_address_space vm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct i915_vma*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct i915_vma*) ;
 int FUNC_2 (struct drm_i915_gem_object*,int ,int ) ;
 int FUNC_3 (struct i915_vma*,struct i915_gem_context*,struct intel_engine_cs*,int ,int ) ;
 scalar_t__ FUNC_4 (struct i915_address_space*) ;
 int FUNC_5 (struct i915_vma*) ;
 struct i915_vma* FUNC_6 (struct drm_i915_gem_object*,struct i915_address_space*,int *) ;
 int FUNC_7 (struct i915_vma*,unsigned int,int ,unsigned int) ;
 int FUNC_8 (struct i915_vma*) ;
 int FUNC_9 (struct i915_vma*) ;
 int FUNC_10 (struct i915_vma*) ;
 int FUNC_11 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_12(struct i915_gem_context *VAR_3,
       struct intel_engine_cs *VAR_4,
       struct drm_i915_gem_object *VAR_5,
       u64 VAR_6, u64 VAR_7,
       u32 VAR_8, u32 VAR_9)
{
 struct i915_address_space *VAR_10 = VAR_3->vm ?: &VAR_4->gt->ggtt->vm;
 unsigned int VAR_11 = VAR_2 | VAR_1;
 struct i915_vma *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_6(VAR_5, VAR_10, ((void*)0));
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 VAR_13 = FUNC_8(VAR_12);
 if (VAR_13)
  goto out_vma_close;

 VAR_13 = FUNC_7(VAR_12, VAR_6, 0, VAR_11 | VAR_7);
 if (VAR_13) {




  if (VAR_13 == -VAR_0 && FUNC_4(VAR_10))
   VAR_13 = 0;

  goto out_vma_close;
 }

 VAR_13 = FUNC_10(VAR_12);
 if (VAR_13)
  goto out_vma_unpin;

 VAR_13 = FUNC_3(VAR_12, VAR_3, VAR_4, VAR_8, VAR_9);
 if (VAR_13) {
  FUNC_11("gpu-write failed at offset=%llx\n", VAR_7);
  goto out_vma_unpin;
 }

 VAR_13 = FUNC_2(VAR_5, VAR_8, VAR_9);
 if (VAR_13) {
  FUNC_11("cpu-check failed at offset=%llx\n", VAR_7);
  goto out_vma_unpin;
 }

out_vma_unpin:
 FUNC_9(VAR_12);
out_vma_close:
 FUNC_5(VAR_12);

 return VAR_13;
}
