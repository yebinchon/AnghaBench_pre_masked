
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_18__ {int function; } ;
struct TYPE_15__ {TYPE_5__* sie_block; TYPE_9__ ckc_timer; } ;
struct kvm_vcpu {TYPE_6__ arch; TYPE_7__* kvm; TYPE_3__* run; int vcpu_id; } ;
struct TYPE_17__ {scalar_t__ has_kss; scalar_t__ has_sigpif; scalar_t__ has_siif; scalar_t__ has_ib; scalar_t__ has_cei; } ;
struct TYPE_13__ {scalar_t__ use_cmma; scalar_t__ use_pfmfi; } ;
struct TYPE_16__ {TYPE_4__ arch; } ;
struct TYPE_14__ {int eca; int gd; unsigned long sdnxo; unsigned long riccbd; int ictl; int hpid; int ecd; int ecb2; int ecb; int cpuflags; } ;
struct TYPE_10__ {int riccb; int sdnx; } ;
struct TYPE_11__ {TYPE_1__ regs; } ;
struct TYPE_12__ {TYPE_2__ s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 unsigned long VAR_29 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,int,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_9__*,int ,int ) ;
 int VAR_30 ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 TYPE_8__ VAR_31 ;
 scalar_t__ FUNC_7 (TYPE_7__*,int) ;

int FUNC_8(struct kvm_vcpu *VAR_32)
{
 int VAR_33 = 0;

 FUNC_1(&VAR_32->arch.sie_block->cpuflags, VAR_6 |
          VAR_4 |
          VAR_5);

 if (FUNC_7(VAR_32->kvm, 78))
  FUNC_3(VAR_32, VAR_2);
 else if (FUNC_7(VAR_32->kvm, 8))
  FUNC_3(VAR_32, VAR_1);

 FUNC_6(VAR_32);


 if (VAR_28)
  VAR_32->arch.sie_block->ecb |= VAR_17;
 if (FUNC_7(VAR_32->kvm, 9))
  VAR_32->arch.sie_block->ecb |= VAR_18;
 if (FUNC_7(VAR_32->kvm, 73))
  VAR_32->arch.sie_block->ecb |= VAR_19;

 if (FUNC_7(VAR_32->kvm, 8) && VAR_32->kvm->arch.use_pfmfi)
  VAR_32->arch.sie_block->ecb2 |= VAR_16;
 if (FUNC_7(VAR_32->kvm, 130))
  VAR_32->arch.sie_block->ecb2 |= VAR_15;
 VAR_32->arch.sie_block->eca = VAR_10 | VAR_11;
 if (VAR_31.has_cei)
  VAR_32->arch.sie_block->eca |= VAR_8;
 if (VAR_31.has_ib)
  VAR_32->arch.sie_block->eca |= VAR_9;
 if (VAR_31.has_siif)
  VAR_32->arch.sie_block->eca |= VAR_13;
 if (VAR_31.has_sigpif)
  VAR_32->arch.sie_block->eca |= VAR_12;
 if (FUNC_7(VAR_32->kvm, 129)) {
  VAR_32->arch.sie_block->eca |= VAR_14;
  VAR_32->arch.sie_block->ecd |= VAR_21;
 }
 if (FUNC_7(VAR_32->kvm, 139))
  VAR_32->arch.sie_block->ecd |= VAR_22;
 if (FUNC_7(VAR_32->kvm, 156))
  VAR_32->arch.sie_block->ecd |= VAR_20;
 if (VAR_32->arch.sie_block->gd) {
  VAR_32->arch.sie_block->eca |= VAR_7;
  FUNC_0(VAR_32, 3, "AIV gisa format-%u enabled for cpu %03u",
      VAR_32->arch.sie_block->gd & 0x3, VAR_32->vcpu_id);
 }
 VAR_32->arch.sie_block->sdnxo = ((unsigned long) &VAR_32->run->s.regs.sdnx)
     | VAR_29;
 VAR_32->arch.sie_block->riccbd = (unsigned long) &VAR_32->run->s.regs.riccb;

 if (VAR_31.has_kss)
  FUNC_3(VAR_32, VAR_3);
 else
  VAR_32->arch.sie_block->ictl |= VAR_25 | VAR_27 | VAR_26;

 if (VAR_32->kvm->arch.use_cmma) {
  VAR_33 = FUNC_5(VAR_32);
  if (VAR_33)
   return VAR_33;
 }
 FUNC_2(&VAR_32->arch.ckc_timer, VAR_0, VAR_24);
 VAR_32->arch.ckc_timer.function = VAR_30;

 VAR_32->arch.sie_block->hpid = VAR_23;

 FUNC_4(VAR_32);

 return VAR_33;
}
