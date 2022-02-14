
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vcpu_svm {TYPE_2__* vmcb; } ;
struct TYPE_6__ {int switch_db_regs; int dr7; int dr6; int * db; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_4__ {int dr7; } ;
struct TYPE_5__ {TYPE_1__ save; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct vcpu_svm*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 struct vcpu_svm* FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_1)
{
 struct vcpu_svm *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(VAR_1->arch.db[0], 0);
 FUNC_0(VAR_1->arch.db[1], 1);
 FUNC_0(VAR_1->arch.db[2], 2);
 FUNC_0(VAR_1->arch.db[3], 3);
 VAR_1->arch.dr6 = FUNC_2(VAR_1);
 VAR_1->arch.dr7 = VAR_2->vmcb->save.dr7;

 VAR_1->arch.switch_db_regs &= ~VAR_0;
 FUNC_1(VAR_2);
}
