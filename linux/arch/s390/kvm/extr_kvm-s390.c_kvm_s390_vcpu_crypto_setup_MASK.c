
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* sie_block; } ;
struct kvm_vcpu {TYPE_4__ arch; TYPE_5__* kvm; } ;
struct TYPE_7__ {scalar_t__ dea_kw; scalar_t__ aes_kw; scalar_t__ apie; int crycbd; } ;
struct TYPE_8__ {TYPE_1__ crypto; } ;
struct TYPE_11__ {TYPE_2__ arch; } ;
struct TYPE_9__ {int ecb3; int ecd; int eca; int crycbd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*,int) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_4)
{




 if (!VAR_4->kvm->arch.crypto.apie && !FUNC_1(VAR_4->kvm, 76))
  return;

 VAR_4->arch.sie_block->crycbd = VAR_4->kvm->arch.crypto.crycbd;
 VAR_4->arch.sie_block->ecb3 &= ~(VAR_1 | VAR_2);
 VAR_4->arch.sie_block->eca &= ~VAR_0;
 VAR_4->arch.sie_block->ecd &= ~VAR_3;

 if (VAR_4->kvm->arch.crypto.apie)
  VAR_4->arch.sie_block->eca |= VAR_0;


 if (VAR_4->kvm->arch.crypto.aes_kw) {
  VAR_4->arch.sie_block->ecb3 |= VAR_1;

  if (FUNC_0(VAR_4->kvm))
   VAR_4->arch.sie_block->ecd |= VAR_3;
 }

 if (VAR_4->kvm->arch.crypto.dea_kw)
  VAR_4->arch.sie_block->ecb3 |= VAR_2;
}
