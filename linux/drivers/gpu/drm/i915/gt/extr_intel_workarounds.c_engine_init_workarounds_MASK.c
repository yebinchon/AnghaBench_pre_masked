
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {scalar_t__ class; int i915; } ;
struct i915_wa_list {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct intel_engine_cs*,struct i915_wa_list*) ;
 int FUNC_3 (struct intel_engine_cs*,struct i915_wa_list*) ;

__attribute__((used)) static void
FUNC_4(struct intel_engine_cs *VAR_1, struct i915_wa_list *VAR_2)
{
 if (FUNC_0(FUNC_1(VAR_1->i915) < 8))
  return;

 if (VAR_1->class == VAR_0)
  FUNC_2(VAR_1, VAR_2);
 else
  FUNC_3(VAR_1, VAR_2);
}
