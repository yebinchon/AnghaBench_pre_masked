
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_wa_list {int dummy; } ;
struct intel_engine_cs {scalar_t__ class; struct i915_wa_list whitelist; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct i915_wa_list*) ;
 int FUNC_1 (struct i915_wa_list*,int ) ;

__attribute__((used)) static void FUNC_2(struct intel_engine_cs *VAR_2)
{
 struct i915_wa_list *VAR_3 = &VAR_2->whitelist;

 if (VAR_2->class != VAR_1)
  return;

 FUNC_0(VAR_3);


 FUNC_1(VAR_3, VAR_0);
}
