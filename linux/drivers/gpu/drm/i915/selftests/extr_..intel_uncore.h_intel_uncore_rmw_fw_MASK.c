
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore {int dummy; } ;
typedef int i915_reg_t ;


 int FUNC_0 (struct intel_uncore*,int ) ;
 int FUNC_1 (struct intel_uncore*,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct intel_uncore *VAR_0,
           i915_reg_t VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 VAR_4 &= ~VAR_2;
 VAR_4 |= VAR_3;
 FUNC_1(VAR_0, VAR_1, VAR_4);
}
