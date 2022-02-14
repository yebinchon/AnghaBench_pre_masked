
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct kvm_lapic* apic; } ;
struct kvm_vcpu {int kvm; TYPE_1__ arch; } ;
struct kvm_lapic {int vcpu; } ;
struct kvm_cpuid_entry2 {int ecx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct kvm_cpuid_entry2* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct kvm_lapic*,int ,int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;

void FUNC_4(struct kvm_vcpu *VAR_4)
{
 struct kvm_lapic *VAR_5 = VAR_4->arch.apic;
 struct kvm_cpuid_entry2 *VAR_6;
 u32 VAR_7 = VAR_2;

 if (!FUNC_3(VAR_4))
  return;
 VAR_6 = FUNC_1(VAR_5->vcpu, 0x1, 0);
 if (VAR_6 && (VAR_6->ecx & (1 << (VAR_3 & 31))) &&
     !FUNC_0(VAR_4->kvm))
  VAR_7 |= VAR_1;
 FUNC_2(VAR_5, VAR_0, VAR_7);
}
