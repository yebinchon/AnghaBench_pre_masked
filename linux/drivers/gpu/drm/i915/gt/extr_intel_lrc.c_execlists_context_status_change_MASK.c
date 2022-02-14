
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_request {TYPE_1__* engine; } ;
struct TYPE_2__ {int context_status_notifier; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long,struct i915_request*) ;

__attribute__((used)) static inline void
FUNC_2(struct i915_request *VAR_1, unsigned long VAR_2)
{




 if (!FUNC_0(VAR_0))
  return;

 FUNC_1(&VAR_1->engine->context_status_notifier,
       VAR_2, VAR_1);
}
