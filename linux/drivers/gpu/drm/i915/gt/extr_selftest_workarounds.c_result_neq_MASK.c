
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct intel_engine_cs {int i915; } ;
typedef int i915_reg_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static bool FUNC_3(struct intel_engine_cs *VAR_0,
         u32 VAR_1, u32 VAR_2, i915_reg_t VAR_3)
{
 if (VAR_1 == VAR_2 && !FUNC_2(VAR_0->i915, VAR_3)) {
  FUNC_1("Whitelist register 0x%4x:%08x was unwritable\n",
         FUNC_0(VAR_3), VAR_1);
  return 0;
 }

 return 1;
}
