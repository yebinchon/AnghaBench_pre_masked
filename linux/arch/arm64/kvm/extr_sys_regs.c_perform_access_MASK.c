
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_reg_params {int dummy; } ;
struct sys_reg_desc {int (* access ) (struct kvm_vcpu*,struct sys_reg_params*,struct sys_reg_desc const*) ;} ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct kvm_vcpu*,struct sys_reg_params*,struct sys_reg_desc const*) ;
 scalar_t__ FUNC_6 (struct kvm_vcpu*,struct sys_reg_desc const*) ;
 int FUNC_7 (int ,struct sys_reg_params*,struct sys_reg_desc const*) ;
 int * FUNC_8 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_9(struct kvm_vcpu *VAR_0,
      struct sys_reg_params *VAR_1,
      const struct sys_reg_desc *VAR_2)
{
 FUNC_7(*FUNC_8(VAR_0), VAR_1, VAR_2);


 if (FUNC_6(VAR_0, VAR_2)) {
  FUNC_1(VAR_0);
  return;
 }






 FUNC_0(!VAR_2->access);


 if (FUNC_4(VAR_2->access(VAR_0, VAR_1, VAR_2)))
  FUNC_2(VAR_0, FUNC_3(VAR_0));
}
