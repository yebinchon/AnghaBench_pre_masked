
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sys_reg_params {int is_aarch32; int is_32bit; int CRm; int is_write; int CRn; int Op1; int Op2; int regval; scalar_t__ Op0; } ;
struct sys_reg_desc {int dummy; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*,struct sys_reg_params*,struct sys_reg_desc const*,size_t) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,struct sys_reg_params*) ;
 int FUNC_4 (struct kvm_vcpu*,int) ;
 int FUNC_5 (struct kvm_vcpu*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_0,
       const struct sys_reg_desc *VAR_1,
       size_t VAR_2,
       const struct sys_reg_desc *VAR_3,
       size_t VAR_4)
{
 struct sys_reg_params VAR_5;
 u32 VAR_6 = FUNC_1(VAR_0);
 int VAR_7 = FUNC_2(VAR_0);

 VAR_5.is_aarch32 = 1;
 VAR_5.is_32bit = 1;
 VAR_5.CRm = (VAR_6 >> 1) & 0xf;
 VAR_5.regval = FUNC_4(VAR_0, VAR_7);
 VAR_5.is_write = ((VAR_6 & 1) == 0);
 VAR_5.CRn = (VAR_6 >> 10) & 0xf;
 VAR_5.Op0 = 0;
 VAR_5.Op1 = (VAR_6 >> 14) & 0x7;
 VAR_5.Op2 = (VAR_6 >> 17) & 0x7;

 if (!FUNC_0(VAR_0, &VAR_5, VAR_3, VAR_4) ||
     !FUNC_0(VAR_0, &VAR_5, VAR_1, VAR_2)) {
  if (!VAR_5.is_write)
   FUNC_5(VAR_0, VAR_7, VAR_5.regval);
  return 1;
 }

 FUNC_3(VAR_0, &VAR_5);
 return 1;
}
