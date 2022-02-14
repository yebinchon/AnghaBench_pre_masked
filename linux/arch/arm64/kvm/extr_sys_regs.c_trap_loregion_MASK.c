
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct sys_reg_params {scalar_t__ is_write; } ;
struct sys_reg_desc {scalar_t__ Op2; scalar_t__ CRm; scalar_t__ CRn; scalar_t__ Op1; scalar_t__ Op0; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct kvm_vcpu*,struct sys_reg_params*,struct sys_reg_desc const*) ;
 int FUNC_4 (struct kvm_vcpu*,struct sys_reg_params*,struct sys_reg_desc const*) ;

__attribute__((used)) static bool FUNC_5(struct kvm_vcpu *VAR_3,
     struct sys_reg_params *VAR_4,
     const struct sys_reg_desc *VAR_5)
{
 u64 VAR_6 = FUNC_1(VAR_1);
 u32 VAR_7 = FUNC_2((u32)VAR_5->Op0, (u32)VAR_5->Op1,
    (u32)VAR_5->CRn, (u32)VAR_5->CRm, (u32)VAR_5->Op2);

 if (!(VAR_6 & (0xfUL << VAR_0))) {
  FUNC_0(VAR_3);
  return 0;
 }

 if (VAR_4->is_write && VAR_7 == VAR_2)
  return FUNC_4(VAR_3, VAR_4, VAR_5);

 return FUNC_3(VAR_3, VAR_4, VAR_5);
}
