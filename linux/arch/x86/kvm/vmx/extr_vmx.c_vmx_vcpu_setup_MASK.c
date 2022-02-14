
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u32 ;
struct TYPE_18__ {int output_mask; } ;
struct TYPE_20__ {TYPE_7__ guest; } ;
struct TYPE_17__ {unsigned long long pat; int cr0_guest_owned_bits; } ;
struct TYPE_11__ {TYPE_6__ arch; int kvm; } ;
struct TYPE_14__ {int * val; } ;
struct TYPE_13__ {int * val; } ;
struct TYPE_15__ {TYPE_3__ guest; TYPE_2__ host; } ;
struct TYPE_12__ {int * msr_bitmap; } ;
struct vcpu_vmx {int hv_deadline_tsc; int ple_window_dirty; int nmsrs; TYPE_9__ pt_desc; int pml_pg; TYPE_10__ vcpu; TYPE_5__* guest_msrs; TYPE_4__ msr_autoload; int ple_window; int pi_desc; int secondary_exec_control; TYPE_1__ vmcs01; } ;
struct TYPE_19__ {int vmentry_ctrl; } ;
struct TYPE_16__ {int index; unsigned long long mask; scalar_t__ data; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 unsigned long long VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 unsigned long long FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_36 ;
 int FUNC_6 (struct vcpu_vmx*,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_10__*) ;
 int FUNC_9 (TYPE_9__*,int ,int) ;
 scalar_t__ VAR_37 ;
 int FUNC_10 () ;
 unsigned long long FUNC_11 (int ) ;
 int FUNC_12 (struct vcpu_vmx*,int ) ;
 int VAR_38 ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ FUNC_13 (int ,int *,int *) ;
 int FUNC_14 (struct vcpu_vmx*,int ) ;
 int FUNC_15 (struct vcpu_vmx*) ;
 int FUNC_16 (struct vcpu_vmx*,int ) ;
 int FUNC_17 (struct vcpu_vmx*,int ) ;
 TYPE_8__ VAR_41 ;
 int FUNC_18 (int ,scalar_t__) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int ,unsigned long long) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (struct vcpu_vmx*) ;
 int FUNC_23 (struct vcpu_vmx*) ;
 int * VAR_42 ;
 int FUNC_24 (struct vcpu_vmx*) ;
 int FUNC_25 (struct vcpu_vmx*) ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 scalar_t__ FUNC_28 () ;
 scalar_t__ FUNC_29 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_30(struct vcpu_vmx *VAR_43)
{
 int VAR_44;

 if (VAR_37)
  FUNC_10();

 if (FUNC_4())
  FUNC_20(VAR_15, FUNC_1(VAR_43->vmcs01.msr_bitmap));

 FUNC_20(VAR_25, -1ull);


 FUNC_12(VAR_43, FUNC_24(VAR_43));
 VAR_43->hv_deadline_tsc = -1;

 FUNC_6(VAR_43, FUNC_23(VAR_43));

 if (FUNC_2()) {
  FUNC_22(VAR_43);
  FUNC_14(VAR_43, VAR_43->secondary_exec_control);
 }

 if (FUNC_8(&VAR_43->vcpu)) {
  FUNC_20(VAR_3, 0);
  FUNC_20(VAR_4, 0);
  FUNC_20(VAR_5, 0);
  FUNC_20(VAR_6, 0);

  FUNC_18(VAR_9, 0);

  FUNC_18(VAR_22, VAR_23);
  FUNC_20(VAR_21, FUNC_1((&VAR_43->pi_desc)));
 }

 if (!FUNC_7(VAR_43->vcpu.kvm)) {
  FUNC_19(VAR_18, VAR_38);
  VAR_43->ple_window = VAR_39;
  VAR_43->ple_window_dirty = 1;
 }

 FUNC_19(VAR_16, 0);
 FUNC_19(VAR_17, 0);
 FUNC_19(VAR_1, 0);

 FUNC_18(VAR_12, 0);
 FUNC_18(VAR_14, 0);
 FUNC_25(VAR_43);
 FUNC_21(VAR_11, 0);
 FUNC_21(VAR_13, 0);

 if (FUNC_5())
  FUNC_20(VAR_33, 0);

 FUNC_19(VAR_32, 0);
 FUNC_19(VAR_31, 0);
 FUNC_20(VAR_30, FUNC_1(VAR_43->msr_autoload.host.val));
 FUNC_19(VAR_29, 0);
 FUNC_20(VAR_28, FUNC_1(VAR_43->msr_autoload.guest.val));

 if (VAR_41.vmentry_ctrl & VAR_27)
  FUNC_20(VAR_7, VAR_43->vcpu.arch.pat);

 for (VAR_44 = 0; VAR_44 < FUNC_0(VAR_42); ++VAR_44) {
  u32 VAR_45 = VAR_42[VAR_44];
  u32 VAR_46, VAR_47;
  int VAR_48 = VAR_43->nmsrs;

  if (FUNC_13(VAR_45, &VAR_46, &VAR_47) < 0)
   continue;
  if (FUNC_29(VAR_45, VAR_46, VAR_47) < 0)
   continue;
  VAR_43->guest_msrs[VAR_48].index = VAR_44;
  VAR_43->guest_msrs[VAR_48].data = 0;
  VAR_43->guest_msrs[VAR_48].mask = -1ull;
  ++VAR_43->nmsrs;
 }

 FUNC_17(VAR_43, FUNC_27());


 FUNC_16(VAR_43, FUNC_26());

 VAR_43->vcpu.arch.cr0_guest_owned_bits = VAR_34;
 FUNC_21(VAR_0, ~VAR_34);

 FUNC_15(VAR_43);

 if (FUNC_28())
  FUNC_20(VAR_35, VAR_26);

 if (VAR_36) {
  FUNC_20(VAR_19, FUNC_11(VAR_43->pml_pg));
  FUNC_18(VAR_10, VAR_20 - 1);
 }

 if (FUNC_3())
  FUNC_20(VAR_2, -1ull);

 if (VAR_40 == VAR_24) {
  FUNC_9(&VAR_43->pt_desc, 0, sizeof(VAR_43->pt_desc));

  VAR_43->pt_desc.guest.output_mask = 0x7F;
  FUNC_20(VAR_8, 0);
 }
}
