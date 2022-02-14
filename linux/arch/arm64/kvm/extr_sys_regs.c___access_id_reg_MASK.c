
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_reg_params {int regval; scalar_t__ is_write; } ;
struct sys_reg_desc {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*,struct sys_reg_desc const*,int) ;
 int FUNC_1 (struct kvm_vcpu*,struct sys_reg_params*,struct sys_reg_desc const*) ;

__attribute__((used)) static bool FUNC_2(struct kvm_vcpu *VAR_0,
       struct sys_reg_params *VAR_1,
       const struct sys_reg_desc *VAR_2,
       bool VAR_3)
{
 if (VAR_1->is_write)
  return FUNC_1(VAR_0, VAR_1, VAR_2);

 VAR_1->regval = FUNC_0(VAR_0, VAR_2, VAR_3);
 return 1;
}
