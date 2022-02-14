
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i915_wa_list {int dummy; } ;
struct i915_wa {int read; int val; int mask; int reg; } ;
typedef int i915_reg_t ;


 int FUNC_0 (struct i915_wa_list*,struct i915_wa*) ;

__attribute__((used)) static void
FUNC_1(struct i915_wa_list *VAR_0, i915_reg_t VAR_1, u32 VAR_2,
     u32 VAR_3)
{
 struct i915_wa VAR_4 = {
  .reg = VAR_1,
  .mask = VAR_2,
  .val = VAR_3,
  .read = VAR_2,
 };

 FUNC_0(VAR_0, &VAR_4);
}
