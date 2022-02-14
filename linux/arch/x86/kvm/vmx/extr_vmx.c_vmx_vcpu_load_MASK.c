
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_vmx {int host_debugctlmsr; int host_pkru; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 struct vcpu_vmx* FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,int) ;
 int FUNC_4 (struct kvm_vcpu*,int) ;

void FUNC_5(struct kvm_vcpu *VAR_0, int VAR_1)
{
 struct vcpu_vmx *VAR_2 = FUNC_2(VAR_0);

 FUNC_3(VAR_0, VAR_1);

 FUNC_4(VAR_0, VAR_1);

 VAR_2->host_pkru = FUNC_1();
 VAR_2->host_debugctlmsr = FUNC_0();
}
