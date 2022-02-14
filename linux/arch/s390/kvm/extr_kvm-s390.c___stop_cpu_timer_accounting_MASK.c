
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cputm_start; int cputm_seqcount; TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int cputm; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_0)
{
 FUNC_0(VAR_0->arch.cputm_start == 0);
 FUNC_2(&VAR_0->arch.cputm_seqcount);
 VAR_0->arch.sie_block->cputm -= FUNC_1() - VAR_0->arch.cputm_start;
 VAR_0->arch.cputm_start = 0;
 FUNC_3(&VAR_0->arch.cputm_seqcount);
}
