
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int pfault_token; TYPE_4__* sie_block; } ;
struct kvm_vcpu {int kvm; TYPE_5__ arch; } ;
typedef int __u64 ;
struct TYPE_8__ {scalar_t__ fpc; } ;
struct TYPE_9__ {TYPE_2__ fpu; } ;
struct TYPE_12__ {TYPE_3__ thread; } ;
struct TYPE_7__ {unsigned long mask; unsigned long addr; } ;
struct TYPE_10__ {unsigned long ckc; int* gcr; int gbea; int fpf; scalar_t__ pp; scalar_t__ todpr; TYPE_1__ gpsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_6__* VAR_8 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct kvm_vcpu *VAR_9)
{

 VAR_9->arch.sie_block->gpsw.mask = 0UL;
 VAR_9->arch.sie_block->gpsw.addr = 0UL;
 FUNC_3(VAR_9, 0);
 FUNC_2(VAR_9, 0);
 VAR_9->arch.sie_block->ckc = 0UL;
 VAR_9->arch.sie_block->todpr = 0;
 FUNC_6(VAR_9->arch.sie_block->gcr, 0, 16 * sizeof(__u64));
 VAR_9->arch.sie_block->gcr[0] = VAR_2 |
     VAR_0 |
     VAR_1;
 VAR_9->arch.sie_block->gcr[14] = VAR_4 |
     VAR_5 |
     VAR_3;

 FUNC_7();
 VAR_8->thread.fpu.fpc = 0;
 VAR_9->arch.sie_block->gbea = 1;
 VAR_9->arch.sie_block->pp = 0;
 VAR_9->arch.sie_block->fpf &= ~VAR_6;
 VAR_9->arch.pfault_token = VAR_7;
 FUNC_0(VAR_9);
 if (!FUNC_4(VAR_9->kvm))
  FUNC_5(VAR_9);
 FUNC_1(VAR_9);
}
