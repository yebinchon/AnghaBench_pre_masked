
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sys_reg_params {int regval; int is_write; } ;
struct sys_reg_desc {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*,struct sys_reg_params*,struct sys_reg_desc const*) ;
 int FUNC_5 (struct kvm_vcpu*,struct sys_reg_params*,struct sys_reg_desc const*) ;

__attribute__((used)) static bool FUNC_6(struct kvm_vcpu *VAR_0, struct sys_reg_params *VAR_1,
      const struct sys_reg_desc *VAR_2)
{
 u64 VAR_3;

 if (!FUNC_0(VAR_0))
  return FUNC_5(VAR_0, VAR_1, VAR_2);

 if (!VAR_1->is_write)
  return FUNC_4(VAR_0, VAR_1, VAR_2);

 if (FUNC_3(VAR_0))
  return 0;

 VAR_3 = FUNC_2(VAR_0);
 FUNC_1(VAR_0, VAR_1->regval & VAR_3);
 return 1;
}
