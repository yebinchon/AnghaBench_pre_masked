
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int start; } ;
struct intel_engine_pool_node {int obj; struct intel_engine_pool_node* batch; TYPE_2__ node; int vm; } ;
typedef struct intel_engine_pool_node u32 ;
struct reloc_cache {int gen; scalar_t__ rq_size; struct intel_engine_pool_node* rq_cmd; struct intel_engine_pool_node* rq; scalar_t__ has_llc; } ;
struct i915_vma {int obj; struct i915_vma* batch; TYPE_2__ node; int vm; } ;
struct i915_request {int obj; struct i915_request* batch; TYPE_2__ node; int vm; } ;
struct i915_execbuffer {TYPE_1__* engine; int context; struct reloc_cache reloc_cache; } ;
struct TYPE_3__ {int (* emit_bb_start ) (struct intel_engine_pool_node*,int ,int ,int ) ;int pool; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct intel_engine_pool_node*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct intel_engine_pool_node*) ;
 struct intel_engine_pool_node* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct intel_engine_pool_node*) ;
 int FUNC_5 (struct intel_engine_pool_node*,int ,int) ;
 struct intel_engine_pool_node* FUNC_6 (int ) ;
 int FUNC_7 (struct intel_engine_pool_node*,int) ;
 struct intel_engine_pool_node* FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (struct intel_engine_pool_node*) ;
 int FUNC_10 (struct intel_engine_pool_node*,struct intel_engine_pool_node*,int ) ;
 int FUNC_11 (struct intel_engine_pool_node*,int ,int ,int) ;
 int FUNC_12 (struct intel_engine_pool_node*) ;
 int FUNC_13 (struct intel_engine_pool_node*) ;
 struct intel_engine_pool_node* FUNC_14 (int *,int ) ;
 int FUNC_15 (struct intel_engine_pool_node*,struct intel_engine_pool_node*) ;
 int FUNC_16 (struct intel_engine_pool_node*) ;
 int FUNC_17 (struct intel_engine_pool_node*,struct intel_engine_pool_node*) ;
 int FUNC_18 (struct intel_engine_pool_node*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_19(struct i915_execbuffer *VAR_6,
        struct i915_vma *VAR_7,
        unsigned int VAR_8)
{
 struct reloc_cache *VAR_9 = &VAR_6->reloc_cache;
 struct intel_engine_pool_node *VAR_10;
 struct i915_request *VAR_11;
 struct i915_vma *VAR_12;
 u32 *VAR_13;
 int VAR_14;

 VAR_10 = FUNC_14(&VAR_6->engine->pool, VAR_3);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 VAR_13 = FUNC_2(VAR_10->obj,
          VAR_9->has_llc ?
          VAR_1 :
          VAR_2);
 if (FUNC_0(VAR_13)) {
  VAR_14 = FUNC_1(VAR_13);
  goto out_pool;
 }

 VAR_12 = FUNC_8(VAR_10->obj, VAR_7->vm, ((void*)0));
 if (FUNC_0(VAR_12)) {
  VAR_14 = FUNC_1(VAR_12);
  goto err_unmap;
 }

 VAR_14 = FUNC_11(VAR_12, 0, 0, VAR_5 | VAR_4);
 if (VAR_14)
  goto err_unmap;

 VAR_11 = FUNC_6(VAR_6->context);
 if (FUNC_0(VAR_11)) {
  VAR_14 = FUNC_1(VAR_11);
  goto err_unpin;
 }

 VAR_14 = FUNC_15(VAR_10, VAR_11);
 if (VAR_14)
  goto err_request;

 VAR_14 = FUNC_17(VAR_11, VAR_7);
 if (VAR_14)
  goto err_request;

 VAR_14 = VAR_6->engine->emit_bb_start(VAR_11,
     VAR_12->node.start, VAR_3,
     VAR_9->gen > 5 ? 0 : VAR_0);
 if (VAR_14)
  goto skip_request;

 FUNC_9(VAR_12);
 VAR_14 = FUNC_5(VAR_11, VAR_12->obj, 0);
 if (VAR_14 == 0)
  VAR_14 = FUNC_10(VAR_12, VAR_11, 0);
 FUNC_12(VAR_12);
 if (VAR_14)
  goto skip_request;

 VAR_11->batch = VAR_12;
 FUNC_13(VAR_12);

 VAR_9->rq = VAR_11;
 VAR_9->rq_cmd = VAR_13;
 VAR_9->rq_size = 0;


 goto out_pool;

skip_request:
 FUNC_7(VAR_11, VAR_14);
err_request:
 FUNC_4(VAR_11);
err_unpin:
 FUNC_13(VAR_12);
err_unmap:
 FUNC_3(VAR_10->obj);
out_pool:
 FUNC_16(VAR_10);
 return VAR_14;
}
