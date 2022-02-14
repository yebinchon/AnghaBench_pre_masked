
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_engine_cs {int (* emit_bb_start ) (struct i915_request*,int ,int ,int ) ;int kernel_context; } ;
struct TYPE_2__ {int size; int start; } ;
struct i915_vma {TYPE_1__ node; } ;
struct i915_request {int dummy; } ;


 struct i915_request* FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct i915_request*) ;
 int FUNC_2 (struct i915_request*) ;
 struct i915_request* FUNC_3 (int ) ;
 int FUNC_4 (struct i915_request*,int ,int ,int ) ;

__attribute__((used)) static struct i915_request *
FUNC_5(struct intel_engine_cs *VAR_1,
       struct i915_vma *VAR_2)
{
 struct i915_request *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_3(VAR_1->kernel_context);
 if (FUNC_1(VAR_3))
  return VAR_3;

 VAR_4 = VAR_1->emit_bb_start(VAR_3,
        VAR_2->node.start,
        VAR_2->node.size,
        VAR_0);
 if (VAR_4)
  goto out_request;

out_request:
 FUNC_2(VAR_3);
 return VAR_4 ? FUNC_0(VAR_4) : VAR_3;
}
