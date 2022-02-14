
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sint; int vcpu; } ;
struct kvm_kernel_irq_routing_entry {TYPE_1__ hv_sint; } ;
struct kvm {int dummy; } ;


 int FUNC_0 (struct kvm*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct kvm_kernel_irq_routing_entry *VAR_0,
      struct kvm *VAR_1, int VAR_2, int VAR_3,
      bool VAR_4)
{
 if (!VAR_3)
  return -1;

 return FUNC_0(VAR_1, VAR_0->hv_sint.vcpu, VAR_0->hv_sint.sint);
}
