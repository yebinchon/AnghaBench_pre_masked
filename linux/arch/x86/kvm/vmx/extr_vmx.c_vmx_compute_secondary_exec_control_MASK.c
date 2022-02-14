
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int secondary_ctls_high; } ;
struct TYPE_5__ {TYPE_1__ msrs; } ;
struct kvm_vcpu {int kvm; } ;
struct vcpu_vmx {scalar_t__ vpid; int secondary_exec_control; TYPE_2__ nested; struct kvm_vcpu vcpu; } ;
struct TYPE_6__ {int cpu_based_2nd_exec_ctrl; } ;


 scalar_t__ VAR_0 ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 TYPE_3__ VAR_33 ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 () ;

__attribute__((used)) static void FUNC_11(struct vcpu_vmx *VAR_34)
{
 struct kvm_vcpu *VAR_35 = &VAR_34->vcpu;

 u32 VAR_36 = VAR_33.cpu_based_2nd_exec_ctrl;

 if (VAR_32 == VAR_0)
  VAR_36 &= ~(VAR_10 | VAR_9);
 if (!FUNC_0(VAR_35))
  VAR_36 &= ~VAR_16;
 if (VAR_34->vpid == 0)
  VAR_36 &= ~VAR_7;
 if (!VAR_28) {
  VAR_36 &= ~VAR_3;
  VAR_30 = 0;
 }
 if (!VAR_30)
  VAR_36 &= ~VAR_15;
 if (FUNC_3(VAR_34->vcpu.kvm))
  VAR_36 &= ~VAR_8;
 if (!FUNC_4(VAR_35))
  VAR_36 &= ~(VAR_1 |
      VAR_18);
 VAR_36 &= ~VAR_17;



 VAR_36 &= ~VAR_2;






 VAR_36 &= ~VAR_14;

 if (!VAR_29)
  VAR_36 &= ~VAR_5;

 if (FUNC_10()) {

  bool VAR_37 =
   FUNC_2(VAR_35, VAR_26) &&
   FUNC_2(VAR_35, VAR_27);

  if (!VAR_37)
   VAR_36 &= ~VAR_19;

  if (VAR_31) {
   if (VAR_37)
    VAR_34->nested.msrs.secondary_ctls_high |=
     VAR_19;
   else
    VAR_34->nested.msrs.secondary_ctls_high &=
     ~VAR_19;
  }
 }

 if (FUNC_8()) {
  bool VAR_38 = FUNC_2(VAR_35, VAR_24);
  if (!VAR_38)
   VAR_36 &= ~VAR_13;

  if (VAR_31) {
   if (VAR_38)
    VAR_34->nested.msrs.secondary_ctls_high |=
     VAR_13;
   else
    VAR_34->nested.msrs.secondary_ctls_high &=
     ~VAR_13;
  }
 }

 if (FUNC_5()) {

  bool VAR_39 =
   FUNC_2(VAR_35, VAR_20) &&
   FUNC_2(VAR_35, VAR_21);

  if (!VAR_39) {
   VAR_36 &= ~VAR_4;
   FUNC_1(VAR_35, VAR_20);
  }

  if (VAR_31) {
   if (VAR_39)
    VAR_34->nested.msrs.secondary_ctls_high |=
     VAR_4;
   else
    VAR_34->nested.msrs.secondary_ctls_high &=
     ~VAR_4;
  }
 }

 if (FUNC_6()) {
  bool VAR_40 = FUNC_2(VAR_35, VAR_22);
  if (VAR_40)
   VAR_36 &= ~VAR_11;

  if (VAR_31) {
   if (VAR_40)
    VAR_34->nested.msrs.secondary_ctls_high |=
     VAR_11;
   else
    VAR_34->nested.msrs.secondary_ctls_high &=
     ~VAR_11;
  }
 }

 if (FUNC_7()) {
  bool VAR_41 = FUNC_2(VAR_35, VAR_23);
  if (VAR_41)
   VAR_36 &= ~VAR_12;

  if (VAR_31) {
   if (VAR_41)
    VAR_34->nested.msrs.secondary_ctls_high |=
     VAR_12;
   else
    VAR_34->nested.msrs.secondary_ctls_high &=
     ~VAR_12;
  }
 }

 if (FUNC_9()) {
  bool VAR_42 =
   FUNC_2(VAR_35, VAR_25);

  if (!VAR_42)
   VAR_36 &= ~VAR_6;

  if (VAR_31) {
   if (VAR_42)
    VAR_34->nested.msrs.secondary_ctls_high |=
     VAR_6;
   else
    VAR_34->nested.msrs.secondary_ctls_high &=
     ~VAR_6;
  }
 }

 VAR_34->secondary_exec_control = VAR_36;
}
