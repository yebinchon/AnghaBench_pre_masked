
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_lapic_irq {int dummy; } ;
struct kvm_kernel_irq_routing_entry {int type; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct kvm_kernel_irq_routing_entry*,struct kvm*,int,int,int) ;
 int FUNC_1 (struct kvm*,int *,struct kvm_lapic_irq*,int*,int *) ;
 int FUNC_2 (struct kvm*,struct kvm_kernel_irq_routing_entry*) ;
 int FUNC_3 (struct kvm*,struct kvm_kernel_irq_routing_entry*,struct kvm_lapic_irq*) ;

int FUNC_4(struct kvm_kernel_irq_routing_entry *VAR_2,
         struct kvm *VAR_3, int VAR_4, int VAR_5,
         bool VAR_6)
{
 struct kvm_lapic_irq VAR_7;
 int VAR_8;

 switch (VAR_2->type) {
 case 129:
  return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
           VAR_6);

 case 128:
  if (FUNC_2(VAR_3, VAR_2))
   return -VAR_0;

  FUNC_3(VAR_3, VAR_2, &VAR_7);

  if (FUNC_1(VAR_3, ((void*)0), &VAR_7, &VAR_8, ((void*)0)))
   return VAR_8;
  break;

 default:
  break;
 }

 return -VAR_1;
}
