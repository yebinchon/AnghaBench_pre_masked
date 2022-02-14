
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {size_t vcpu_id; TYPE_3__* kvm; } ;
struct esca_block {TYPE_1__* cpu; scalar_t__ mcn; } ;
struct bsca_block {TYPE_1__* cpu; scalar_t__ mcn; } ;
struct TYPE_5__ {int sca_lock; struct esca_block* sca; scalar_t__ use_esca; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;
struct TYPE_4__ {scalar_t__ sda; } ;


 int FUNC_0 (size_t,unsigned long*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_0)
{
 if (!FUNC_1())
  return;
 FUNC_2(&VAR_0->kvm->arch.sca_lock);
 if (VAR_0->kvm->arch.use_esca) {
  struct esca_block *VAR_1 = VAR_0->kvm->arch.sca;

  FUNC_0(VAR_0->vcpu_id, (unsigned long *) VAR_1->mcn);
  VAR_1->cpu[VAR_0->vcpu_id].sda = 0;
 } else {
  struct bsca_block *VAR_2 = VAR_0->kvm->arch.sca;

  FUNC_0(VAR_0->vcpu_id, (unsigned long *) &VAR_2->mcn);
  VAR_2->cpu[VAR_0->vcpu_id].sda = 0;
 }
 FUNC_3(&VAR_0->kvm->arch.sca_lock);
}
