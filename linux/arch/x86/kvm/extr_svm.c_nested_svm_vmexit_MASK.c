
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct vmcb_control_area {int exit_int_info; int event_inj; int tsc_offset; int int_ctl; int pause_filter_thresh; int pause_filter_count; scalar_t__ event_inj_err; scalar_t__ tlb_ctl; scalar_t__ exit_int_info_err; int next_rip; int exit_info_2; int exit_info_1; int exit_code_hi; int exit_code; int int_state; int int_vector; } ;
struct TYPE_24__ {int cr0; scalar_t__ cpl; scalar_t__ dr7; int rip; int rsp; int rax; int cr3; int cr4; int efer; int rflags; int idtr; int gdtr; int ds; int ss; int cs; int es; int dr6; int cr2; } ;
struct vmcb {struct vmcb_control_area control; TYPE_1__ save; } ;
struct TYPE_25__ {int hflags; int nmi_injected; int cr3; int tsc_offset; int cr4; int efer; } ;
struct TYPE_27__ {TYPE_2__ arch; } ;
struct TYPE_26__ {scalar_t__ nested_cr3; int vmcb; struct vmcb* hsave; } ;
struct vcpu_svm {TYPE_4__ vcpu; struct vmcb* vmcb; TYPE_3__ nested; scalar_t__ nrips_enabled; } ;
struct kvm_host_map {struct vmcb* hva; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vmcb*,struct vmcb*) ;
 int FUNC_1 (struct vcpu_svm*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*,int ) ;
 int FUNC_13 (TYPE_4__*,int ) ;
 int FUNC_14 (TYPE_4__*,int ) ;
 int FUNC_15 (TYPE_4__*,int ) ;
 int FUNC_16 (TYPE_4__*,int ,struct kvm_host_map*) ;
 int FUNC_17 (TYPE_4__*,struct kvm_host_map*,int) ;
 int FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (struct vmcb*) ;
 int FUNC_20 (TYPE_4__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_21 (TYPE_4__*,int) ;
 int FUNC_22 (TYPE_4__*,int ) ;
 int FUNC_23 (TYPE_4__*,int ) ;
 int FUNC_24 (int ,int ,int ,int,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_25(struct vcpu_svm *VAR_7)
{
 int VAR_8;
 struct vmcb *VAR_9;
 struct vmcb *VAR_10 = VAR_7->nested.hsave;
 struct vmcb *VAR_11 = VAR_7->vmcb;
 struct kvm_host_map VAR_12;

 FUNC_24(VAR_11->control.exit_code,
           VAR_11->control.exit_info_1,
           VAR_11->control.exit_info_2,
           VAR_11->control.exit_int_info,
           VAR_11->control.exit_int_info_err,
           VAR_2);

 VAR_8 = FUNC_16(&VAR_7->vcpu, FUNC_2(VAR_7->nested.vmcb), &VAR_12);
 if (VAR_8) {
  if (VAR_8 == -VAR_0)
   FUNC_6(&VAR_7->vcpu, 0);
  return 1;
 }

 VAR_9 = VAR_12.hva;


 FUNC_18(&VAR_7->vcpu);
 VAR_7->nested.vmcb = 0;


 FUNC_1(VAR_7);

 VAR_9->save.es = VAR_11->save.es;
 VAR_9->save.cs = VAR_11->save.cs;
 VAR_9->save.ss = VAR_11->save.ss;
 VAR_9->save.ds = VAR_11->save.ds;
 VAR_9->save.gdtr = VAR_11->save.gdtr;
 VAR_9->save.idtr = VAR_11->save.idtr;
 VAR_9->save.efer = VAR_7->vcpu.arch.efer;
 VAR_9->save.cr0 = FUNC_10(&VAR_7->vcpu);
 VAR_9->save.cr3 = FUNC_11(&VAR_7->vcpu);
 VAR_9->save.cr2 = VAR_11->save.cr2;
 VAR_9->save.cr4 = VAR_7->vcpu.arch.cr4;
 VAR_9->save.rflags = FUNC_5(&VAR_7->vcpu);
 VAR_9->save.rip = VAR_11->save.rip;
 VAR_9->save.rsp = VAR_11->save.rsp;
 VAR_9->save.rax = VAR_11->save.rax;
 VAR_9->save.dr7 = VAR_11->save.dr7;
 VAR_9->save.dr6 = VAR_11->save.dr6;
 VAR_9->save.cpl = VAR_11->save.cpl;

 VAR_9->control.int_ctl = VAR_11->control.int_ctl;
 VAR_9->control.int_vector = VAR_11->control.int_vector;
 VAR_9->control.int_state = VAR_11->control.int_state;
 VAR_9->control.exit_code = VAR_11->control.exit_code;
 VAR_9->control.exit_code_hi = VAR_11->control.exit_code_hi;
 VAR_9->control.exit_info_1 = VAR_11->control.exit_info_1;
 VAR_9->control.exit_info_2 = VAR_11->control.exit_info_2;
 VAR_9->control.exit_int_info = VAR_11->control.exit_int_info;
 VAR_9->control.exit_int_info_err = VAR_11->control.exit_int_info_err;

 if (VAR_7->nrips_enabled)
  VAR_9->control.next_rip = VAR_11->control.next_rip;
 if (VAR_11->control.event_inj & VAR_3) {
  struct vmcb_control_area *VAR_13 = &VAR_9->control;

  VAR_13->exit_int_info = VAR_11->control.event_inj;
  VAR_13->exit_int_info_err = VAR_11->control.event_inj_err;
 }

 VAR_9->control.tlb_ctl = 0;
 VAR_9->control.event_inj = 0;
 VAR_9->control.event_inj_err = 0;

 VAR_9->control.pause_filter_count =
  VAR_7->vmcb->control.pause_filter_count;
 VAR_9->control.pause_filter_thresh =
  VAR_7->vmcb->control.pause_filter_thresh;


 if (!(VAR_7->vcpu.arch.hflags & VAR_1))
  VAR_9->control.int_ctl &= ~VAR_4;


 FUNC_0(VAR_11, VAR_10);

 VAR_7->vcpu.arch.tsc_offset = VAR_7->vmcb->control.tsc_offset;
 FUNC_3(&VAR_7->vcpu);
 FUNC_4(&VAR_7->vcpu);

 VAR_7->nested.nested_cr3 = 0;


 VAR_7->vmcb->save.es = VAR_10->save.es;
 VAR_7->vmcb->save.cs = VAR_10->save.cs;
 VAR_7->vmcb->save.ss = VAR_10->save.ss;
 VAR_7->vmcb->save.ds = VAR_10->save.ds;
 VAR_7->vmcb->save.gdtr = VAR_10->save.gdtr;
 VAR_7->vmcb->save.idtr = VAR_10->save.idtr;
 FUNC_15(&VAR_7->vcpu, VAR_10->save.rflags);
 FUNC_23(&VAR_7->vcpu, VAR_10->save.efer);
 FUNC_21(&VAR_7->vcpu, VAR_10->save.cr0 | VAR_5);
 FUNC_22(&VAR_7->vcpu, VAR_10->save.cr4);
 if (VAR_6) {
  VAR_7->vmcb->save.cr3 = VAR_10->save.cr3;
  VAR_7->vcpu.arch.cr3 = VAR_10->save.cr3;
 } else {
  (void)FUNC_14(&VAR_7->vcpu, VAR_10->save.cr3);
 }
 FUNC_9(&VAR_7->vcpu, VAR_10->save.rax);
 FUNC_13(&VAR_7->vcpu, VAR_10->save.rsp);
 FUNC_12(&VAR_7->vcpu, VAR_10->save.rip);
 VAR_7->vmcb->save.dr7 = 0;
 VAR_7->vmcb->save.cpl = 0;
 VAR_7->vmcb->control.exit_int_info = 0;

 FUNC_19(VAR_7->vmcb);

 FUNC_17(&VAR_7->vcpu, &VAR_12, 1);

 FUNC_20(&VAR_7->vcpu);
 FUNC_8(&VAR_7->vcpu);
 FUNC_7(&VAR_7->vcpu);





 VAR_7->vcpu.arch.nmi_injected = 0;
 FUNC_3(&VAR_7->vcpu);
 FUNC_4(&VAR_7->vcpu);

 return 0;
}
