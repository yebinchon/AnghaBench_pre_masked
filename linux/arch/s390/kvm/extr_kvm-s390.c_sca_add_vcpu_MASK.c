
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* sie_block; } ;
struct kvm_vcpu {size_t vcpu_id; TYPE_5__* kvm; TYPE_3__ arch; } ;
struct esca_block {scalar_t__ mcn; TYPE_1__* cpu; } ;
struct bsca_block {scalar_t__ mcn; TYPE_1__* cpu; } ;
typedef int __u64 ;
typedef int __u32 ;
struct TYPE_9__ {int sca_lock; struct esca_block* sca; scalar_t__ use_esca; } ;
struct TYPE_10__ {TYPE_4__ arch; } ;
struct TYPE_7__ {int scaoh; int scaol; int ecb2; } ;
struct TYPE_6__ {int sda; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (size_t,unsigned long*) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_1)
{
 if (!FUNC_0()) {
  struct bsca_block *VAR_2 = VAR_1->kvm->arch.sca;


  VAR_1->arch.sie_block->scaoh = (__u32)(((__u64)VAR_2) >> 32);
  VAR_1->arch.sie_block->scaol = (__u32)(__u64)VAR_2;
  return;
 }
 FUNC_1(&VAR_1->kvm->arch.sca_lock);
 if (VAR_1->kvm->arch.use_esca) {
  struct esca_block *VAR_3 = VAR_1->kvm->arch.sca;

  VAR_3->cpu[VAR_1->vcpu_id].sda = (__u64) VAR_1->arch.sie_block;
  VAR_1->arch.sie_block->scaoh = (__u32)(((__u64)VAR_3) >> 32);
  VAR_1->arch.sie_block->scaol = (__u32)(__u64)VAR_3 & ~0x3fU;
  VAR_1->arch.sie_block->ecb2 |= VAR_0;
  FUNC_3(VAR_1->vcpu_id, (unsigned long *) VAR_3->mcn);
 } else {
  struct bsca_block *VAR_4 = VAR_1->kvm->arch.sca;

  VAR_4->cpu[VAR_1->vcpu_id].sda = (__u64) VAR_1->arch.sie_block;
  VAR_1->arch.sie_block->scaoh = (__u32)(((__u64)VAR_4) >> 32);
  VAR_1->arch.sie_block->scaol = (__u32)(__u64)VAR_4;
  FUNC_3(VAR_1->vcpu_id, (unsigned long *) &VAR_4->mcn);
 }
 FUNC_2(&VAR_1->kvm->arch.sca_lock);
}
