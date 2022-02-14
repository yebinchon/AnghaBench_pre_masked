
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct intel_engine_cs {int (* emit_bb_start ) (struct i915_vma*,int ,int ,unsigned int) ;TYPE_2__* gt; } ;
struct TYPE_6__ {int size; int start; } ;
struct i915_vma {scalar_t__ size; int obj; TYPE_3__ node; } ;
struct i915_request {scalar_t__ size; int obj; TYPE_3__ node; } ;
struct i915_gem_context {int vm; } ;
struct i915_address_space {scalar_t__ total; int i915; } ;
struct TYPE_5__ {TYPE_1__* ggtt; } ;
struct TYPE_4__ {struct i915_address_space vm; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct i915_vma*) ;
 int FUNC_3 (struct i915_vma*) ;
 int FUNC_4 (struct i915_vma*) ;
 int FUNC_5 (struct i915_vma*,int ,int) ;
 int FUNC_6 (struct i915_vma*,int) ;
 int FUNC_7 (struct i915_vma*) ;
 int FUNC_8 (struct i915_vma*) ;
 int FUNC_9 (struct i915_vma*) ;
 int FUNC_10 (struct i915_vma*,struct i915_vma*,int ) ;
 int FUNC_11 (struct i915_vma*) ;
 int FUNC_12 (struct i915_vma*) ;
 int FUNC_13 (struct i915_vma*) ;
 struct i915_vma* FUNC_14 (struct i915_vma*,int ,unsigned long,int ) ;
 struct i915_vma* FUNC_15 (struct i915_gem_context*,struct intel_engine_cs*) ;
 int FUNC_16 (struct intel_engine_cs*) ;
 int FUNC_17 (struct i915_vma*,int ,int ,unsigned int) ;

int FUNC_18(struct i915_vma *VAR_2,
      struct i915_gem_context *VAR_3,
      struct intel_engine_cs *VAR_4,
      u64 VAR_5,
      unsigned long VAR_6,
      u32 VAR_7)
{
 struct i915_address_space *VAR_8 = VAR_3->vm ?: &VAR_4->gt->ggtt->vm;
 struct i915_request *VAR_9;
 struct i915_vma *VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 FUNC_0(VAR_2->size > VAR_8->total);
 FUNC_0(!FUNC_16(VAR_4));
 FUNC_0(!FUNC_8(VAR_2));

 VAR_10 = FUNC_14(VAR_2, VAR_5, VAR_6, VAR_7);
 if (FUNC_2(VAR_10))
  return FUNC_3(VAR_10);

 VAR_9 = FUNC_15(VAR_3, VAR_4);
 if (FUNC_2(VAR_9)) {
  VAR_12 = FUNC_3(VAR_9);
  goto err_batch;
 }

 VAR_11 = 0;
 if (FUNC_1(VAR_8->i915) <= 5)
  VAR_11 |= VAR_1;

 VAR_12 = VAR_4->emit_bb_start(VAR_9,
        VAR_10->node.start, VAR_10->node.size,
        VAR_11);
 if (VAR_12)
  goto err_request;

 FUNC_9(VAR_10);
 VAR_12 = FUNC_5(VAR_9, VAR_10->obj, 0);
 if (VAR_12 == 0)
  VAR_12 = FUNC_10(VAR_10, VAR_9, 0);
 FUNC_12(VAR_10);
 if (VAR_12)
  goto skip_request;

 FUNC_9(VAR_2);
 VAR_12 = FUNC_5(VAR_9, VAR_2->obj, 1);
 if (VAR_12 == 0)
  VAR_12 = FUNC_10(VAR_2, VAR_9, VAR_0);
 FUNC_12(VAR_2);
 if (VAR_12)
  goto skip_request;

 FUNC_4(VAR_9);

 FUNC_13(VAR_10);
 FUNC_7(VAR_10);
 FUNC_11(VAR_10);

 return 0;

skip_request:
 FUNC_6(VAR_9, VAR_12);
err_request:
 FUNC_4(VAR_9);
err_batch:
 FUNC_13(VAR_10);
 FUNC_11(VAR_10);
 return VAR_12;
}
