
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int gmap; int enabled_gmap; TYPE_2__* sie_block; } ;
struct kvm_vcpu {TYPE_3__ arch; TYPE_4__* kvm; } ;
struct TYPE_6__ {scalar_t__ user_instr0; int gmap; int epdx; int epoch; } ;
struct TYPE_9__ {TYPE_1__ arch; int lock; } ;
struct TYPE_7__ {int ictl; int epdx; int epoch; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_6 (TYPE_4__*,int) ;

void FUNC_7(struct kvm_vcpu *VAR_1)
{
 FUNC_1(&VAR_1->kvm->lock);
 FUNC_3();
 VAR_1->arch.sie_block->epoch = VAR_1->kvm->arch.epoch;
 VAR_1->arch.sie_block->epdx = VAR_1->kvm->arch.epdx;
 FUNC_4();
 FUNC_2(&VAR_1->kvm->lock);
 if (!FUNC_0(VAR_1->kvm)) {
  VAR_1->arch.gmap = VAR_1->kvm->arch.gmap;
  FUNC_5(VAR_1);
 }
 if (FUNC_6(VAR_1->kvm, 74) || VAR_1->kvm->arch.user_instr0)
  VAR_1->arch.sie_block->ictl |= VAR_0;

 VAR_1->arch.enabled_gmap = VAR_1->arch.gmap;
}
