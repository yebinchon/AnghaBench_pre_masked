
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {TYPE_2__* run; } ;
struct kvm_fpu {scalar_t__ fprs; int fpc; } ;
typedef int freg_t ;
typedef int __vector128 ;
struct TYPE_6__ {int fprs; scalar_t__ vrs; int fpc; } ;
struct TYPE_4__ {TYPE_3__ regs; } ;
struct TYPE_5__ {TYPE_1__ s; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;

int FUNC_5(struct kvm_vcpu *VAR_2, struct kvm_fpu *VAR_3)
{
 int VAR_4 = 0;

 FUNC_3(VAR_2);

 if (FUNC_2(VAR_3->fpc)) {
  VAR_4 = -VAR_0;
  goto out;
 }
 VAR_2->run->s.regs.fpc = VAR_3->fpc;
 if (VAR_1)
  FUNC_0((__vector128 *) VAR_2->run->s.regs.vrs,
     (freg_t *) VAR_3->fprs);
 else
  FUNC_1(VAR_2->run->s.regs.fprs, &VAR_3->fprs, sizeof(VAR_3->fprs));

out:
 FUNC_4(VAR_2);
 return VAR_4;
}
