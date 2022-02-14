
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vcpu_vmx {TYPE_1__* loaded_vmcs; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int soft_vnmi_blocked; int nmi_known_unmasked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vcpu_vmx* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int ) ;

bool FUNC_2(struct kvm_vcpu *VAR_3)
{
 struct vcpu_vmx *VAR_4 = FUNC_0(VAR_3);
 bool VAR_5;

 if (!VAR_2)
  return VAR_4->loaded_vmcs->soft_vnmi_blocked;
 if (VAR_4->loaded_vmcs->nmi_known_unmasked)
  return 0;
 VAR_5 = FUNC_1(VAR_0) & VAR_1;
 VAR_4->loaded_vmcs->nmi_known_unmasked = !VAR_5;
 return VAR_5;
}
