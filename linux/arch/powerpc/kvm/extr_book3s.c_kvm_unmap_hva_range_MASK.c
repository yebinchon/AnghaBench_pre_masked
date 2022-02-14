
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* kvm_ops; } ;
struct kvm {TYPE_2__ arch; } ;
struct TYPE_3__ {int (* unmap_hva_range ) (struct kvm*,unsigned long,unsigned long) ;} ;


 int FUNC_0 (struct kvm*,unsigned long,unsigned long) ;

int FUNC_1(struct kvm *VAR_0, unsigned long VAR_1, unsigned long VAR_2)
{
 return VAR_0->arch.kvm_ops->unmap_hva_range(VAR_0, VAR_1, VAR_2);
}
