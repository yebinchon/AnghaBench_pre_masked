
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cputm_start; TYPE_2__* sie_block; int cputm_seqcount; int cputm_enabled; } ;
struct kvm_vcpu {scalar_t__ cpu; TYPE_1__ arch; } ;
typedef int __u64 ;
struct TYPE_4__ {int cputm; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 unsigned int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,unsigned int) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 (int) ;

__u64 FUNC_9(struct kvm_vcpu *VAR_0)
{
 unsigned int VAR_1;
 __u64 VAR_2;

 if (FUNC_8(!VAR_0->arch.cputm_enabled))
  return VAR_0->arch.sie_block->cputm;

 FUNC_3();
 do {
  VAR_1 = FUNC_5(&VAR_0->arch.cputm_seqcount);




  FUNC_0((VAR_1 & 1) && FUNC_7() == VAR_0->cpu);
  VAR_2 = VAR_0->arch.sie_block->cputm;

  if (FUNC_2(VAR_0->arch.cputm_start))
   VAR_2 -= FUNC_1() - VAR_0->arch.cputm_start;
 } while (FUNC_6(&VAR_0->arch.cputm_seqcount, VAR_1 & ~1));
 FUNC_4();
 return VAR_2;
}
