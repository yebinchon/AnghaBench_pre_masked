
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct intel_uncore {int dummy; } ;
typedef int i915_reg_t ;


 scalar_t__ FUNC_0 (struct intel_uncore*,int ) ;

__attribute__((used)) static inline u64
FUNC_1(struct intel_uncore *VAR_0,
    i915_reg_t VAR_1, i915_reg_t VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5, VAR_6 = 0;
 VAR_3 = FUNC_0(VAR_0, VAR_2);
 do {
  VAR_5 = VAR_3;
  VAR_4 = FUNC_0(VAR_0, VAR_1);
  VAR_3 = FUNC_0(VAR_0, VAR_2);
 } while (VAR_3 != VAR_5 && VAR_6++ < 2);
 return (u64)VAR_3 << 32 | VAR_4;
}
