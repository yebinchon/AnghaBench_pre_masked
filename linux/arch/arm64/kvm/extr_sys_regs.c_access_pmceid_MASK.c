
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sys_reg_params {int Op2; int regval; int is_write; } ;
struct sys_reg_desc {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct kvm_vcpu*,struct sys_reg_params*,struct sys_reg_desc const*) ;

__attribute__((used)) static bool FUNC_5(struct kvm_vcpu *VAR_2, struct sys_reg_params *VAR_3,
     const struct sys_reg_desc *VAR_4)
{
 u64 VAR_5;

 if (!FUNC_1(VAR_2))
  return FUNC_4(VAR_2, VAR_3, VAR_4);

 FUNC_0(VAR_3->is_write);

 if (FUNC_2(VAR_2))
  return 0;

 if (!(VAR_3->Op2 & 1))
  VAR_5 = FUNC_3(VAR_0);
 else
  VAR_5 = FUNC_3(VAR_1);

 VAR_3->regval = VAR_5;

 return 1;
}
