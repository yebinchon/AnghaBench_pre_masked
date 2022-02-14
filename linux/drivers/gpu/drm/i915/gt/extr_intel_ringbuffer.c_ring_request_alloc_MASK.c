
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_request {int reserved_space; TYPE_2__* engine; TYPE_1__* timeline; int hw_context; } ;
struct TYPE_4__ {int (* emit_flush ) (struct i915_request*,int ) ;} ;
struct TYPE_3__ {int has_initial_breadcrumb; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i915_request*,int ) ;
 int FUNC_3 (struct i915_request*) ;

__attribute__((used)) static int FUNC_4(struct i915_request *VAR_2)
{
 int VAR_3;

 FUNC_0(!FUNC_1(VAR_2->hw_context));
 FUNC_0(VAR_2->timeline->has_initial_breadcrumb);






 VAR_2->reserved_space += VAR_1;


 VAR_3 = VAR_2->engine->emit_flush(VAR_2, VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_2->reserved_space -= VAR_1;
 return 0;
}
