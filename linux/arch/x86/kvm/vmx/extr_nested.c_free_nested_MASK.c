
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vmxon; } ;
struct TYPE_8__ {int vmxon; int posted_intr_nv; unsigned long long current_vmptr; int vmcs02; int * pi_desc; int pi_desc_map; int virtual_apic_map; int * apic_access_page; int * cached_shadow_vmcs12; int * cached_vmcs12; int vpid02; TYPE_1__ smm; } ;
struct TYPE_6__ {int * shadow_vmcs; } ;
struct vcpu_vmx {TYPE_4__ nested; TYPE_2__ vmcs01; } ;
struct TYPE_7__ {int guest_mmu; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct kvm_vcpu*,int *,int) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 struct vcpu_vmx* FUNC_9 (struct kvm_vcpu*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct vcpu_vmx*) ;

__attribute__((used)) static void FUNC_12(struct kvm_vcpu *VAR_3)
{
 struct vcpu_vmx *VAR_4 = FUNC_9(VAR_3);

 if (!VAR_4->nested.vmxon && !VAR_4->nested.smm.vmxon)
  return;

 FUNC_4(VAR_1, VAR_3);

 VAR_4->nested.vmxon = 0;
 VAR_4->nested.smm.vmxon = 0;
 FUNC_2(VAR_4->nested.vpid02);
 VAR_4->nested.posted_intr_nv = -1;
 VAR_4->nested.current_vmptr = -1ull;
 if (VAR_2) {
  FUNC_11(VAR_4);
  FUNC_10(VAR_4->vmcs01.shadow_vmcs);
  FUNC_1(VAR_4->vmcs01.shadow_vmcs);
  VAR_4->vmcs01.shadow_vmcs = ((void*)0);
 }
 FUNC_3(VAR_4->nested.cached_vmcs12);
 VAR_4->nested.cached_vmcs12 = ((void*)0);
 FUNC_3(VAR_4->nested.cached_shadow_vmcs12);
 VAR_4->nested.cached_shadow_vmcs12 = ((void*)0);

 if (VAR_4->nested.apic_access_page) {
  FUNC_6(VAR_4->nested.apic_access_page);
  VAR_4->nested.apic_access_page = ((void*)0);
 }
 FUNC_7(VAR_3, &VAR_4->nested.virtual_apic_map, 1);
 FUNC_7(VAR_3, &VAR_4->nested.pi_desc_map, 1);
 VAR_4->nested.pi_desc = ((void*)0);

 FUNC_5(VAR_3, &VAR_3->arch.guest_mmu, VAR_0);

 FUNC_8(VAR_3);

 FUNC_0(&VAR_4->nested.vmcs02);
}
