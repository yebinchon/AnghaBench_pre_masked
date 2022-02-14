
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_ioapic_state {int irr; } ;
struct kvm_ioapic {int lock; scalar_t__ irr_delivered; scalar_t__ irr; } ;
struct TYPE_2__ {struct kvm_ioapic* vioapic; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 (struct kvm_ioapic*,int ) ;
 int FUNC_1 (struct kvm*) ;
 int FUNC_2 (struct kvm_ioapic*,struct kvm_ioapic_state*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct kvm *VAR_0, struct kvm_ioapic_state *VAR_1)
{
 struct kvm_ioapic *VAR_2 = VAR_0->arch.vioapic;

 FUNC_3(&VAR_2->lock);
 FUNC_2(VAR_2, VAR_1, sizeof(struct kvm_ioapic_state));
 VAR_2->irr = 0;
 VAR_2->irr_delivered = 0;
 FUNC_1(VAR_0);
 FUNC_0(VAR_2, VAR_1->irr);
 FUNC_4(&VAR_2->lock);
}
