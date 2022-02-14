
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_irq_mask_notifier {int link; } ;
struct kvm {int irq_srcu; int irq_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct kvm *VAR_0, int VAR_1,
          struct kvm_irq_mask_notifier *VAR_2)
{
 FUNC_1(&VAR_0->irq_lock);
 FUNC_0(&VAR_2->link);
 FUNC_2(&VAR_0->irq_lock);
 FUNC_3(&VAR_0->irq_srcu);
}
