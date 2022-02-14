
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {TYPE_3__* run; } ;
struct kvm_fpu {int fpc; scalar_t__ fprs; } ;
typedef int freg_t ;
typedef int __vector128 ;
struct TYPE_4__ {int fpc; int fprs; scalar_t__ vrs; } ;
struct TYPE_5__ {TYPE_1__ regs; } ;
struct TYPE_6__ {TYPE_2__ s; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;

int FUNC_5(struct kvm_vcpu *VAR_1, struct kvm_fpu *VAR_2)
{
 FUNC_3(VAR_1);


 FUNC_2();
 if (VAR_0)
  FUNC_0((freg_t *) VAR_2->fprs,
     (__vector128 *) VAR_1->run->s.regs.vrs);
 else
  FUNC_1(VAR_2->fprs, VAR_1->run->s.regs.fprs, sizeof(VAR_2->fprs));
 VAR_2->fpc = VAR_1->run->s.regs.fpc;

 FUNC_4(VAR_1);
 return 0;
}
