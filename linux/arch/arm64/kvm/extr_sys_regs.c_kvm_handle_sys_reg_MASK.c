
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sys_reg_params {int is_aarch32; int is_32bit; unsigned long Op0; unsigned long Op1; unsigned long CRn; unsigned long CRm; unsigned long Op2; int is_write; int regval; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_run {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*,struct sys_reg_params*) ;
 unsigned long FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct kvm_vcpu*,int) ;
 int FUNC_5 (struct kvm_vcpu*,int,int ) ;

int FUNC_6(struct kvm_vcpu *VAR_0, struct kvm_run *VAR_1)
{
 struct sys_reg_params VAR_2;
 unsigned long VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = FUNC_2(VAR_0);
 int VAR_5;

 FUNC_3(VAR_3);

 VAR_2.is_aarch32 = 0;
 VAR_2.is_32bit = 0;
 VAR_2.Op0 = (VAR_3 >> 20) & 3;
 VAR_2.Op1 = (VAR_3 >> 14) & 0x7;
 VAR_2.CRn = (VAR_3 >> 10) & 0xf;
 VAR_2.CRm = (VAR_3 >> 1) & 0xf;
 VAR_2.Op2 = (VAR_3 >> 17) & 0x7;
 VAR_2.regval = FUNC_4(VAR_0, VAR_4);
 VAR_2.is_write = !(VAR_3 & 1);

 VAR_5 = FUNC_0(VAR_0, &VAR_2);

 if (!VAR_2.is_write)
  FUNC_5(VAR_0, VAR_4, VAR_2.regval);
 return VAR_5;
}
