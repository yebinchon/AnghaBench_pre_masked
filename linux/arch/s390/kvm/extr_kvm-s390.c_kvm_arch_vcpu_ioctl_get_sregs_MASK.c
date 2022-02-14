
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* sie_block; } ;
struct kvm_vcpu {TYPE_5__ arch; TYPE_3__* run; } ;
struct kvm_sregs {int crs; int acrs; } ;
struct TYPE_9__ {int gcr; } ;
struct TYPE_6__ {int acrs; } ;
struct TYPE_7__ {TYPE_1__ regs; } ;
struct TYPE_8__ {TYPE_2__ s; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_0,
      struct kvm_sregs *VAR_1)
{
 FUNC_1(VAR_0);

 FUNC_0(&VAR_1->acrs, &VAR_0->run->s.regs.acrs, sizeof(VAR_1->acrs));
 FUNC_0(&VAR_1->crs, &VAR_0->arch.sie_block->gcr, sizeof(VAR_1->crs));

 FUNC_2(VAR_0);
 return 0;
}
