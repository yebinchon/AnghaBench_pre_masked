
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_3__ {int start; } ;
struct intel_engine_pool_node {int* exec_flags; struct intel_engine_pool_node* private; int obj; TYPE_1__ node; } ;
struct i915_vma {int* exec_flags; struct i915_vma* private; int obj; TYPE_1__ node; } ;
struct i915_execbuffer {size_t buffer_count; int* flags; int batch_flags; int i915; struct intel_engine_pool_node* batch; scalar_t__ batch_start_offset; int * vma; int batch_len; TYPE_2__* engine; int gem_context; } ;
struct TYPE_4__ {int pool; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 struct intel_engine_pool_node* FUNC_1 (struct intel_engine_pool_node*) ;
 struct intel_engine_pool_node* FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct intel_engine_pool_node*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct intel_engine_pool_node*) ;
 int FUNC_6 (struct intel_engine_pool_node*) ;
 int FUNC_7 (int ,TYPE_2__*,int ,scalar_t__,scalar_t__,int ,int ,scalar_t__) ;
 struct intel_engine_pool_node* FUNC_8 (int *,int ) ;
 int FUNC_9 (struct intel_engine_pool_node*) ;
 struct intel_engine_pool_node* FUNC_10 (struct i915_execbuffer*,int ) ;

__attribute__((used)) static struct i915_vma *FUNC_11(struct i915_execbuffer *VAR_4)
{
 struct intel_engine_pool_node *VAR_5;
 struct i915_vma *VAR_6;
 u64 VAR_7;
 u64 VAR_8;
 int VAR_9;

 VAR_5 = FUNC_8(&VAR_4->engine->pool, VAR_4->batch_len);
 if (FUNC_3(VAR_5))
  return FUNC_1(VAR_5);

 VAR_6 = FUNC_10(VAR_4, VAR_5->obj);
 if (FUNC_3(VAR_6))
  goto err;

 VAR_7 = FUNC_4(VAR_4->batch->node.start) +
        VAR_4->batch_start_offset;

 VAR_8 = FUNC_4(VAR_6->node.start);

 VAR_9 = FUNC_7(VAR_4->gem_context,
          VAR_4->engine,
          VAR_4->batch->obj,
          VAR_7,
          VAR_4->batch_start_offset,
          VAR_4->batch_len,
          VAR_5->obj,
          VAR_8);

 if (VAR_9) {
  FUNC_6(VAR_6);







  if (FUNC_0(VAR_4->i915) && (VAR_9 == -VAR_0))

   VAR_6 = ((void*)0);
  else
   VAR_6 = FUNC_2(VAR_9);
  goto err;
 }

 VAR_4->vma[VAR_4->buffer_count] = FUNC_5(VAR_6);
 VAR_4->flags[VAR_4->buffer_count] =
  VAR_2 | VAR_3;
 VAR_6->exec_flags = &VAR_4->flags[VAR_4->buffer_count];
 VAR_4->buffer_count++;

 VAR_4->batch_start_offset = 0;
 VAR_4->batch = VAR_6;

 if (FUNC_0(VAR_4->i915))
  VAR_4->batch_flags |= VAR_1;



 VAR_6->private = VAR_5;
 return VAR_6;

err:
 FUNC_9(VAR_5);
 return VAR_6;
}
