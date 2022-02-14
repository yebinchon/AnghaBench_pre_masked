
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vcpu_vmx {TYPE_1__* loaded_vmcs; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int soft_vnmi_blocked; int nmi_known_unmasked; scalar_t__ vnmi_blocked_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vcpu_vmx* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct kvm_vcpu *VAR_3, bool VAR_4)
{
 struct vcpu_vmx *VAR_5 = FUNC_0(VAR_3);

 if (!VAR_2) {
  if (VAR_5->loaded_vmcs->soft_vnmi_blocked != VAR_4) {
   VAR_5->loaded_vmcs->soft_vnmi_blocked = VAR_4;
   VAR_5->loaded_vmcs->vnmi_blocked_time = 0;
  }
 } else {
  VAR_5->loaded_vmcs->nmi_known_unmasked = !VAR_4;
  if (VAR_4)
   FUNC_2(VAR_0,
          VAR_1);
  else
   FUNC_1(VAR_0,
     VAR_1);
 }
}
