
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct kvm_lapic* apic; int apic_attention; } ;
struct kvm_vcpu {TYPE_1__ arch; int kvm; } ;
struct kvm_lapic {int vapic_cache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_lapic*) ;
 int FUNC_1 (struct kvm_lapic*) ;
 int FUNC_2 (struct kvm_vcpu*,struct kvm_lapic*) ;
 int FUNC_3 (struct kvm_lapic*,int ) ;
 int FUNC_4 (int ,int *,int*,int) ;
 int FUNC_5 (int ,int *) ;

void FUNC_6(struct kvm_vcpu *VAR_2)
{
 u32 VAR_3, VAR_4;
 int VAR_5, VAR_6;
 struct kvm_lapic *VAR_7 = VAR_2->arch.apic;

 FUNC_2(VAR_2, VAR_7);

 if (!FUNC_5(VAR_1, &VAR_2->arch.apic_attention))
  return;

 VAR_4 = FUNC_3(VAR_7, VAR_0) & 0xff;
 VAR_5 = FUNC_0(VAR_7);
 if (VAR_5 < 0)
  VAR_5 = 0;
 VAR_6 = FUNC_1(VAR_7);
 if (VAR_6 < 0)
  VAR_6 = 0;
 VAR_3 = (VAR_4 & 0xff) | ((VAR_6 & 0xf0) << 8) | (VAR_5 << 24);

 FUNC_4(VAR_2->kvm, &VAR_2->arch.apic->vapic_cache, &VAR_3,
    sizeof(u32));
}
