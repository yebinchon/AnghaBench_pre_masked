
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct intel_renderstate {int batch_size; int aux_size; TYPE_4__* obj; TYPE_4__* vma; int aux_offset; int batch_offset; TYPE_3__* rodata; } ;
struct intel_engine_cs {int (* emit_bb_start ) (struct i915_request*,int ,int,int ) ;TYPE_2__* gt; int i915; } ;
struct i915_request {int i915; struct intel_engine_cs* engine; } ;
struct TYPE_19__ {int obj; } ;
struct TYPE_18__ {int batch_items; } ;
struct TYPE_17__ {TYPE_1__* ggtt; } ;
struct TYPE_16__ {int vm; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_4__* FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (struct i915_request*,int ,int) ;
 int FUNC_5 (TYPE_4__*) ;
 TYPE_4__* FUNC_6 (TYPE_4__*,int *,int *) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,struct i915_request*,int ) ;
 int FUNC_9 (TYPE_4__*,int ,int ,int) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 TYPE_3__* FUNC_12 (struct intel_engine_cs*) ;
 int FUNC_13 (struct intel_renderstate*,int ) ;
 int FUNC_14 (struct i915_request*,int ,int,int ) ;
 int FUNC_15 (struct i915_request*,int ,int,int ) ;

int FUNC_16(struct i915_request *VAR_5)
{
 struct intel_engine_cs *VAR_6 = VAR_5->engine;
 struct intel_renderstate VAR_7 = {};
 int VAR_8;

 VAR_7.rodata = FUNC_12(VAR_6);
 if (!VAR_7.rodata)
  return 0;

 if (VAR_7.rodata->batch_items * 4 > VAR_2)
  return -VAR_0;

 VAR_7.obj = FUNC_2(VAR_6->i915, VAR_2);
 if (FUNC_0(VAR_7.obj))
  return FUNC_1(VAR_7.obj);

 VAR_7.vma = FUNC_6(VAR_7.obj, &VAR_6->gt->ggtt->vm, ((void*)0));
 if (FUNC_0(VAR_7.vma)) {
  VAR_8 = FUNC_1(VAR_7.vma);
  goto err_obj;
 }

 VAR_8 = FUNC_9(VAR_7.vma, 0, 0, VAR_3 | VAR_4);
 if (VAR_8)
  goto err_vma;

 VAR_8 = FUNC_13(&VAR_7, VAR_5->i915);
 if (VAR_8)
  goto err_unpin;

 VAR_8 = VAR_6->emit_bb_start(VAR_5,
        VAR_7.batch_offset, VAR_7.batch_size,
        VAR_1);
 if (VAR_8)
  goto err_unpin;

 if (VAR_7.aux_size > 8) {
  VAR_8 = VAR_6->emit_bb_start(VAR_5,
         VAR_7.aux_offset, VAR_7.aux_size,
         VAR_1);
  if (VAR_8)
   goto err_unpin;
 }

 FUNC_7(VAR_7.vma);
 VAR_8 = FUNC_4(VAR_5, VAR_7.vma->obj, 0);
 if (VAR_8 == 0)
  VAR_8 = FUNC_8(VAR_7.vma, VAR_5, 0);
 FUNC_10(VAR_7.vma);
err_unpin:
 FUNC_11(VAR_7.vma);
err_vma:
 FUNC_5(VAR_7.vma);
err_obj:
 FUNC_3(VAR_7.obj);
 return VAR_8;
}
