
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_kpit_state {int reinject; int irq_ack_notifier; } ;
struct kvm_pit {int mask_notifier; struct kvm* kvm; struct kvm_kpit_state pit_state; } ;
struct kvm {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct kvm_pit*) ;
 int FUNC_3 (struct kvm*,int *) ;
 int FUNC_4 (struct kvm*,int ,int *) ;
 int FUNC_5 (struct kvm*,int *) ;
 int FUNC_6 (struct kvm*,int ,int *) ;

void FUNC_7(struct kvm_pit *VAR_0, bool VAR_1)
{
 struct kvm_kpit_state *VAR_2 = &VAR_0->pit_state;
 struct kvm *VAR_3 = VAR_0->kvm;

 if (FUNC_0(&VAR_2->reinject) == VAR_1)
  return;

 if (VAR_1) {

  FUNC_2(VAR_0);
  FUNC_3(VAR_3, &VAR_2->irq_ack_notifier);
  FUNC_4(VAR_3, 0, &VAR_0->mask_notifier);
 } else {
  FUNC_5(VAR_3, &VAR_2->irq_ack_notifier);
  FUNC_6(VAR_3, 0, &VAR_0->mask_notifier);
 }

 FUNC_1(&VAR_2->reinject, VAR_1);
}
