
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sys_reg_params {int regval; scalar_t__ is_32bit; } ;
struct kvm_vcpu {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct kvm_vcpu *VAR_0,
         struct sys_reg_params *VAR_1,
         u64 *VAR_2)
{
 VAR_1->regval = *VAR_2;
 if (VAR_1->is_32bit)
  VAR_1->regval &= 0xffffffffUL;
}
