
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int reset; unsigned long pc; int r0; scalar_t__ be; } ;
struct TYPE_4__ {int gp_regs; } ;
struct TYPE_6__ {int target; TYPE_2__ reset_state; TYPE_1__ ctxt; int midr; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct kvm_regs {int dummy; } ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (int) ;
 struct kvm_regs VAR_1 ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (int *,struct kvm_regs*,int) ;
 int FUNC_5 () ;
 unsigned long* FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_8 (struct kvm_vcpu*) ;

int FUNC_9(struct kvm_vcpu *VAR_2)
{
 struct kvm_regs *VAR_3;

 switch (VAR_2->arch.target) {
 case 128:
 case 129:
  VAR_3 = &VAR_1;
  VAR_2->arch.midr = FUNC_5();
  break;
 default:
  return -VAR_0;
 }


 FUNC_4(&VAR_2->arch.ctxt.gp_regs, VAR_3, sizeof(VAR_2->arch.ctxt.gp_regs));


 FUNC_1(VAR_2);





 if (FUNC_0(VAR_2->arch.reset_state.reset)) {
  unsigned long VAR_4 = VAR_2->arch.reset_state.pc;


  if (VAR_4 & 1) {
   VAR_4 &= ~1UL;
   FUNC_8(VAR_2);
  }


  if (VAR_2->arch.reset_state.be)
   FUNC_3(VAR_2);

  *FUNC_6(VAR_2) = VAR_4;
  FUNC_7(VAR_2, 0, VAR_2->arch.reset_state.r0);

  VAR_2->arch.reset_state.reset = 0;
 }


 return FUNC_2(VAR_2);
}
