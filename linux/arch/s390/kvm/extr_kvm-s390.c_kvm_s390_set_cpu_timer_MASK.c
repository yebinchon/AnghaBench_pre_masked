
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cputm_seqcount; TYPE_1__* sie_block; int cputm_start; scalar_t__ cputm_enabled; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
typedef int __u64 ;
struct TYPE_3__ {int cputm; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct kvm_vcpu *VAR_0, __u64 VAR_1)
{
 FUNC_1();
 FUNC_3(&VAR_0->arch.cputm_seqcount);
 if (VAR_0->arch.cputm_enabled)
  VAR_0->arch.cputm_start = FUNC_0();
 VAR_0->arch.sie_block->cputm = VAR_1;
 FUNC_4(&VAR_0->arch.cputm_seqcount);
 FUNC_2();
}
