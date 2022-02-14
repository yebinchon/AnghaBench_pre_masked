
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sys_reg_params {int regval; scalar_t__ is_write; } ;
struct sys_reg_desc {int CRn; int CRm; int Op2; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int) ;
 int FUNC_3 (struct kvm_vcpu*,int,int ) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_5 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*,int) ;
 int FUNC_8 (struct kvm_vcpu*,struct sys_reg_params*,struct sys_reg_desc const*) ;

__attribute__((used)) static bool FUNC_9(struct kvm_vcpu *VAR_3,
         struct sys_reg_params *VAR_4,
         const struct sys_reg_desc *VAR_5)
{
 u64 VAR_6;

 if (!FUNC_1(VAR_3))
  return FUNC_8(VAR_3, VAR_4, VAR_5);

 if (VAR_5->CRn == 9 && VAR_5->CRm == 13) {
  if (VAR_5->Op2 == 2) {

   if (FUNC_6(VAR_3))
    return 0;

   VAR_6 = FUNC_0(VAR_3, VAR_2)
         & VAR_0;
  } else if (VAR_5->Op2 == 0) {

   if (FUNC_4(VAR_3))
    return 0;

   VAR_6 = VAR_1;
  } else {
   return 0;
  }
 } else if (VAR_5->CRn == 0 && VAR_5->CRm == 9) {

  if (FUNC_6(VAR_3))
   return 0;

  VAR_6 = VAR_1;
 } else if (VAR_5->CRn == 14 && (VAR_5->CRm & 12) == 8) {

  if (FUNC_6(VAR_3))
   return 0;

  VAR_6 = ((VAR_5->CRm & 3) << 3) | (VAR_5->Op2 & 7);
 } else {
  return 0;
 }

 if (!FUNC_7(VAR_3, VAR_6))
  return 0;

 if (VAR_4->is_write) {
  if (FUNC_5(VAR_3))
   return 0;

  FUNC_3(VAR_3, VAR_6, VAR_4->regval);
 } else {
  VAR_4->regval = FUNC_2(VAR_3, VAR_6);
 }

 return 1;
}
