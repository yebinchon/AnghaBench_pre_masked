
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_ioapic {int dev; int eoi_inject; } ;
struct TYPE_2__ {struct kvm_ioapic* vioapic; } ;
struct kvm {TYPE_1__ arch; int slots_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct kvm_ioapic*) ;
 int FUNC_2 (struct kvm*,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct kvm *VAR_1)
{
 struct kvm_ioapic *VAR_2 = VAR_1->arch.vioapic;

 if (!VAR_2)
  return;

 FUNC_0(&VAR_2->eoi_inject);
 FUNC_3(&VAR_1->slots_lock);
 FUNC_2(VAR_1, VAR_0, &VAR_2->dev);
 FUNC_4(&VAR_1->slots_lock);
 VAR_1->arch.vioapic = ((void*)0);
 FUNC_1(VAR_2);
}
