
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union ctlreg0 {int lap; int val; } ;
struct TYPE_4__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int * gcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct kvm_vcpu*,int ,unsigned long,int ,int ,int ) ;

int FUNC_2(struct kvm_vcpu *VAR_3, unsigned long VAR_4)
{
 union ctlreg0 VAR_5 = {.val = VAR_3->arch.sie_block->gcr[0]};

 if (!VAR_5 || !FUNC_0(VAR_4))
  return 0;
 return FUNC_1(VAR_3, VAR_1, VAR_4, 0, VAR_0, VAR_2);
}
