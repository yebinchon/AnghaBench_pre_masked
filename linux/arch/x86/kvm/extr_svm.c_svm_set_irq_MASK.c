
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vcpu_svm {TYPE_3__* vmcb; } ;
struct TYPE_9__ {int nr; } ;
struct TYPE_10__ {TYPE_4__ interrupt; } ;
struct TYPE_6__ {int irq_injections; } ;
struct kvm_vcpu {TYPE_5__ arch; TYPE_1__ stat; } ;
struct TYPE_7__ {int event_inj; } ;
struct TYPE_8__ {TYPE_2__ control; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vcpu_svm*) ;
 struct vcpu_svm* FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_2)
{
 struct vcpu_svm *VAR_3 = FUNC_2(VAR_2);

 FUNC_0(!(FUNC_1(VAR_3)));

 FUNC_3(VAR_2->arch.interrupt.nr);
 ++VAR_2->stat.irq_injections;

 VAR_3->vmcb->control.event_inj = VAR_2->arch.interrupt.nr |
  VAR_1 | VAR_0;
}
