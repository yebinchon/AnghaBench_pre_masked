
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int dummy; } ;
struct kvm_regs {int * gpr; int sprg7; int sprg6; int sprg5; int sprg4; int sprg3; int sprg2; int sprg1; int sprg0; int srr1; int srr0; int msr; int xer; int lr; int ctr; int cr; int pc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct kvm_vcpu*,int,int ) ;
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

int FUNC_18(struct kvm_vcpu *VAR_0, struct kvm_regs *VAR_1)
{
 int VAR_2;

 FUNC_6(VAR_0, VAR_1->pc);
 FUNC_1(VAR_0, VAR_1->cr);
 FUNC_2(VAR_0, VAR_1->ctr);
 FUNC_4(VAR_0, VAR_1->lr);
 FUNC_17(VAR_0, VAR_1->xer);
 FUNC_5(VAR_0, VAR_1->msr);
 FUNC_15(VAR_0, VAR_1->srr0);
 FUNC_16(VAR_0, VAR_1->srr1);
 FUNC_7(VAR_0, VAR_1->sprg0);
 FUNC_8(VAR_0, VAR_1->sprg1);
 FUNC_9(VAR_0, VAR_1->sprg2);
 FUNC_10(VAR_0, VAR_1->sprg3);
 FUNC_11(VAR_0, VAR_1->sprg4);
 FUNC_12(VAR_0, VAR_1->sprg5);
 FUNC_13(VAR_0, VAR_1->sprg6);
 FUNC_14(VAR_0, VAR_1->sprg7);

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->gpr); VAR_2++)
  FUNC_3(VAR_0, VAR_2, VAR_1->gpr[VAR_2]);

 return 0;
}
