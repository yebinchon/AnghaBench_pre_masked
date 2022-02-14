
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_ioapic {int dev; int base_address; struct kvm* kvm; int eoi_inject; int lock; } ;
struct TYPE_2__ {struct kvm_ioapic* vioapic; } ;
struct kvm {TYPE_1__ arch; int slots_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct kvm_ioapic*) ;
 int FUNC_2 (struct kvm*,int ,int ,int ,int *) ;
 int VAR_5 ;
 int FUNC_3 (struct kvm_ioapic*) ;
 int FUNC_4 (int *,int *) ;
 struct kvm_ioapic* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct kvm *VAR_6)
{
 struct kvm_ioapic *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(sizeof(struct kvm_ioapic), VAR_1);
 if (!VAR_7)
  return -VAR_0;
 FUNC_8(&VAR_7->lock);
 FUNC_0(&VAR_7->eoi_inject, VAR_5);
 VAR_6->arch.vioapic = VAR_7;
 FUNC_3(VAR_7);
 FUNC_4(&VAR_7->dev, &VAR_4);
 VAR_7->kvm = VAR_6;
 FUNC_6(&VAR_6->slots_lock);
 VAR_8 = FUNC_2(VAR_6, VAR_3, VAR_7->base_address,
          VAR_2, &VAR_7->dev);
 FUNC_7(&VAR_6->slots_lock);
 if (VAR_8 < 0) {
  VAR_6->arch.vioapic = ((void*)0);
  FUNC_1(VAR_7);
 }

 return VAR_8;
}
