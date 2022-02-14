
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pid; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_regs {int * gpr; int sprg7; int sprg6; int sprg5; int sprg4; int sprg3; int sprg2; int sprg1; int sprg0; int pid; int srr1; int srr0; int msr; int xer; int lr; int ctr; int cr; int pc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,int) ;
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

int FUNC_18(struct kvm_vcpu *VAR_0, struct kvm_regs *VAR_1)
{
 int VAR_2;

 VAR_1->pc = FUNC_6(VAR_0);
 VAR_1->cr = FUNC_1(VAR_0);
 VAR_1->ctr = FUNC_2(VAR_0);
 VAR_1->lr = FUNC_4(VAR_0);
 VAR_1->xer = FUNC_17(VAR_0);
 VAR_1->msr = FUNC_5(VAR_0);
 VAR_1->srr0 = FUNC_15(VAR_0);
 VAR_1->srr1 = FUNC_16(VAR_0);
 VAR_1->pid = VAR_0->arch.pid;
 VAR_1->sprg0 = FUNC_7(VAR_0);
 VAR_1->sprg1 = FUNC_8(VAR_0);
 VAR_1->sprg2 = FUNC_9(VAR_0);
 VAR_1->sprg3 = FUNC_10(VAR_0);
 VAR_1->sprg4 = FUNC_11(VAR_0);
 VAR_1->sprg5 = FUNC_12(VAR_0);
 VAR_1->sprg6 = FUNC_13(VAR_0);
 VAR_1->sprg7 = FUNC_14(VAR_0);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->gpr); VAR_2++)
  VAR_1->gpr[VAR_2] = FUNC_3(VAR_0, VAR_2);

 return 0;
}
