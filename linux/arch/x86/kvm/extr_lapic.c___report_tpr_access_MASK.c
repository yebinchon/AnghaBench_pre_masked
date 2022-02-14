
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {struct kvm_run* run; } ;
struct TYPE_2__ {int is_write; int rip; } ;
struct kvm_run {TYPE_1__ tpr_access; } ;
struct kvm_lapic {struct kvm_vcpu* vcpu; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_2(struct kvm_lapic *VAR_1, bool VAR_2)
{
 struct kvm_vcpu *VAR_3 = VAR_1->vcpu;
 struct kvm_run *VAR_4 = VAR_3->run;

 FUNC_0(VAR_0, VAR_3);
 VAR_4->tpr_access.rip = FUNC_1(VAR_3);
 VAR_4->tpr_access.is_write = VAR_2;
}
