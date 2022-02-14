
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct i915_oa_config {int flex_regs_len; TYPE_1__* flex_regs; } ;
typedef int i915_reg_t ;
struct TYPE_2__ {scalar_t__ value; int addr; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(const struct i915_oa_config *VAR_0,
         i915_reg_t VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_1);
 int VAR_3;






 if (!VAR_0)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_0->flex_regs_len; VAR_3++) {
  if (FUNC_0(VAR_0->flex_regs[VAR_3].addr) == VAR_2)
   return VAR_0->flex_regs[VAR_3].value;
 }

 return 0;
}
