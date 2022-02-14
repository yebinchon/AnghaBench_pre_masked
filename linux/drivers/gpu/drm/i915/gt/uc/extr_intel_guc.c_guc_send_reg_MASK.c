
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int count; scalar_t__ base; } ;
struct intel_guc {TYPE_1__ send_regs; } ;
typedef int i915_reg_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline i915_reg_t FUNC_2(struct intel_guc *VAR_0, u32 VAR_1)
{
 FUNC_0(!VAR_0->send_regs.base);
 FUNC_0(!VAR_0->send_regs.count);
 FUNC_0(VAR_1 >= VAR_0->send_regs.count);

 return FUNC_1(VAR_0->send_regs.base + 4 * VAR_1);
}
