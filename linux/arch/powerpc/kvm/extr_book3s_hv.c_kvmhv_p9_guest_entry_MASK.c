
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* u64 ;
typedef scalar_t__ u32 ;
struct lppaca {int pmcregs_in_use; void* yield_count; } ;
struct kvmppc_vcore {int entry_exit_map; int in_guest; } ;
struct TYPE_13__ {int dirty; struct lppaca* pinned_addr; } ;
struct TYPE_11__ {unsigned long dar; unsigned long dsisr; int msr; } ;
struct hv_guest_state {unsigned long lpcr; int msr; void* hdec_expiry; int vcpu_token; int lpid; int version; } ;
struct TYPE_14__ {unsigned long vrsave; unsigned long dscr; unsigned long iamr; unsigned long pspb; unsigned long fscr; unsigned long tar; unsigned long ebbhr; unsigned long ebbrr; unsigned long bescr; unsigned long wort; unsigned long tid; unsigned long amr; unsigned long uamor; int ctrl; unsigned long dec_expires; unsigned long psscr; int thread_cpu; TYPE_5__ vpa; TYPE_3__ shregs; int vr; int fp; scalar_t__ slb_max; TYPE_2__* nested; struct hv_guest_state regs; int nested_vcpu_id; scalar_t__ ceded; struct kvmppc_vcore* vcore; } ;
struct kvm_vcpu {int cpu; TYPE_7__* kvm; TYPE_6__ arch; int vcpu_id; } ;
typedef int s64 ;
typedef int s32 ;
struct TYPE_12__ {unsigned long dec_expires; } ;
struct TYPE_16__ {unsigned long sprg_vdso; TYPE_4__ kvm_hstate; } ;
struct TYPE_9__ {int lpid; } ;
struct TYPE_15__ {TYPE_1__ arch; } ;
struct TYPE_10__ {int shadow_lpid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (struct hv_guest_state*) ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 () ;
 int FUNC_6 (struct kvm_vcpu*,void*,unsigned long) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct kvm_vcpu*,struct hv_guest_state*) ;
 int FUNC_9 (struct kvm_vcpu*,int) ;
 int FUNC_10 () ;
 int FUNC_11 (struct kvm_vcpu*,struct hv_guest_state*) ;
 scalar_t__ FUNC_12 (struct kvm_vcpu*,int) ;
 int FUNC_13 (struct kvm_vcpu*) ;
 int FUNC_14 (struct kvm_vcpu*,int ,int) ;
 int FUNC_15 (struct kvm_vcpu*,int ,int) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 TYPE_8__* VAR_31 ;
 int FUNC_20 (int ) ;
 unsigned long FUNC_21 () ;
 int FUNC_22 (int) ;
 int FUNC_23 (int ,unsigned long) ;
 int FUNC_24 (TYPE_7__*) ;
 int FUNC_25 (int ,int ,int ) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;

int FUNC_28(struct kvm_vcpu *VAR_32, u64 VAR_33,
    unsigned long VAR_34)
{
 struct kvmppc_vcore *VAR_35 = VAR_32->arch.vcore;
 unsigned long VAR_36 = FUNC_20(VAR_17);
 unsigned long VAR_37 = FUNC_20(VAR_27);
 unsigned long VAR_38 = FUNC_20(VAR_22);
 unsigned long VAR_39 = FUNC_20(VAR_11);
 s64 VAR_40;
 u64 VAR_41;
 int VAR_42, VAR_43;

 VAR_40 = FUNC_20(VAR_16);
 VAR_41 = FUNC_21();
 if (VAR_40 < 512)
  return VAR_0;
 VAR_31->kvm_hstate.dec_expires = VAR_40 + VAR_41;
 if (VAR_31->kvm_hstate.dec_expires < VAR_33)
  VAR_33 = VAR_31->kvm_hstate.dec_expires;

 VAR_32->arch.ceded = 0;

 FUNC_10();

 FUNC_16();

 VAR_35->entry_exit_map = 1;
 VAR_35->in_guest = 1;

 if (VAR_32->arch.vpa.pinned_addr) {
  struct lppaca *VAR_44 = VAR_32->arch.vpa.pinned_addr;
  u32 VAR_45 = FUNC_1(VAR_44->yield_count) + 1;
  VAR_44->yield_count = FUNC_3(VAR_45);
  VAR_32->arch.vpa.dirty = 1;
 }

 if (FUNC_2(VAR_3) ||
     FUNC_2(VAR_2))
  FUNC_14(VAR_32, VAR_32->arch.shregs.msr, 1);

 FUNC_4(VAR_32);

 FUNC_22(VAR_8 | VAR_9 | VAR_10);
 FUNC_18(&VAR_32->arch.fp);



 FUNC_23(VAR_29, VAR_32->arch.vrsave);

 FUNC_23(VAR_17, VAR_32->arch.dscr);
 FUNC_23(VAR_22, VAR_32->arch.iamr);
 FUNC_23(VAR_23, VAR_32->arch.pspb);
 FUNC_23(VAR_21, VAR_32->arch.fscr);
 FUNC_23(VAR_26, VAR_32->arch.tar);
 FUNC_23(VAR_19, VAR_32->arch.ebbhr);
 FUNC_23(VAR_20, VAR_32->arch.ebbrr);
 FUNC_23(VAR_12, VAR_32->arch.bescr);
 FUNC_23(VAR_30, VAR_32->arch.wort);
 FUNC_23(VAR_27, VAR_32->arch.tid);
 FUNC_23(VAR_15, VAR_32->arch.shregs.dar);
 FUNC_23(VAR_18, VAR_32->arch.shregs.dsisr);
 FUNC_23(VAR_11, VAR_32->arch.amr);
 FUNC_23(VAR_28, VAR_32->arch.uamor);

 if (!(VAR_32->arch.ctrl & 1))
  FUNC_23(VAR_14, FUNC_20(VAR_13) & ~1);

 FUNC_23(VAR_16, VAR_32->arch.dec_expires - FUNC_21());

 if (FUNC_7()) {






  unsigned long VAR_46;

  struct hv_guest_state VAR_47;

  VAR_46 = FUNC_20(VAR_24);
  FUNC_23(VAR_24, VAR_32->arch.psscr);
  FUNC_11(VAR_32, &VAR_47);
  VAR_47.lpcr = VAR_34;
  VAR_32->arch.regs.msr = VAR_32->arch.shregs.msr;
  VAR_47.version = VAR_4;
  if (VAR_32->arch.nested) {
   VAR_47.lpid = VAR_32->arch.nested->shadow_lpid;
   VAR_47.vcpu_token = VAR_32->arch.nested_vcpu_id;
  } else {
   VAR_47.lpid = VAR_32->kvm->arch.lpid;
   VAR_47.vcpu_token = VAR_32->vcpu_id;
  }
  VAR_47.hdec_expiry = VAR_33;
  VAR_42 = FUNC_25(VAR_6, FUNC_0(&VAR_47),
       FUNC_0(&VAR_32->arch.regs));
  FUNC_8(VAR_32, &VAR_47);
  VAR_32->arch.shregs.msr = VAR_32->arch.regs.msr;
  VAR_32->arch.shregs.dar = FUNC_20(VAR_15);
  VAR_32->arch.shregs.dsisr = FUNC_20(VAR_18);
  VAR_32->arch.psscr = FUNC_20(VAR_24);
  FUNC_23(VAR_24, VAR_46);


  if (VAR_42 == VAR_1 && !VAR_32->arch.nested &&
      FUNC_12(VAR_32, 3) == VAR_5) {
   FUNC_13(VAR_32);
   VAR_42 = 0;
  }
 } else {
  VAR_42 = FUNC_6(VAR_32, VAR_33, VAR_34);
 }

 VAR_32->arch.slb_max = 0;
 VAR_40 = FUNC_20(VAR_16);
 if (!(VAR_34 & VAR_7))
  VAR_40 = (s32) VAR_40;
 VAR_41 = FUNC_21();
 VAR_32->arch.dec_expires = VAR_40 + VAR_41;
 VAR_32->cpu = -1;
 VAR_32->arch.thread_cpu = -1;
 VAR_32->arch.ctrl = FUNC_20(VAR_13);

 VAR_32->arch.iamr = FUNC_20(VAR_22);
 VAR_32->arch.pspb = FUNC_20(VAR_23);
 VAR_32->arch.fscr = FUNC_20(VAR_21);
 VAR_32->arch.tar = FUNC_20(VAR_26);
 VAR_32->arch.ebbhr = FUNC_20(VAR_19);
 VAR_32->arch.ebbrr = FUNC_20(VAR_20);
 VAR_32->arch.bescr = FUNC_20(VAR_12);
 VAR_32->arch.wort = FUNC_20(VAR_30);
 VAR_32->arch.tid = FUNC_20(VAR_27);
 VAR_32->arch.amr = FUNC_20(VAR_11);
 VAR_32->arch.uamor = FUNC_20(VAR_28);
 VAR_32->arch.dscr = FUNC_20(VAR_17);

 FUNC_23(VAR_23, 0);
 FUNC_23(VAR_30, 0);
 FUNC_23(VAR_28, 0);
 FUNC_23(VAR_17, VAR_36);
 FUNC_23(VAR_27, VAR_37);
 FUNC_23(VAR_22, VAR_38);
 FUNC_23(VAR_23, 0);

 if (VAR_39 != VAR_32->arch.amr)
  FUNC_23(VAR_11, VAR_39);

 FUNC_22(VAR_8 | VAR_9 | VAR_10);
 FUNC_26(&VAR_32->arch.fp);



 VAR_32->arch.vrsave = FUNC_20(VAR_29);

 if (FUNC_2(VAR_3) ||
     FUNC_2(VAR_2))
  FUNC_15(VAR_32, VAR_32->arch.shregs.msr, 1);

 VAR_43 = 1;
 if (VAR_32->arch.vpa.pinned_addr) {
  struct lppaca *VAR_48 = VAR_32->arch.vpa.pinned_addr;
  u32 VAR_49 = FUNC_1(VAR_48->yield_count) + 1;
  VAR_48->yield_count = FUNC_3(VAR_49);
  VAR_32->arch.vpa.dirty = 1;
  VAR_43 = VAR_48->pmcregs_in_use;
 }

 VAR_43 |= FUNC_24(VAR_32->kvm);

 FUNC_9(VAR_32, VAR_43);

 VAR_35->entry_exit_map = 0x101;
 VAR_35->in_guest = 0;

 FUNC_23(VAR_16, VAR_31->kvm_hstate.dec_expires - FUNC_21());
 FUNC_23(VAR_25, VAR_31->sprg_vdso);

 FUNC_5();

 FUNC_17();

 return VAR_42;
}
