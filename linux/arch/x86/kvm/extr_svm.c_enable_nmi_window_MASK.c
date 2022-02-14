
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ exit_required; } ;
struct TYPE_8__ {int hflags; } ;
struct TYPE_9__ {TYPE_3__ arch; } ;
struct vcpu_svm {int nmi_singlestep; TYPE_2__* vmcb; int nmi_singlestep_guest_rflags; TYPE_5__ nested; TYPE_4__ vcpu; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_6__ {int rflags; } ;
struct TYPE_7__ {TYPE_1__ save; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vcpu_svm*) ;
 int FUNC_1 (struct vcpu_svm*,int ) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 struct vcpu_svm* FUNC_3 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_4 (struct vcpu_svm*) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_5)
{
 struct vcpu_svm *VAR_6 = FUNC_3(VAR_5);

 if ((VAR_6->vcpu.arch.hflags & (VAR_1 | VAR_0))
     == VAR_1)
  return;

 if (!FUNC_0(VAR_6)) {
  if (FUNC_4(VAR_6))
   FUNC_1(VAR_6, VAR_2);
  return;
 }

 if (VAR_6->nested.exit_required)
  return;





 VAR_6->nmi_singlestep_guest_rflags = FUNC_2(VAR_5);
 VAR_6->nmi_singlestep = 1;
 VAR_6->vmcb->save.rflags |= (VAR_4 | VAR_3);
}
