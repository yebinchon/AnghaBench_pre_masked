
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_7__ {int apic_base; struct kvm_lapic* apic; } ;
struct kvm_vcpu {int vcpu_id; int kvm; TYPE_1__ arch; } ;
struct kvm_lapic {int base_address; TYPE_3__* vcpu; } ;
struct TYPE_11__ {int (* set_virtual_apic_mode ) (struct kvm_vcpu*) ;} ;
struct TYPE_10__ {int key; } ;
struct TYPE_8__ {int apic_base; } ;
struct TYPE_9__ {TYPE_2__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;
 int FUNC_0 (struct kvm_lapic*,int ) ;
 int FUNC_1 (struct kvm_lapic*,int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 TYPE_5__* VAR_6 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct kvm_vcpu*) ;

void FUNC_8(struct kvm_vcpu *VAR_7, u64 VAR_8)
{
 u64 VAR_9 = VAR_7->arch.apic_base;
 struct kvm_lapic *VAR_10 = VAR_7->arch.apic;

 if (!VAR_10)
  VAR_8 |= VAR_2;

 VAR_7->arch.apic_base = VAR_8;

 if ((VAR_9 ^ VAR_8) & VAR_3)
  FUNC_2(VAR_7);

 if (!VAR_10)
  return;


 if ((VAR_9 ^ VAR_8) & VAR_3) {
  if (VAR_8 & VAR_3) {
   FUNC_1(VAR_10, VAR_7->vcpu_id);
   FUNC_5(&VAR_5);
  } else {
   FUNC_6(&VAR_5.key);
   FUNC_4(VAR_7->kvm);
  }
 }

 if (((VAR_9 ^ VAR_8) & VAR_4) && (VAR_8 & VAR_4))
  FUNC_0(VAR_10, VAR_7->vcpu_id);

 if ((VAR_9 ^ VAR_8) & (VAR_3 | VAR_4))
  VAR_6->set_virtual_apic_mode(VAR_7);

 VAR_10->base_address = VAR_10->vcpu->arch.apic_base &
        VAR_1;

 if ((VAR_8 & VAR_3) &&
      VAR_10->base_address != VAR_0)
  FUNC_3("APIC base relocation is unsupported by KVM");
}
