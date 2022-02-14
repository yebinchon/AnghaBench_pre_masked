
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {int kvm; struct kvm_run* run; } ;
struct kvm_run {int if_flag; int ready_for_interrupt_injection; int apic_base; int cr8; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_2)
{
 struct kvm_run *VAR_3 = VAR_2->run;

 VAR_3->if_flag = (FUNC_3(VAR_2) & VAR_1) != 0;
 VAR_3->flags = FUNC_0(VAR_2) ? VAR_0 : 0;
 VAR_3->cr8 = FUNC_2(VAR_2);
 VAR_3->apic_base = FUNC_1(VAR_2);
 VAR_3->ready_for_interrupt_injection =
  FUNC_5(VAR_2->kvm) ||
  FUNC_4(VAR_2);
}
