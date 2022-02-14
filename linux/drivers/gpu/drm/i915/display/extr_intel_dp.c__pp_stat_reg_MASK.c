
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pps_registers {int pp_stat; } ;
struct intel_dp {int dummy; } ;
typedef int i915_reg_t ;


 int FUNC_0 (struct intel_dp*,struct pps_registers*) ;

__attribute__((used)) static i915_reg_t
FUNC_1(struct intel_dp *VAR_0)
{
 struct pps_registers VAR_1;

 FUNC_0(VAR_0, &VAR_1);

 return VAR_1.pp_stat;
}
