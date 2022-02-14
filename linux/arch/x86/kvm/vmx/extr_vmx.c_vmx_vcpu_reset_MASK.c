
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_9__ {int cr0; int * regs; } ;
struct TYPE_10__ {TYPE_4__ arch; } ;
struct TYPE_6__ {scalar_t__ vm86_active; } ;
struct vcpu_vmx {int hv_deadline_tsc; int vpid; TYPE_5__ vcpu; scalar_t__ msr_ia32_umwait_control; scalar_t__ spec_ctrl; TYPE_1__ rmode; } ;
struct msr_data {int data; int host_initiated; } ;
struct TYPE_8__ {int microcode_version; TYPE_2__* apic; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_7__ {int regs; } ;


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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 size_t VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,struct kvm_vcpu*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (struct kvm_vcpu*,int) ;
 int FUNC_7 (struct kvm_vcpu*,struct msr_data*) ;
 int FUNC_8 (struct kvm_vcpu*,int ) ;
 int FUNC_9 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct vcpu_vmx*) ;
 struct vcpu_vmx* FUNC_13 (struct kvm_vcpu*) ;
 int FUNC_14 (struct kvm_vcpu*) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (struct kvm_vcpu*) ;
 int FUNC_20 (struct vcpu_vmx*) ;
 int FUNC_21 (struct kvm_vcpu*,int) ;
 int FUNC_22 (struct kvm_vcpu*,int ) ;
 int FUNC_23 (struct kvm_vcpu*,int ) ;
 int FUNC_24 (int) ;

__attribute__((used)) static void FUNC_25(struct kvm_vcpu *VAR_42, bool VAR_43)
{
 struct vcpu_vmx *VAR_44 = FUNC_13(VAR_42);
 struct msr_data VAR_45;
 u64 VAR_46;

 VAR_44->rmode.vm86_active = 0;
 VAR_44->spec_ctrl = 0;

 VAR_44->msr_ia32_umwait_control = 0;

 VAR_42->arch.microcode_version = 0x100000000ULL;
 VAR_44->vcpu.arch.regs[VAR_28] = FUNC_3();
 VAR_44->hv_deadline_tsc = -1;
 FUNC_8(VAR_42, 0);

 if (!VAR_43) {
  VAR_45.data = VAR_0 |
         VAR_26;
  if (FUNC_10(VAR_42))
   VAR_45.data |= VAR_25;
  VAR_45.host_initiated = 1;
  FUNC_7(VAR_42, &VAR_45);
 }

 FUNC_20(VAR_44);

 FUNC_11(VAR_29);
 FUNC_15(VAR_5, 0xf000);
 FUNC_18(VAR_4, 0xffff0000ul);

 FUNC_11(VAR_30);
 FUNC_11(VAR_31);
 FUNC_11(VAR_32);
 FUNC_11(VAR_33);
 FUNC_11(VAR_34);

 FUNC_15(VAR_23, 0);
 FUNC_18(VAR_21, 0);
 FUNC_16(VAR_22, 0xffff);
 FUNC_16(VAR_20, 0x008b);

 FUNC_15(VAR_15, 0);
 FUNC_18(VAR_13, 0);
 FUNC_16(VAR_14, 0xffff);
 FUNC_16(VAR_12, 0x00082);

 if (!VAR_43) {
  FUNC_16(VAR_17, 0);
  FUNC_18(VAR_19, 0);
  FUNC_18(VAR_18, 0);
  FUNC_17(VAR_8, 0);
 }

 FUNC_9(VAR_42, VAR_41);
 FUNC_6(VAR_42, 0xfff0);

 FUNC_18(VAR_6, 0);
 FUNC_16(VAR_7, 0xffff);

 FUNC_18(VAR_9, 0);
 FUNC_16(VAR_10, 0xffff);

 FUNC_16(VAR_2, VAR_1);
 FUNC_16(VAR_11, 0);
 FUNC_18(VAR_16, 0);
 if (FUNC_5())
  FUNC_17(VAR_3, 0);

 FUNC_12(VAR_44);

 FUNC_16(VAR_37, 0);

 if (FUNC_1() && !VAR_43) {
  FUNC_17(VAR_35, 0);
  if (FUNC_2(VAR_42))
   FUNC_17(VAR_35,
         FUNC_0(VAR_42->arch.apic->regs));
  FUNC_16(VAR_27, 0);
 }

 FUNC_4(VAR_24, VAR_42);

 if (VAR_44->vpid != 0)
  FUNC_15(VAR_36, VAR_44->vpid);

 VAR_46 = VAR_40 | VAR_38 | VAR_39;
 VAR_44->vcpu.arch.cr0 = VAR_46;
 FUNC_21(VAR_42, VAR_46);
 FUNC_22(VAR_42, 0);
 FUNC_23(VAR_42, 0);

 FUNC_14(VAR_42);

 FUNC_24(VAR_44->vpid);
 if (VAR_43)
  FUNC_19(VAR_42);
}
