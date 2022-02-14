
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ vm86_active; } ;
struct vcpu_vmx {TYPE_1__ rmode; TYPE_3__* loaded_vmcs; } ;
struct TYPE_5__ {int nmi_injections; } ;
struct kvm_vcpu {TYPE_2__ stat; } ;
struct TYPE_6__ {int soft_vnmi_blocked; int nmi_known_unmasked; scalar_t__ vnmi_blocked_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*,int,int ) ;
 struct vcpu_vmx* FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_5)
{
 struct vcpu_vmx *VAR_6 = FUNC_1(VAR_5);

 if (!VAR_4) {
  VAR_6->loaded_vmcs->soft_vnmi_blocked = 1;
  VAR_6->loaded_vmcs->vnmi_blocked_time = 0;
 }

 ++VAR_5->stat.nmi_injections;
 VAR_6->loaded_vmcs->nmi_known_unmasked = 0;

 if (VAR_6->rmode.vm86_active) {
  FUNC_0(VAR_5, VAR_2, 0);
  return;
 }

 FUNC_2(VAR_3,
   VAR_1 | VAR_0 | VAR_2);

 FUNC_3(VAR_5);
}
