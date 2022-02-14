
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct kvmppc_vcore {int tb_offset; int tb_offset_applied; int pcr; int dpdes; int vtb; } ;
struct TYPE_7__ {int sprg0; int sprg1; int sprg2; int sprg3; int srr0; int srr1; } ;
struct TYPE_8__ {int purr; int spurr; int dawr; int dawrx; int ciabr; int ic; int pid; unsigned long psscr; int hfscr; TYPE_1__ shregs; struct kvmppc_vcore* vcore; } ;
struct kvm_vcpu {TYPE_5__* kvm; TYPE_2__ arch; } ;
typedef scalar_t__ s64 ;
struct TYPE_9__ {int host_purr; int host_spurr; unsigned long fake_suspend; } ;
struct TYPE_12__ {TYPE_3__ kvm_hstate; } ;
struct TYPE_10__ {int host_lpid; int host_lpcr; } ;
struct TYPE_11__ {TYPE_4__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
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
 int FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct kvm_vcpu*) ;
 TYPE_6__* VAR_28 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(struct kvm_vcpu *VAR_29, u64 VAR_30,
         unsigned long VAR_31)
{
 struct kvmppc_vcore *VAR_32 = VAR_29->arch.vcore;
 s64 VAR_33;
 u64 VAR_34, VAR_35, VAR_36;
 int VAR_37;
 unsigned long VAR_38 = FUNC_4(VAR_11);
 unsigned long VAR_39 = FUNC_4(VAR_6);
 unsigned long VAR_40 = FUNC_4(VAR_7);
 unsigned long VAR_41 = FUNC_4(VAR_8);
 unsigned long VAR_42 = FUNC_4(VAR_17);
 unsigned long VAR_43 = FUNC_4(VAR_16);

 VAR_33 = VAR_30 - FUNC_5();
 if (VAR_33 < 0)
  return VAR_0;
 FUNC_6(VAR_10, VAR_33);

 if (VAR_32->tb_offset) {
  u64 VAR_44 = FUNC_5() + VAR_32->tb_offset;
  FUNC_6(VAR_26, VAR_44);
  VAR_34 = FUNC_5();
  if ((VAR_34 & 0xffffff) < (VAR_44 & 0xffffff))
   FUNC_6(VAR_26, VAR_44 + 0x1000000);
  VAR_32->tb_offset_applied = VAR_32->tb_offset;
 }

 if (VAR_32->pcr)
  FUNC_6(VAR_15, VAR_32->pcr | VAR_1);
 FUNC_6(VAR_9, VAR_32->dpdes);
 FUNC_6(VAR_27, VAR_32->vtb);

 VAR_28->kvm_hstate.host_purr = FUNC_4(VAR_18);
 VAR_28->kvm_hstate.host_spurr = FUNC_4(VAR_23);
 FUNC_6(VAR_18, VAR_29->arch.purr);
 FUNC_6(VAR_23, VAR_29->arch.spurr);

 if (FUNC_1()) {
  FUNC_6(VAR_7, VAR_29->arch.dawr);
  FUNC_6(VAR_8, VAR_29->arch.dawrx);
 }
 FUNC_6(VAR_6, VAR_29->arch.ciabr);
 FUNC_6(VAR_12, VAR_29->arch.ic);
 FUNC_6(VAR_16, VAR_29->arch.pid);

 FUNC_6(VAR_17, VAR_29->arch.psscr | VAR_2 |
       (VAR_28->kvm_hstate.fake_suspend << VAR_3));

 FUNC_6(VAR_11, VAR_29->arch.hfscr);

 FUNC_6(VAR_19, VAR_29->arch.shregs.sprg0);
 FUNC_6(VAR_20, VAR_29->arch.shregs.sprg1);
 FUNC_6(VAR_21, VAR_29->arch.shregs.sprg2);
 FUNC_6(VAR_22, VAR_29->arch.shregs.sprg3);

 FUNC_6(VAR_5, ~0UL);

 FUNC_6(VAR_13, VAR_31);
 FUNC_2();

 FUNC_3(VAR_29);

 FUNC_6(VAR_24, VAR_29->arch.shregs.srr0);
 FUNC_6(VAR_25, VAR_29->arch.shregs.srr1);

 VAR_37 = FUNC_0(VAR_29);


 VAR_35 = FUNC_4(VAR_18);
 VAR_36 = FUNC_4(VAR_23);
 FUNC_6(VAR_18, VAR_28->kvm_hstate.host_purr +
       VAR_35 - VAR_29->arch.purr);
 FUNC_6(VAR_23, VAR_28->kvm_hstate.host_spurr +
       VAR_36 - VAR_29->arch.spurr);
 VAR_29->arch.purr = VAR_35;
 VAR_29->arch.spurr = VAR_36;

 VAR_29->arch.ic = FUNC_4(VAR_12);
 VAR_29->arch.pid = FUNC_4(VAR_16);
 VAR_29->arch.psscr = FUNC_4(VAR_17) & VAR_4;

 VAR_29->arch.shregs.sprg0 = FUNC_4(VAR_19);
 VAR_29->arch.shregs.sprg1 = FUNC_4(VAR_20);
 VAR_29->arch.shregs.sprg2 = FUNC_4(VAR_21);
 VAR_29->arch.shregs.sprg3 = FUNC_4(VAR_22);


 FUNC_6(VAR_17, VAR_42 |
       (VAR_28->kvm_hstate.fake_suspend << VAR_3));
 FUNC_6(VAR_11, VAR_38);
 FUNC_6(VAR_6, VAR_39);
 FUNC_6(VAR_7, VAR_40);
 FUNC_6(VAR_8, VAR_41);
 FUNC_6(VAR_16, VAR_43);





 asm volatile("eieio; tlbsync; ptesync");

 FUNC_6(VAR_14, VAR_29->kvm->arch.host_lpid);
 FUNC_2();

 VAR_32->dpdes = FUNC_4(VAR_9);
 VAR_32->vtb = FUNC_4(VAR_27);
 FUNC_6(VAR_9, 0);
 if (VAR_32->pcr)
  FUNC_6(VAR_15, VAR_1);

 if (VAR_32->tb_offset_applied) {
  u64 VAR_45 = FUNC_5() - VAR_32->tb_offset_applied;
  FUNC_6(VAR_26, VAR_45);
  VAR_34 = FUNC_5();
  if ((VAR_34 & 0xffffff) < (VAR_45 & 0xffffff))
   FUNC_6(VAR_26, VAR_45 + 0x1000000);
  VAR_32->tb_offset_applied = 0;
 }

 FUNC_6(VAR_10, 0x7fffffff);
 FUNC_6(VAR_13, VAR_29->kvm->arch.host_lpcr);

 return VAR_37;
}
