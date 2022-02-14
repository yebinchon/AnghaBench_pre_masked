
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_pic {int dummy; } ;
struct TYPE_4__ {int pin; } ;
struct kvm_kernel_irq_routing_entry {TYPE_2__ irqchip; } ;
struct TYPE_3__ {struct kvm_pic* vpic; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 (struct kvm_pic*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct kvm_kernel_irq_routing_entry *VAR_0,
      struct kvm *VAR_1, int VAR_2, int VAR_3,
      bool VAR_4)
{
 struct kvm_pic *VAR_5 = VAR_1->arch.vpic;
 return FUNC_0(VAR_5, VAR_0->irqchip.pin, VAR_2, VAR_3);
}
