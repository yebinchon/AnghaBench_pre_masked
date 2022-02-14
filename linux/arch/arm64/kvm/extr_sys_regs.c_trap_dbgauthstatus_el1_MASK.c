
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_reg_params {int regval; scalar_t__ is_write; } ;
struct sys_reg_desc {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,struct sys_reg_params*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct kvm_vcpu *VAR_1,
       struct sys_reg_params *VAR_2,
       const struct sys_reg_desc *VAR_3)
{
 if (VAR_2->is_write) {
  return FUNC_0(VAR_1, VAR_2);
 } else {
  VAR_2->regval = FUNC_1(VAR_0);
  return 1;
 }
}
