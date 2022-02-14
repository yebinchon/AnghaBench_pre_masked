
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_request {int reserved_space; TYPE_1__* engine; TYPE_2__* hw_context; } ;
struct TYPE_4__ {int vm; } ;
struct TYPE_3__ {int (* emit_flush ) (struct i915_request*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct i915_request*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (struct i915_request*,int ) ;

__attribute__((used)) static int FUNC_5(struct i915_request *VAR_2)
{
 int VAR_3;

 FUNC_0(!FUNC_3(VAR_2->hw_context));






 VAR_2->reserved_space += VAR_1;
 if (FUNC_2(VAR_2->hw_context->vm))
  VAR_3 = VAR_2->engine->emit_flush(VAR_2, VAR_0);
 else
  VAR_3 = FUNC_1(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_2->reserved_space -= VAR_1;
 return 0;
}
