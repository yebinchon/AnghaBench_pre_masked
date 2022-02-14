
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_lapic_irq {int dummy; } ;
struct kvm_kernel_irq_routing_entry {int dummy; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm*,int *,struct kvm_lapic_irq*,int *) ;
 scalar_t__ FUNC_1 (struct kvm*,struct kvm_kernel_irq_routing_entry*) ;
 int FUNC_2 (struct kvm*,struct kvm_kernel_irq_routing_entry*,struct kvm_lapic_irq*) ;

int FUNC_3(struct kvm_kernel_irq_routing_entry *VAR_1,
  struct kvm *VAR_2, int VAR_3, int VAR_4, bool VAR_5)
{
 struct kvm_lapic_irq VAR_6;

 if (FUNC_1(VAR_2, VAR_1))
  return -VAR_0;

 if (!VAR_4)
  return -1;

 FUNC_2(VAR_2, VAR_1, &VAR_6);

 return FUNC_0(VAR_2, ((void*)0), &VAR_6, ((void*)0));
}
