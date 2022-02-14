
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_regs {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*,struct kvm_regs*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_0, struct kvm_regs *VAR_1)
{
 FUNC_1(VAR_0);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_0);
 return 0;
}
