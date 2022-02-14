
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pir; } ;
struct vcpu_vmx {TYPE_1__ pi_desc; } ;
struct kvm_vcpu {int dummy; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 struct vcpu_vmx* FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_0)
{
 struct vcpu_vmx *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->pi_desc);
 FUNC_0(VAR_1->pi_desc.pir, 0, sizeof(VAR_1->pi_desc.pir));
}
