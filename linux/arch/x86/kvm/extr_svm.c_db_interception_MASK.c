
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct kvm_vcpu {int guest_debug; struct kvm_run* run; } ;
struct vcpu_svm {TYPE_3__* vmcb; struct kvm_vcpu vcpu; scalar_t__ nmi_singlestep; } ;
struct TYPE_9__ {int exception; scalar_t__ pc; } ;
struct TYPE_10__ {TYPE_4__ arch; } ;
struct kvm_run {TYPE_5__ debug; int exit_reason; } ;
struct TYPE_6__ {scalar_t__ base; } ;
struct TYPE_7__ {scalar_t__ rip; TYPE_1__ cs; } ;
struct TYPE_8__ {TYPE_2__ save; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vcpu_svm*) ;
 int FUNC_1 (int ,struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;

__attribute__((used)) static int FUNC_3(struct vcpu_svm *VAR_5)
{
 struct kvm_run *VAR_6 = VAR_5->vcpu.run;
 struct kvm_vcpu *VAR_7 = &VAR_5->vcpu;

 if (!(VAR_5->vcpu.guest_debug &
       (VAR_2 | VAR_3)) &&
  !VAR_5->nmi_singlestep) {
  FUNC_2(&VAR_5->vcpu, VAR_0);
  return 1;
 }

 if (VAR_5->nmi_singlestep) {
  FUNC_0(VAR_5);

  FUNC_1(VAR_4, VAR_7);
 }

 if (VAR_5->vcpu.guest_debug &
     (VAR_2 | VAR_3)) {
  VAR_6->exit_reason = VAR_1;
  VAR_6->debug.arch.pc =
   VAR_5->vmcb->save.cs.base + VAR_5->vmcb->save.rip;
  VAR_6->debug.arch.exception = VAR_0;
  return 0;
 }

 return 1;
}
