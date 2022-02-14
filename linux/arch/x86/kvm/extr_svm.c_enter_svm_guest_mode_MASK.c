
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_12__ ;


typedef int u64 ;
struct TYPE_25__ {int nested_ctl; int msrpm_base_pa; int iopm_base_pa; int int_ctl; int pause_filter_thresh; int pause_filter_count; int event_inj_err; int event_inj; int int_state; int int_vector; int virt_ext; scalar_t__ tsc_offset; int intercept; int intercept_exceptions; int intercept_dr; int intercept_cr; int nested_cr3; } ;
struct TYPE_28__ {int cpl; int dr6; int dr7; int rip; int rsp; int rax; int cr2; int cr3; int cr4; int cr0; int efer; int rflags; int idtr; int gdtr; int ds; int ss; int cs; int es; } ;
struct vmcb {TYPE_3__ control; TYPE_6__ save; } ;
struct TYPE_24__ {int vmcb_msrpm; int vmcb_iopm; int vmcb; int intercept; int intercept_exceptions; int intercept_dr; int intercept_cr; int nested_cr3; } ;
struct TYPE_27__ {int hflags; int tsc_offset; int cr2; int cr3; } ;
struct TYPE_29__ {TYPE_5__ arch; } ;
struct vcpu_svm {TYPE_12__* vmcb; TYPE_2__ nested; TYPE_7__ vcpu; } ;
struct kvm_host_map {int dummy; } ;
struct TYPE_26__ {int cpl; int dr6; int dr7; int rip; int rsp; int rax; int cr2; int cr3; int idtr; int gdtr; int ds; int ss; int cs; int es; } ;
struct TYPE_23__ {int int_ctl; int pause_filter_thresh; int pause_filter_count; int event_inj_err; int event_inj; int int_state; int int_vector; int virt_ext; int tsc_offset; } ;
struct TYPE_22__ {TYPE_1__ control; TYPE_4__ save; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct vcpu_svm*,int ) ;
 int FUNC_1 (struct vcpu_svm*,int ) ;
 int FUNC_2 (struct vcpu_svm*) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_7__*,int ) ;
 int FUNC_7 (TYPE_7__*,int ) ;
 int FUNC_8 (TYPE_7__*,int ) ;
 int FUNC_9 (TYPE_7__*,int ) ;
 int FUNC_10 (TYPE_7__*,int ) ;
 int FUNC_11 (TYPE_7__*,struct kvm_host_map*,int) ;
 int FUNC_12 (TYPE_12__*) ;
 int FUNC_13 (TYPE_7__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_14 (struct vcpu_svm*) ;
 int FUNC_15 (TYPE_7__*,int) ;
 int FUNC_16 (TYPE_7__*,int ) ;
 int FUNC_17 (TYPE_7__*,int ) ;
 int FUNC_18 (TYPE_7__*,int ) ;

__attribute__((used)) static void FUNC_19(struct vcpu_svm *VAR_9, u64 VAR_10,
     struct vmcb *VAR_11, struct kvm_host_map *VAR_12)
{
 if (FUNC_4(&VAR_9->vcpu) & VAR_7)
  VAR_9->vcpu.arch.hflags |= VAR_0;
 else
  VAR_9->vcpu.arch.hflags &= ~VAR_0;

 if (VAR_11->control.nested_ctl & VAR_5) {
  VAR_9->nested.nested_cr3 = VAR_11->control.nested_cr3;
  FUNC_13(&VAR_9->vcpu);
 }


 VAR_9->vmcb->save.es = VAR_11->save.es;
 VAR_9->vmcb->save.cs = VAR_11->save.cs;
 VAR_9->vmcb->save.ss = VAR_11->save.ss;
 VAR_9->vmcb->save.ds = VAR_11->save.ds;
 VAR_9->vmcb->save.gdtr = VAR_11->save.gdtr;
 VAR_9->vmcb->save.idtr = VAR_11->save.idtr;
 FUNC_10(&VAR_9->vcpu, VAR_11->save.rflags);
 FUNC_18(&VAR_9->vcpu, VAR_11->save.efer);
 FUNC_16(&VAR_9->vcpu, VAR_11->save.cr0);
 FUNC_17(&VAR_9->vcpu, VAR_11->save.cr4);
 if (VAR_8) {
  VAR_9->vmcb->save.cr3 = VAR_11->save.cr3;
  VAR_9->vcpu.arch.cr3 = VAR_11->save.cr3;
 } else
  (void)FUNC_9(&VAR_9->vcpu, VAR_11->save.cr3);


 FUNC_5(&VAR_9->vcpu);

 VAR_9->vmcb->save.cr2 = VAR_9->vcpu.arch.cr2 = VAR_11->save.cr2;
 FUNC_6(&VAR_9->vcpu, VAR_11->save.rax);
 FUNC_8(&VAR_9->vcpu, VAR_11->save.rsp);
 FUNC_7(&VAR_9->vcpu, VAR_11->save.rip);


 VAR_9->vmcb->save.rax = VAR_11->save.rax;
 VAR_9->vmcb->save.rsp = VAR_11->save.rsp;
 VAR_9->vmcb->save.rip = VAR_11->save.rip;
 VAR_9->vmcb->save.dr7 = VAR_11->save.dr7;
 VAR_9->vmcb->save.dr6 = VAR_11->save.dr6;
 VAR_9->vmcb->save.cpl = VAR_11->save.cpl;

 VAR_9->nested.vmcb_msrpm = VAR_11->control.msrpm_base_pa & ~0x0fffULL;
 VAR_9->nested.vmcb_iopm = VAR_11->control.iopm_base_pa & ~0x0fffULL;


 VAR_9->nested.intercept_cr = VAR_11->control.intercept_cr;
 VAR_9->nested.intercept_dr = VAR_11->control.intercept_dr;
 VAR_9->nested.intercept_exceptions = VAR_11->control.intercept_exceptions;
 VAR_9->nested.intercept = VAR_11->control.intercept;

 FUNC_15(&VAR_9->vcpu, 1);
 VAR_9->vmcb->control.int_ctl = VAR_11->control.int_ctl | VAR_6;
 if (VAR_11->control.int_ctl & VAR_6)
  VAR_9->vcpu.arch.hflags |= VAR_1;
 else
  VAR_9->vcpu.arch.hflags &= ~VAR_1;

 if (VAR_9->vcpu.arch.hflags & VAR_1) {

  FUNC_0(VAR_9, VAR_2);
  FUNC_0(VAR_9, VAR_3);
 }


 FUNC_1(VAR_9, VAR_4);

 VAR_9->vcpu.arch.tsc_offset += VAR_11->control.tsc_offset;
 VAR_9->vmcb->control.tsc_offset = VAR_9->vcpu.arch.tsc_offset;

 VAR_9->vmcb->control.virt_ext = VAR_11->control.virt_ext;
 VAR_9->vmcb->control.int_vector = VAR_11->control.int_vector;
 VAR_9->vmcb->control.int_state = VAR_11->control.int_state;
 VAR_9->vmcb->control.event_inj = VAR_11->control.event_inj;
 VAR_9->vmcb->control.event_inj_err = VAR_11->control.event_inj_err;

 VAR_9->vmcb->control.pause_filter_count =
  VAR_11->control.pause_filter_count;
 VAR_9->vmcb->control.pause_filter_thresh =
  VAR_11->control.pause_filter_thresh;

 FUNC_11(&VAR_9->vcpu, VAR_12, 1);


 FUNC_3(&VAR_9->vcpu);





 FUNC_14(VAR_9);

 VAR_9->nested.vmcb = VAR_10;

 FUNC_2(VAR_9);

 FUNC_12(VAR_9->vmcb);
}
