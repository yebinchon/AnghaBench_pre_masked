
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {void* hva; int gfn; } ;
struct TYPE_4__ {TYPE_1__ virtual_apic_map; } ;
struct vcpu_vmx {TYPE_2__ nested; } ;
struct kvm_vcpu {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int ) ;
 struct vcpu_vmx* FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 () ;

__attribute__((used)) static bool FUNC_6(struct kvm_vcpu *VAR_1)
{
 struct vcpu_vmx *VAR_2 = FUNC_4(VAR_1);
 void *VAR_3;
 u32 VAR_4;
 int VAR_5;

 if (FUNC_0(!FUNC_2(VAR_1)) ||
  !FUNC_3(FUNC_1(VAR_1)) ||
  FUNC_0(!VAR_2->nested.virtual_apic_map.gfn))
  return 0;

 VAR_5 = FUNC_5();

 VAR_3 = VAR_2->nested.virtual_apic_map.hva;
 VAR_4 = *((u32 *)(VAR_3 + VAR_0));

 return ((VAR_5 & 0xf0) > (VAR_4 & 0xf0));
}
