
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct intel_uncore {int dummy; } ;
typedef int i915_reg_t ;


 int FUNC_0 (int,char*,int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct intel_uncore*,int ) ;
 scalar_t__ FUNC_3 (struct intel_uncore*,int ) ;
 int FUNC_4 (struct intel_uncore*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct intel_uncore *VAR_0, i915_reg_t VAR_1)
{
 u32 VAR_2 = FUNC_3(VAR_0, VAR_1);

 if (VAR_2 == 0)
  return;

 FUNC_0(1, "Interrupt register 0x%x is not zero: 0x%08x\n",
      FUNC_1(VAR_1), VAR_2);
 FUNC_4(VAR_0, VAR_1, 0xffffffff);
 FUNC_2(VAR_0, VAR_1);
 FUNC_4(VAR_0, VAR_1, 0xffffffff);
 FUNC_2(VAR_0, VAR_1);
}
