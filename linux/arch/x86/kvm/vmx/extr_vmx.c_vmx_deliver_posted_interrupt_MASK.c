
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_vmx {int pi_desc; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int,int *) ;
 struct vcpu_vmx* FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,int) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_0, int VAR_1)
{
 struct vcpu_vmx *VAR_2 = FUNC_4(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_5(VAR_0, VAR_1);
 if (!VAR_3)
  return;

 if (FUNC_3(VAR_1, &VAR_2->pi_desc))
  return;


 if (FUNC_2(&VAR_2->pi_desc))
  return;

 if (!FUNC_1(VAR_0, 0))
  FUNC_0(VAR_0);
}
