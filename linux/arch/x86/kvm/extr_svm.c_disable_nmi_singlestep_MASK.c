
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int guest_debug; } ;
struct vcpu_svm {int nmi_singlestep; int nmi_singlestep_guest_rflags; TYPE_2__* vmcb; TYPE_1__ vcpu; } ;
struct TYPE_6__ {int rflags; } ;
struct TYPE_5__ {TYPE_3__ save; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct vcpu_svm *VAR_3)
{
 VAR_3->nmi_singlestep = 0;

 if (!(VAR_3->vcpu.guest_debug & VAR_0)) {

  if (!(VAR_3->nmi_singlestep_guest_rflags & VAR_2))
   VAR_3->vmcb->save.rflags &= ~VAR_2;
  if (!(VAR_3->nmi_singlestep_guest_rflags & VAR_1))
   VAR_3->vmcb->save.rflags &= ~VAR_1;
 }
}
