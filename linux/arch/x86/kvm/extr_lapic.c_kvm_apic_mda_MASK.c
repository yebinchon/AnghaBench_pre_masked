
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct kvm_vcpu {TYPE_2__* kvm; } ;
struct kvm_lapic {int dummy; } ;
struct TYPE_3__ {int x2apic_broadcast_quirk_disabled; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct kvm_lapic*) ;

__attribute__((used)) static u32 FUNC_1(struct kvm_vcpu *VAR_2, unsigned int VAR_3,
  struct kvm_lapic *VAR_4, struct kvm_lapic *VAR_5)
{
 bool VAR_6 = VAR_4 != ((void*)0);

 if (!VAR_2->kvm->arch.x2apic_broadcast_quirk_disabled &&
     !VAR_6 && VAR_3 == VAR_0 && FUNC_0(VAR_5))
  return VAR_1;

 return VAR_3;
}
