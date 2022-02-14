
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_wa_list {int dummy; } ;
struct intel_engine_cs {int name; int i915; struct i915_wa_list wa_list; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct intel_engine_cs*,struct i915_wa_list*) ;
 int FUNC_2 (struct i915_wa_list*) ;
 int FUNC_3 (struct i915_wa_list*,char*,int ) ;

void FUNC_4(struct intel_engine_cs *VAR_0)
{
 struct i915_wa_list *VAR_1 = &VAR_0->wa_list;

 if (FUNC_0(VAR_0->i915) < 8)
  return;

 FUNC_3(VAR_1, "engine", VAR_0->name);
 FUNC_1(VAR_0, VAR_1);
 FUNC_2(VAR_1);
}
