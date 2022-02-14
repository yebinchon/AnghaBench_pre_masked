
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_18__ {int intercept_cr; scalar_t__ exit_info_2; scalar_t__ exit_info_1; scalar_t__ exit_code_hi; void* exit_code; int intercept; int intercept_exceptions; int nested_ctl; int event_inj; int int_ctl; } ;
struct TYPE_17__ {int cr3; int rax; int rsp; int rip; int rflags; int cr4; int cr0; int efer; int idtr; int gdtr; int ds; int ss; int cs; int es; } ;
struct vmcb {TYPE_4__ control; TYPE_3__ save; } ;
struct TYPE_16__ {int cr4; int efer; } ;
struct TYPE_19__ {TYPE_2__ arch; } ;
struct TYPE_15__ {struct vmcb* hsave; } ;
struct vcpu_svm {struct vmcb* vmcb; TYPE_5__ vcpu; TYPE_1__ nested; } ;
struct kvm_host_map {struct vmcb* hva; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct vmcb*,struct vmcb*) ;
 int FUNC_1 (struct vcpu_svm*,int ,struct vmcb*,struct kvm_host_map*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*,int ,struct kvm_host_map*) ;
 int FUNC_12 (TYPE_5__*,struct kvm_host_map*,int) ;
 int FUNC_13 (struct vcpu_svm*) ;
 int FUNC_14 (struct vcpu_svm*) ;
 int FUNC_15 (struct vmcb*) ;
 scalar_t__ VAR_2 ;
 int FUNC_16 (int,int,int ,int ) ;
 int FUNC_17 (int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_18(struct vcpu_svm *VAR_3)
{
 int VAR_4;
 struct vmcb *VAR_5;
 struct vmcb *VAR_6 = VAR_3->nested.hsave;
 struct vmcb *VAR_7 = VAR_3->vmcb;
 struct kvm_host_map VAR_8;
 u64 VAR_9;

 VAR_9 = VAR_3->vmcb->save.rax;

 VAR_4 = FUNC_11(&VAR_3->vcpu, FUNC_2(VAR_9), &VAR_8);
 if (VAR_4 == -VAR_0) {
  FUNC_6(&VAR_3->vcpu, 0);
  return 1;
 } else if (VAR_4) {
  return FUNC_10(&VAR_3->vcpu);
 }

 VAR_4 = FUNC_10(&VAR_3->vcpu);

 VAR_5 = VAR_8.hva;

 if (!FUNC_15(VAR_5)) {
  VAR_5->control.exit_code = VAR_1;
  VAR_5->control.exit_code_hi = 0;
  VAR_5->control.exit_info_1 = 0;
  VAR_5->control.exit_info_2 = 0;

  FUNC_12(&VAR_3->vcpu, &VAR_8, 1);

  return VAR_4;
 }

 FUNC_17(VAR_3->vmcb->save.rip, VAR_9,
          VAR_5->save.rip,
          VAR_5->control.int_ctl,
          VAR_5->control.event_inj,
          VAR_5->control.nested_ctl);

 FUNC_16(VAR_5->control.intercept_cr & 0xffff,
        VAR_5->control.intercept_cr >> 16,
        VAR_5->control.intercept_exceptions,
        VAR_5->control.intercept);


 FUNC_3(&VAR_3->vcpu);
 FUNC_4(&VAR_3->vcpu);





 VAR_6->save.es = VAR_7->save.es;
 VAR_6->save.cs = VAR_7->save.cs;
 VAR_6->save.ss = VAR_7->save.ss;
 VAR_6->save.ds = VAR_7->save.ds;
 VAR_6->save.gdtr = VAR_7->save.gdtr;
 VAR_6->save.idtr = VAR_7->save.idtr;
 VAR_6->save.efer = VAR_3->vcpu.arch.efer;
 VAR_6->save.cr0 = FUNC_7(&VAR_3->vcpu);
 VAR_6->save.cr4 = VAR_3->vcpu.arch.cr4;
 VAR_6->save.rflags = FUNC_5(&VAR_3->vcpu);
 VAR_6->save.rip = FUNC_9(&VAR_3->vcpu);
 VAR_6->save.rsp = VAR_7->save.rsp;
 VAR_6->save.rax = VAR_7->save.rax;
 if (VAR_2)
  VAR_6->save.cr3 = VAR_7->save.cr3;
 else
  VAR_6->save.cr3 = FUNC_8(&VAR_3->vcpu);

 FUNC_0(VAR_6, VAR_7);

 FUNC_1(VAR_3, VAR_9, VAR_5, &VAR_8);

 if (!FUNC_14(VAR_3)) {
  VAR_3->vmcb->control.exit_code = VAR_1;
  VAR_3->vmcb->control.exit_code_hi = 0;
  VAR_3->vmcb->control.exit_info_1 = 0;
  VAR_3->vmcb->control.exit_info_2 = 0;

  FUNC_13(VAR_3);
 }

 return VAR_4;
}
