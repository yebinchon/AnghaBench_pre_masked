
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_memory_slot {int dummy; } ;
struct TYPE_4__ {TYPE_1__* kvm_ops; } ;
struct kvm {TYPE_2__ arch; } ;
struct TYPE_3__ {int (* create_memslot ) (struct kvm_memory_slot*,unsigned long) ;} ;


 int FUNC_0 (struct kvm_memory_slot*,unsigned long) ;

int FUNC_1(struct kvm *VAR_0, struct kvm_memory_slot *VAR_1,
          unsigned long VAR_2)
{
 return VAR_0->arch.kvm_ops->create_memslot(VAR_1, VAR_2);
}
