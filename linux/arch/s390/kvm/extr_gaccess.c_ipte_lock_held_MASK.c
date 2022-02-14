
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_5__* kvm; TYPE_2__ arch; } ;
struct TYPE_8__ {scalar_t__ ipte_lock_count; int sca_lock; } ;
struct TYPE_10__ {TYPE_3__ arch; } ;
struct TYPE_9__ {scalar_t__ kh; } ;
struct TYPE_6__ {int eca; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct kvm_vcpu *VAR_1)
{
 if (VAR_1->arch.sie_block->eca & VAR_0) {
  int VAR_2;

  FUNC_1(&VAR_1->kvm->arch.sca_lock);
  VAR_2 = FUNC_0(VAR_1->kvm)->kh != 0;
  FUNC_2(&VAR_1->kvm->arch.sca_lock);
  return VAR_2;
 }
 return VAR_1->kvm->arch.ipte_lock_count != 0;
}
