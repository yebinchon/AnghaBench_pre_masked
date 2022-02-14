
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_reg_params {int dummy; } ;
struct sys_reg_desc {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 struct sys_reg_desc* FUNC_0 (struct sys_reg_params*,struct sys_reg_desc const*,size_t) ;
 int FUNC_1 (struct kvm_vcpu*,struct sys_reg_params*,struct sys_reg_desc const*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_0,
        struct sys_reg_params *VAR_1,
        const struct sys_reg_desc *VAR_2,
        size_t VAR_3)
{
 const struct sys_reg_desc *VAR_4;

 if (!VAR_2)
  return -1;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);

 if (VAR_4) {
  FUNC_1(VAR_0, VAR_1, VAR_4);
  return 0;
 }


 return -1;
}
