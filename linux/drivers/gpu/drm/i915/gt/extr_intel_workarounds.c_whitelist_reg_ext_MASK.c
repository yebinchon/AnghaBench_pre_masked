
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct i915_wa_list {scalar_t__ count; } ;
struct TYPE_3__ {int reg; } ;
struct i915_wa {TYPE_1__ reg; } ;
typedef TYPE_1__ i915_reg_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct i915_wa_list*,struct i915_wa*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct i915_wa_list *VAR_1, i915_reg_t VAR_2, u32 VAR_3)
{
 struct i915_wa VAR_4 = {
  .reg = VAR_2
 };

 if (FUNC_0(VAR_1->count >= VAR_0))
  return;

 if (FUNC_0(!FUNC_2(VAR_3)))
  return;

 VAR_4.reg.reg |= VAR_3;
 FUNC_1(VAR_1, &VAR_4);
}
