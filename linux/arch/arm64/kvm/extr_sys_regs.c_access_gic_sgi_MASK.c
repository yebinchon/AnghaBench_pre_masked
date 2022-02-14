
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_reg_params {int Op1; int Op2; int regval; scalar_t__ is_aarch32; int is_write; } ;
struct sys_reg_desc {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*,struct sys_reg_params*,struct sys_reg_desc const*) ;
 int FUNC_1 (struct kvm_vcpu*,int ,int) ;

__attribute__((used)) static bool FUNC_2(struct kvm_vcpu *VAR_0,
      struct sys_reg_params *VAR_1,
      const struct sys_reg_desc *VAR_2)
{
 bool VAR_3;

 if (!VAR_1->is_write)
  return FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_1->is_aarch32) {
  switch (VAR_1->Op1) {
  default:
  case 0:
   VAR_3 = 1;
   break;
  case 1:
  case 2:
   VAR_3 = 0;
   break;
  }
 } else {
  switch (VAR_1->Op2) {
  default:
  case 5:
   VAR_3 = 1;
   break;
  case 6:
  case 7:
   VAR_3 = 0;
   break;
  }
 }

 FUNC_1(VAR_0, VAR_1->regval, VAR_3);

 return 1;
}
