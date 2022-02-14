
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vcpu_svm {unsigned long nmi_singlestep_guest_rflags; scalar_t__ nmi_singlestep; TYPE_2__* vmcb; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {unsigned long rflags; } ;
struct TYPE_4__ {TYPE_1__ save; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct vcpu_svm* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static unsigned long FUNC_1(struct kvm_vcpu *VAR_2)
{
 struct vcpu_svm *VAR_3 = FUNC_0(VAR_2);
 unsigned long VAR_4 = VAR_3->vmcb->save.rflags;

 if (VAR_3->nmi_singlestep) {

  if (!(VAR_3->nmi_singlestep_guest_rflags & VAR_1))
   VAR_4 &= ~VAR_1;
  if (!(VAR_3->nmi_singlestep_guest_rflags & VAR_0))
   VAR_4 &= ~VAR_0;
 }
 return VAR_4;
}
