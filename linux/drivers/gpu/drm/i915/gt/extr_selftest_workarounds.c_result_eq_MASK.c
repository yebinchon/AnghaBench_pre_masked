
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct intel_engine_cs {int i915; } ;
typedef int i915_reg_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_3(struct intel_engine_cs *VAR_0,
        u32 VAR_1, u32 VAR_2, i915_reg_t VAR_3)
{
 if (VAR_1 != VAR_2 && !FUNC_1(VAR_0->i915, VAR_3)) {
  FUNC_2("Whitelisted register 0x%4x not context saved: A=%08x, B=%08x\n",
         FUNC_0(VAR_3), VAR_1, VAR_2);
  return 0;
 }

 return 1;
}
