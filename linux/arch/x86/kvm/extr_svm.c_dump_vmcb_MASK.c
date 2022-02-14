
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_21__ {int base; int limit; int attrib; int selector; } ;
struct TYPE_20__ {int base; int limit; int attrib; int selector; } ;
struct TYPE_19__ {int base; int limit; int attrib; int selector; } ;
struct TYPE_18__ {int base; int limit; int attrib; int selector; } ;
struct TYPE_17__ {int base; int limit; int attrib; int selector; } ;
struct TYPE_16__ {int base; int limit; int attrib; int selector; } ;
struct TYPE_15__ {int base; int limit; int attrib; int selector; } ;
struct TYPE_14__ {int base; int limit; int attrib; int selector; } ;
struct TYPE_13__ {int base; int limit; int attrib; int selector; } ;
struct TYPE_12__ {int base; int limit; int attrib; int selector; } ;
struct vmcb_save_area {int last_excp_to; int last_excp_from; int br_to; int br_from; int dbgctl; int g_pat; int sysenter_eip; int sysenter_esp; int sysenter_cs; int kernel_gs_base; int sfmask; int cstar; int lstar; int star; int rax; int rsp; int rflags; int rip; int dr7; int dr6; int cr4; int cr3; int cr2; int cr0; int efer; int cpl; TYPE_8__ tr; TYPE_7__ idtr; TYPE_6__ ldtr; TYPE_5__ gdtr; TYPE_4__ gs; TYPE_3__ fs; TYPE_2__ ds; TYPE_1__ ss; TYPE_11__ cs; TYPE_10__ es; } ;
struct vmcb_control_area {int intercept_cr; int intercept_dr; int avic_physical_id; int avic_logical_id; int avic_backing_page; int next_rip; int virt_ext; int event_inj_err; int event_inj; int avic_vapic_bar; int nested_cr3; int nested_ctl; int exit_int_info_err; int exit_int_info; int exit_info_2; int exit_info_1; int exit_code; int int_state; int int_vector; int int_ctl; int tlb_ctl; int asid; int tsc_offset; int msrpm_base_pa; int iopm_base_pa; int pause_filter_thresh; int pause_filter_count; int intercept; int intercept_exceptions; } ;
struct vcpu_svm {TYPE_9__* vmcb; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_22__ {struct vmcb_save_area save; struct vmcb_control_area control; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 struct vcpu_svm* FUNC_2 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_1)
{
 struct vcpu_svm *VAR_2 = FUNC_2(VAR_1);
 struct vmcb_control_area *VAR_3 = &VAR_2->vmcb->control;
 struct vmcb_save_area *VAR_4 = &VAR_2->vmcb->save;

 if (!VAR_0) {
  FUNC_1("set kvm_amd.dump_invalid_vmcb=1 to dump internal KVM state.\n");
  return;
 }

 FUNC_0("VMCB Control Area:\n");
 FUNC_0("%-20s%04x\n", "cr_read:", VAR_3->intercept_cr & 0xffff);
 FUNC_0("%-20s%04x\n", "cr_write:", VAR_3->intercept_cr >> 16);
 FUNC_0("%-20s%04x\n", "dr_read:", VAR_3->intercept_dr & 0xffff);
 FUNC_0("%-20s%04x\n", "dr_write:", VAR_3->intercept_dr >> 16);
 FUNC_0("%-20s%08x\n", "exceptions:", VAR_3->intercept_exceptions);
 FUNC_0("%-20s%016llx\n", "intercepts:", VAR_3->intercept);
 FUNC_0("%-20s%d\n", "pause filter count:", VAR_3->pause_filter_count);
 FUNC_0("%-20s%d\n", "pause filter threshold:",
        VAR_3->pause_filter_thresh);
 FUNC_0("%-20s%016llx\n", "iopm_base_pa:", VAR_3->iopm_base_pa);
 FUNC_0("%-20s%016llx\n", "msrpm_base_pa:", VAR_3->msrpm_base_pa);
 FUNC_0("%-20s%016llx\n", "tsc_offset:", VAR_3->tsc_offset);
 FUNC_0("%-20s%d\n", "asid:", VAR_3->asid);
 FUNC_0("%-20s%d\n", "tlb_ctl:", VAR_3->tlb_ctl);
 FUNC_0("%-20s%08x\n", "int_ctl:", VAR_3->int_ctl);
 FUNC_0("%-20s%08x\n", "int_vector:", VAR_3->int_vector);
 FUNC_0("%-20s%08x\n", "int_state:", VAR_3->int_state);
 FUNC_0("%-20s%08x\n", "exit_code:", VAR_3->exit_code);
 FUNC_0("%-20s%016llx\n", "exit_info1:", VAR_3->exit_info_1);
 FUNC_0("%-20s%016llx\n", "exit_info2:", VAR_3->exit_info_2);
 FUNC_0("%-20s%08x\n", "exit_int_info:", VAR_3->exit_int_info);
 FUNC_0("%-20s%08x\n", "exit_int_info_err:", VAR_3->exit_int_info_err);
 FUNC_0("%-20s%lld\n", "nested_ctl:", VAR_3->nested_ctl);
 FUNC_0("%-20s%016llx\n", "nested_cr3:", VAR_3->nested_cr3);
 FUNC_0("%-20s%016llx\n", "avic_vapic_bar:", VAR_3->avic_vapic_bar);
 FUNC_0("%-20s%08x\n", "event_inj:", VAR_3->event_inj);
 FUNC_0("%-20s%08x\n", "event_inj_err:", VAR_3->event_inj_err);
 FUNC_0("%-20s%lld\n", "virt_ext:", VAR_3->virt_ext);
 FUNC_0("%-20s%016llx\n", "next_rip:", VAR_3->next_rip);
 FUNC_0("%-20s%016llx\n", "avic_backing_page:", VAR_3->avic_backing_page);
 FUNC_0("%-20s%016llx\n", "avic_logical_id:", VAR_3->avic_logical_id);
 FUNC_0("%-20s%016llx\n", "avic_physical_id:", VAR_3->avic_physical_id);
 FUNC_0("VMCB State Save Area:\n");
 FUNC_0("%-5s s: %04x a: %04x l: %08x b: %016llx\n",
        "es:",
        VAR_4->es.selector, VAR_4->es.attrib,
        VAR_4->es.limit, VAR_4->es.base);
 FUNC_0("%-5s s: %04x a: %04x l: %08x b: %016llx\n",
        "cs:",
        VAR_4->cs.selector, VAR_4->cs.attrib,
        VAR_4->cs.limit, VAR_4->cs.base);
 FUNC_0("%-5s s: %04x a: %04x l: %08x b: %016llx\n",
        "ss:",
        VAR_4->ss.selector, VAR_4->ss.attrib,
        VAR_4->ss.limit, VAR_4->ss.base);
 FUNC_0("%-5s s: %04x a: %04x l: %08x b: %016llx\n",
        "ds:",
        VAR_4->ds.selector, VAR_4->ds.attrib,
        VAR_4->ds.limit, VAR_4->ds.base);
 FUNC_0("%-5s s: %04x a: %04x l: %08x b: %016llx\n",
        "fs:",
        VAR_4->fs.selector, VAR_4->fs.attrib,
        VAR_4->fs.limit, VAR_4->fs.base);
 FUNC_0("%-5s s: %04x a: %04x l: %08x b: %016llx\n",
        "gs:",
        VAR_4->gs.selector, VAR_4->gs.attrib,
        VAR_4->gs.limit, VAR_4->gs.base);
 FUNC_0("%-5s s: %04x a: %04x l: %08x b: %016llx\n",
        "gdtr:",
        VAR_4->gdtr.selector, VAR_4->gdtr.attrib,
        VAR_4->gdtr.limit, VAR_4->gdtr.base);
 FUNC_0("%-5s s: %04x a: %04x l: %08x b: %016llx\n",
        "ldtr:",
        VAR_4->ldtr.selector, VAR_4->ldtr.attrib,
        VAR_4->ldtr.limit, VAR_4->ldtr.base);
 FUNC_0("%-5s s: %04x a: %04x l: %08x b: %016llx\n",
        "idtr:",
        VAR_4->idtr.selector, VAR_4->idtr.attrib,
        VAR_4->idtr.limit, VAR_4->idtr.base);
 FUNC_0("%-5s s: %04x a: %04x l: %08x b: %016llx\n",
        "tr:",
        VAR_4->tr.selector, VAR_4->tr.attrib,
        VAR_4->tr.limit, VAR_4->tr.base);
 FUNC_0("cpl:            %d                efer:         %016llx\n",
  VAR_4->cpl, VAR_4->efer);
 FUNC_0("%-15s %016llx %-13s %016llx\n",
        "cr0:", VAR_4->cr0, "cr2:", VAR_4->cr2);
 FUNC_0("%-15s %016llx %-13s %016llx\n",
        "cr3:", VAR_4->cr3, "cr4:", VAR_4->cr4);
 FUNC_0("%-15s %016llx %-13s %016llx\n",
        "dr6:", VAR_4->dr6, "dr7:", VAR_4->dr7);
 FUNC_0("%-15s %016llx %-13s %016llx\n",
        "rip:", VAR_4->rip, "rflags:", VAR_4->rflags);
 FUNC_0("%-15s %016llx %-13s %016llx\n",
        "rsp:", VAR_4->rsp, "rax:", VAR_4->rax);
 FUNC_0("%-15s %016llx %-13s %016llx\n",
        "star:", VAR_4->star, "lstar:", VAR_4->lstar);
 FUNC_0("%-15s %016llx %-13s %016llx\n",
        "cstar:", VAR_4->cstar, "sfmask:", VAR_4->sfmask);
 FUNC_0("%-15s %016llx %-13s %016llx\n",
        "kernel_gs_base:", VAR_4->kernel_gs_base,
        "sysenter_cs:", VAR_4->sysenter_cs);
 FUNC_0("%-15s %016llx %-13s %016llx\n",
        "sysenter_esp:", VAR_4->sysenter_esp,
        "sysenter_eip:", VAR_4->sysenter_eip);
 FUNC_0("%-15s %016llx %-13s %016llx\n",
        "gpat:", VAR_4->g_pat, "dbgctl:", VAR_4->dbgctl);
 FUNC_0("%-15s %016llx %-13s %016llx\n",
        "br_from:", VAR_4->br_from, "br_to:", VAR_4->br_to);
 FUNC_0("%-15s %016llx %-13s %016llx\n",
        "excp_from:", VAR_4->last_excp_from,
        "excp_to:", VAR_4->last_excp_to);
}
