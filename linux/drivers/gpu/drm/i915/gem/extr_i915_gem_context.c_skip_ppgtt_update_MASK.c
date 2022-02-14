
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_context {int pin_count; int state; TYPE_1__* engine; } ;
struct TYPE_2__ {int i915; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static bool FUNC_2(struct intel_context *VAR_0, void *VAR_1)
{
 if (FUNC_0(VAR_0->engine->i915))
  return !VAR_0->state;
 else
  return !FUNC_1(&VAR_0->pin_count);
}
