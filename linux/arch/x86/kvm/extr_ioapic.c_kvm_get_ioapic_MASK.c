
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_ioapic_state {int irr; } ;
struct kvm_ioapic {int lock; int irr_delivered; } ;
struct TYPE_2__ {struct kvm_ioapic* vioapic; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 (struct kvm_ioapic_state*,struct kvm_ioapic*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct kvm *VAR_0, struct kvm_ioapic_state *VAR_1)
{
 struct kvm_ioapic *VAR_2 = VAR_0->arch.vioapic;

 FUNC_1(&VAR_2->lock);
 FUNC_0(VAR_1, VAR_2, sizeof(struct kvm_ioapic_state));
 VAR_1->irr &= ~VAR_2->irr_delivered;
 FUNC_2(&VAR_2->lock);
}
