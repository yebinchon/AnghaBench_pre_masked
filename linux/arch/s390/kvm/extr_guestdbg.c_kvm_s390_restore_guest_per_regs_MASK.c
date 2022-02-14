
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cr11; int cr10; int cr9; int cr0; } ;
struct TYPE_5__ {TYPE_1__ guestdbg; TYPE_3__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_6__ {int * gcr; } ;



void FUNC_0(struct kvm_vcpu *VAR_0)
{
 VAR_0->arch.sie_block->gcr[0] = VAR_0->arch.guestdbg.cr0;
 VAR_0->arch.sie_block->gcr[9] = VAR_0->arch.guestdbg.cr9;
 VAR_0->arch.sie_block->gcr[10] = VAR_0->arch.guestdbg.cr10;
 VAR_0->arch.sie_block->gcr[11] = VAR_0->arch.guestdbg.cr11;
}
