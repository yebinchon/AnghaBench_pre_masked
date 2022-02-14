
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pending; } ;
struct TYPE_4__ {int emulate_regs_need_sync_from_vcpu; int emulate_regs_need_sync_to_vcpu; TYPE_1__ exception; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct kvm_regs {int rflags; int rip; int r15; int r14; int r13; int r12; int r11; int r10; int r9; int r8; int rbp; int rsp; int rdi; int rsi; int rdx; int rcx; int rbx; int rax; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct kvm_vcpu*,int ) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;
 int FUNC_5 (struct kvm_vcpu*,int ) ;
 int FUNC_6 (struct kvm_vcpu*,int ) ;
 int FUNC_7 (struct kvm_vcpu*,int ) ;
 int FUNC_8 (struct kvm_vcpu*,int ) ;
 int FUNC_9 (struct kvm_vcpu*,int ) ;
 int FUNC_10 (struct kvm_vcpu*,int ) ;
 int FUNC_11 (struct kvm_vcpu*,int ) ;
 int FUNC_12 (struct kvm_vcpu*,int ) ;
 int FUNC_13 (struct kvm_vcpu*,int ) ;
 int FUNC_14 (struct kvm_vcpu*,int ) ;
 int FUNC_15 (struct kvm_vcpu*,int ) ;
 int FUNC_16 (struct kvm_vcpu*,int ) ;
 int FUNC_17 (struct kvm_vcpu*,int ) ;
 int FUNC_18 (struct kvm_vcpu*,int) ;

__attribute__((used)) static void FUNC_19(struct kvm_vcpu *VAR_2, struct kvm_regs *VAR_3)
{
 VAR_2->arch.emulate_regs_need_sync_from_vcpu = 1;
 VAR_2->arch.emulate_regs_need_sync_to_vcpu = 0;

 FUNC_9(VAR_2, VAR_3->rax);
 FUNC_11(VAR_2, VAR_3->rbx);
 FUNC_12(VAR_2, VAR_3->rcx);
 FUNC_14(VAR_2, VAR_3->rdx);
 FUNC_16(VAR_2, VAR_3->rsi);
 FUNC_13(VAR_2, VAR_3->rdi);
 FUNC_17(VAR_2, VAR_3->rsp);
 FUNC_10(VAR_2, VAR_3->rbp);
 FUNC_15(VAR_2, VAR_3->rip);
 FUNC_18(VAR_2, VAR_3->rflags | VAR_1);

 VAR_2->arch.exception.pending = 0;

 FUNC_0(VAR_0, VAR_2);
}
