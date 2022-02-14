
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct intel_engine_cs {int (* emit_init_breadcrumb ) (struct i915_vma*) ;int (* emit_bb_start ) (struct i915_vma*,int ,int ,int ) ;int gt; } ;
struct intel_context {TYPE_4__* vm; struct intel_engine_cs* engine; } ;
struct igt_spinner {scalar_t__ gt; int * batch; int hws; int obj; } ;
struct TYPE_7__ {int start; } ;
struct TYPE_5__ {int seqno; } ;
struct i915_vma {TYPE_3__ node; TYPE_2__* timeline; TYPE_1__ fence; } ;
struct i915_request {TYPE_3__ node; TYPE_2__* timeline; TYPE_1__ fence; } ;
struct TYPE_8__ {scalar_t__ gt; } ;
struct TYPE_6__ {scalar_t__ has_initial_breadcrumb; } ;


 struct i915_vma* FUNC_0 (struct i915_vma*) ;
 struct i915_vma* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct i915_vma*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct i915_vma*) ;
 int FUNC_5 (struct i915_vma*,struct i915_vma*) ;
 int FUNC_6 (struct i915_vma*) ;
 int FUNC_7 (struct i915_vma*,int) ;
 struct i915_vma* FUNC_8 (int ,TYPE_4__*,int *) ;
 int FUNC_9 (struct i915_vma*,int ,int ,int ) ;
 int FUNC_10 (struct i915_vma*) ;
 struct i915_vma* FUNC_11 (struct intel_context*) ;
 int FUNC_12 (int ) ;
 void* FUNC_13 (int ) ;
 int FUNC_14 (struct i915_vma*,struct i915_vma*,int ) ;
 int FUNC_15 (struct i915_vma*) ;
 int FUNC_16 (struct i915_vma*,int ,int ,int ) ;
 void* FUNC_17 (int ) ;

struct i915_request *
FUNC_18(struct igt_spinner *VAR_5,
      struct intel_context *VAR_6,
      u32 VAR_7)
{
 struct intel_engine_cs *VAR_8 = VAR_6->engine;
 struct i915_request *VAR_9 = ((void*)0);
 struct i915_vma *VAR_10, *VAR_11;
 u32 *VAR_12;
 int VAR_13;

 FUNC_2(VAR_5->gt != VAR_6->vm->gt);

 VAR_11 = FUNC_8(VAR_5->obj, VAR_6->vm, ((void*)0));
 if (FUNC_3(VAR_11))
  return FUNC_0(VAR_11);

 VAR_10 = FUNC_8(VAR_5->hws, VAR_6->vm, ((void*)0));
 if (FUNC_3(VAR_10))
  return FUNC_0(VAR_10);

 VAR_13 = FUNC_9(VAR_11, 0, 0, VAR_4);
 if (VAR_13)
  return FUNC_1(VAR_13);

 VAR_13 = FUNC_9(VAR_10, 0, 0, VAR_4);
 if (VAR_13)
  goto unpin_vma;

 VAR_9 = FUNC_11(VAR_6);
 if (FUNC_3(VAR_9)) {
  VAR_13 = FUNC_4(VAR_9);
  goto unpin_hws;
 }

 VAR_13 = FUNC_14(VAR_11, VAR_9, 0);
 if (VAR_13)
  goto cancel_rq;

 VAR_13 = FUNC_14(VAR_10, VAR_9, 0);
 if (VAR_13)
  goto cancel_rq;

 VAR_12 = VAR_5->batch;

 *VAR_12++ = VAR_2;
 *VAR_12++ = FUNC_13(FUNC_5(VAR_10, VAR_9));
 *VAR_12++ = FUNC_17(FUNC_5(VAR_10, VAR_9));
 *VAR_12++ = VAR_9->fence.seqno;

 *VAR_12++ = VAR_7;

 *VAR_12++ = VAR_1 | 1 << 8 | 1;
 *VAR_12++ = FUNC_13(VAR_11->node.start);
 *VAR_12++ = FUNC_17(VAR_11->node.start);
 *VAR_12++ = VAR_0;

 FUNC_12(VAR_8->gt);

 if (VAR_8->emit_init_breadcrumb &&
     VAR_9->timeline->has_initial_breadcrumb) {
  VAR_13 = VAR_8->emit_init_breadcrumb(VAR_9);
  if (VAR_13)
   goto cancel_rq;
 }

 VAR_13 = VAR_8->emit_bb_start(VAR_9, VAR_11->node.start, VAR_3, 0);

cancel_rq:
 if (VAR_13) {
  FUNC_7(VAR_9, VAR_13);
  FUNC_6(VAR_9);
 }
unpin_hws:
 FUNC_10(VAR_10);
unpin_vma:
 FUNC_10(VAR_11);
 return VAR_13 ? FUNC_1(VAR_13) : VAR_9;
}
