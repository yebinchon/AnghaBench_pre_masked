
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int limit; } ;
struct TYPE_13__ {int limit; } ;
struct TYPE_12__ {int selector; int base; int attrib; int limit; } ;
struct vmcb_save_area {int dr6; int rip; scalar_t__ cr4; scalar_t__ cr3; int g_pat; int tr; int ldtr; TYPE_3__ idtr; TYPE_2__ gdtr; TYPE_1__ cs; int gs; int fs; int ds; int ss; int es; } ;
struct vmcb_control_area {int nested_ctl; int int_ctl; int virt_ext; scalar_t__ pause_filter_thresh; scalar_t__ pause_filter_count; void* msrpm_base_pa; void* iopm_base_pa; } ;
struct TYPE_16__ {int* regs; scalar_t__ hflags; int pat; } ;
struct TYPE_17__ {int kvm; TYPE_5__ arch; } ;
struct TYPE_15__ {scalar_t__ vmcb; } ;
struct vcpu_svm {TYPE_8__* vmcb; TYPE_6__ vcpu; TYPE_4__ nested; scalar_t__ asid_generation; int msrpm; } ;
struct TYPE_18__ {struct vmcb_control_area control; struct vmcb_save_area save; } ;


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
 int VAR_28 ;
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
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 size_t VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 scalar_t__ VAR_56 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct vcpu_svm*) ;
 int FUNC_3 (struct vcpu_svm*,int ) ;
 int FUNC_4 (struct vcpu_svm*,int ) ;
 int FUNC_5 (struct vcpu_svm*,int ) ;
 int FUNC_6 (struct vcpu_svm*) ;
 scalar_t__ VAR_57 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 int VAR_58 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_6__*,int) ;
 scalar_t__ FUNC_13 (TYPE_6__*) ;
 int FUNC_14 (TYPE_8__*) ;
 scalar_t__ VAR_59 ;
 scalar_t__ VAR_60 ;
 scalar_t__ VAR_61 ;
 int FUNC_15 (struct vcpu_svm*,int ) ;
 int FUNC_16 (struct vcpu_svm*) ;
 int FUNC_17 (struct vcpu_svm*,int ) ;
 int FUNC_18 (struct vcpu_svm*,int ) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (TYPE_6__*,int) ;
 int FUNC_21 (TYPE_6__*,int ) ;
 scalar_t__ VAR_62 ;
 scalar_t__ VAR_63 ;

__attribute__((used)) static void FUNC_22(struct vcpu_svm *VAR_64)
{
 struct vmcb_control_area *VAR_65 = &VAR_64->vmcb->control;
 struct vmcb_save_area *VAR_66 = &VAR_64->vmcb->save;

 VAR_64->vcpu.arch.hflags = 0;

 FUNC_15(VAR_64, VAR_5);
 FUNC_15(VAR_64, VAR_7);
 FUNC_15(VAR_64, VAR_9);
 FUNC_15(VAR_64, VAR_6);
 FUNC_15(VAR_64, VAR_8);
 FUNC_15(VAR_64, VAR_10);
 if (!FUNC_13(&VAR_64->vcpu))
  FUNC_15(VAR_64, VAR_11);

 FUNC_16(VAR_64);

 FUNC_17(VAR_64, VAR_39);
 FUNC_17(VAR_64, VAR_48);
 FUNC_17(VAR_64, VAR_38);
 FUNC_17(VAR_64, VAR_0);
 FUNC_17(VAR_64, VAR_1);






 if (VAR_57)
  FUNC_17(VAR_64, VAR_2);

 FUNC_18(VAR_64, VAR_13);
 FUNC_18(VAR_64, VAR_21);
 FUNC_18(VAR_64, VAR_29);
 FUNC_18(VAR_64, VAR_26);
 FUNC_18(VAR_64, VAR_23);
 FUNC_18(VAR_64, VAR_4);
 FUNC_18(VAR_64, VAR_14);
 FUNC_18(VAR_64, VAR_15);
 FUNC_18(VAR_64, VAR_16);
 FUNC_18(VAR_64, VAR_17);
 FUNC_18(VAR_64, VAR_19);
 FUNC_18(VAR_64, VAR_31);
 FUNC_18(VAR_64, VAR_27);
 FUNC_18(VAR_64, VAR_34);
 FUNC_18(VAR_64, VAR_33);
 FUNC_18(VAR_64, VAR_32);
 FUNC_18(VAR_64, VAR_35);
 FUNC_18(VAR_64, VAR_30);
 FUNC_18(VAR_64, VAR_3);
 FUNC_18(VAR_64, VAR_28);
 FUNC_18(VAR_64, VAR_36);
 FUNC_18(VAR_64, VAR_37);
 FUNC_18(VAR_64, VAR_24);
 FUNC_18(VAR_64, VAR_25);

 if (!FUNC_11(VAR_64->vcpu.kvm)) {
  FUNC_18(VAR_64, VAR_18);
  FUNC_18(VAR_64, VAR_20);
 }

 if (!FUNC_9(VAR_64->vcpu.kvm))
  FUNC_18(VAR_64, VAR_12);

 VAR_65->iopm_base_pa = FUNC_1(VAR_58);
 VAR_65->msrpm_base_pa = FUNC_1(FUNC_0(VAR_64->msrpm));
 VAR_65->int_ctl = VAR_52;

 FUNC_7(&VAR_66->es);
 FUNC_7(&VAR_66->ss);
 FUNC_7(&VAR_66->ds);
 FUNC_7(&VAR_66->fs);
 FUNC_7(&VAR_66->gs);

 VAR_66->cs.selector = 0xf000;
 VAR_66->cs.base = 0xffff0000;

 VAR_66->cs.attrib = VAR_46 | VAR_45 |
  VAR_47 | VAR_44;
 VAR_66->cs.limit = 0xffff;

 VAR_66->gdtr.limit = 0xffff;
 VAR_66->idtr.limit = 0xffff;

 FUNC_8(&VAR_66->ldtr, VAR_41);
 FUNC_8(&VAR_66->tr, VAR_40);

 FUNC_21(&VAR_64->vcpu, 0);
 VAR_66->dr6 = 0xffff0ff0;
 FUNC_12(&VAR_64->vcpu, 2);
 VAR_66->rip = 0x0000fff0;
 VAR_64->vcpu.arch.regs[VAR_49] = VAR_66->rip;





 FUNC_20(&VAR_64->vcpu, VAR_55 | VAR_53 | VAR_54);
 FUNC_10(&VAR_64->vcpu);

 VAR_66->cr4 = VAR_56;


 if (VAR_59) {

  VAR_65->nested_ctl |= VAR_42;
  FUNC_5(VAR_64, VAR_15);
  FUNC_4(VAR_64, VAR_39);
  FUNC_3(VAR_64, VAR_7);
  FUNC_3(VAR_64, VAR_8);
  VAR_66->g_pat = VAR_64->vcpu.arch.pat;
  VAR_66->cr3 = 0;
  VAR_66->cr4 = 0;
 }
 VAR_64->asid_generation = 0;

 VAR_64->nested.vmcb = 0;
 VAR_64->vcpu.arch.hflags = 0;

 if (VAR_60) {
  VAR_65->pause_filter_count = VAR_60;
  if (VAR_61)
   VAR_65->pause_filter_thresh = VAR_61;
  FUNC_18(VAR_64, VAR_22);
 } else {
  FUNC_5(VAR_64, VAR_22);
 }

 if (FUNC_13(&VAR_64->vcpu))
  FUNC_2(VAR_64);





 if (VAR_63) {
  FUNC_5(VAR_64, VAR_32);
  FUNC_5(VAR_64, VAR_35);
  VAR_64->vmcb->control.virt_ext |= VAR_50;
 }

 if (VAR_62) {
  FUNC_5(VAR_64, VAR_30);
  FUNC_5(VAR_64, VAR_3);
  VAR_64->vmcb->control.int_ctl |= VAR_51;
 }

 if (FUNC_19(VAR_64->vcpu.kvm)) {
  VAR_64->vmcb->control.nested_ctl |= VAR_43;
  FUNC_4(VAR_64, VAR_48);
 }

 FUNC_14(VAR_64->vmcb);

 FUNC_6(VAR_64);

}
