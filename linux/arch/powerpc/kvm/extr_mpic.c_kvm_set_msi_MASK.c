
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct openpic {int lock; } ;
struct TYPE_4__ {int data; } ;
struct kvm_kernel_irq_routing_entry {TYPE_2__ msi; } ;
struct TYPE_3__ {struct openpic* mpic; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 int FUNC_0 (struct openpic*,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct kvm_kernel_irq_routing_entry *VAR_1,
  struct kvm *VAR_2, int VAR_3, int VAR_4, bool VAR_5)
{
 struct openpic *VAR_6 = VAR_2->arch.mpic;
 unsigned long VAR_7;

 FUNC_1(&VAR_6->lock, VAR_7);





 FUNC_0(VAR_2->arch.mpic, VAR_0, VAR_1->msi.data);
 FUNC_2(&VAR_6->lock, VAR_7);


 return 0;
}
