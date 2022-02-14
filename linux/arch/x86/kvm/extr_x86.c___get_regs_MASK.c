
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int emulate_regs_need_sync_to_vcpu; int emulate_ctxt; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_regs {int rflags; int rip; int r15; int r14; int r13; int r12; int r11; int r10; int r9; int r8; int rbp; int rsp; int rdi; int rsi; int rdx; int rcx; int rbx; int rax; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*) ;
 int FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (struct kvm_vcpu*) ;
 int FUNC_12 (struct kvm_vcpu*) ;
 int FUNC_13 (struct kvm_vcpu*) ;
 int FUNC_14 (struct kvm_vcpu*) ;
 int FUNC_15 (struct kvm_vcpu*) ;
 int FUNC_16 (struct kvm_vcpu*) ;
 int FUNC_17 (struct kvm_vcpu*) ;
 int FUNC_18 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_19(struct kvm_vcpu *VAR_0, struct kvm_regs *VAR_1)
{
 if (VAR_0->arch.emulate_regs_need_sync_to_vcpu) {







  FUNC_0(&VAR_0->arch.emulate_ctxt);
  VAR_0->arch.emulate_regs_need_sync_to_vcpu = 0;
 }
 VAR_1->rax = FUNC_10(VAR_0);
 VAR_1->rbx = FUNC_12(VAR_0);
 VAR_1->rcx = FUNC_13(VAR_0);
 VAR_1->rdx = FUNC_15(VAR_0);
 VAR_1->rsi = FUNC_17(VAR_0);
 VAR_1->rdi = FUNC_14(VAR_0);
 VAR_1->rsp = FUNC_18(VAR_0);
 VAR_1->rbp = FUNC_11(VAR_0);
 VAR_1->rip = FUNC_16(VAR_0);
 VAR_1->rflags = FUNC_1(VAR_0);
}
