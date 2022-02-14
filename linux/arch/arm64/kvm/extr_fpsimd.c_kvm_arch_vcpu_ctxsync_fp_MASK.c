
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fp_regs; } ;
struct TYPE_5__ {TYPE_1__ gp_regs; } ;
struct TYPE_6__ {int flags; int sve_max_vl; int sve_state; TYPE_2__ ctxt; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct kvm_vcpu*) ;

void FUNC_6(struct kvm_vcpu *VAR_3)
{
 FUNC_0(!FUNC_3());

 if (VAR_3->arch.flags & VAR_0) {
  FUNC_2(&VAR_3->arch.ctxt.gp_regs.fp_regs,
      VAR_3->arch.sve_state,
      VAR_3->arch.sve_max_vl);

  FUNC_1(VAR_1);
  FUNC_4(VAR_2, FUNC_5(VAR_3));
 }
}
