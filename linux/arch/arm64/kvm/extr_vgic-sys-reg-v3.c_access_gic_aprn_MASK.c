
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sys_reg_params {scalar_t__ regval; int is_write; } ;
struct sys_reg_desc {int Op2; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*,struct sys_reg_params*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static bool FUNC_2(struct kvm_vcpu *VAR_0, struct sys_reg_params *VAR_1,
       const struct sys_reg_desc *VAR_2, u8 VAR_3)
{
 u8 VAR_4 = VAR_2->Op2 & 3;

 if (VAR_4 > FUNC_1(VAR_0))
  goto err;

 FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4);
 return 1;
err:
 if (!VAR_1->is_write)
  VAR_1->regval = 0;

 return 0;
}
