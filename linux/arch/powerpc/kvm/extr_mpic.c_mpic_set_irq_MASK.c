
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct openpic {int lock; } ;
struct TYPE_3__ {int pin; } ;
struct kvm_kernel_irq_routing_entry {TYPE_1__ irqchip; } ;
struct TYPE_4__ {struct openpic* mpic; } ;
struct kvm {TYPE_2__ arch; } ;


 int FUNC_0 (struct openpic*,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct kvm_kernel_irq_routing_entry *VAR_0,
   struct kvm *VAR_1, int VAR_2, int VAR_3,
   bool VAR_4)
{
 u32 VAR_5 = VAR_0->irqchip.pin;
 struct openpic *VAR_6 = VAR_1->arch.mpic;
 unsigned long VAR_7;

 FUNC_1(&VAR_6->lock, VAR_7);
 FUNC_0(VAR_6, VAR_5, VAR_3);
 FUNC_2(&VAR_6->lock, VAR_7);


 return 0;
}
