
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct vmctx {int dummy; } ;


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
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 scalar_t__ VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct vmctx*,int,int ,int*) ;

__attribute__((used)) static int
FUNC_2(struct vmctx *VAR_59, int VAR_60)
{
 uint64_t VAR_61, VAR_62, VAR_63, VAR_64, VAR_65, VAR_66, VAR_67, VAR_68, VAR_69;
 int VAR_70 = 0;

 if (!VAR_70 && (VAR_32 || VAR_31)) {
  uint64_t VAR_71;
  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_0, &VAR_71);
  if (VAR_70 == 0)
   FUNC_0("cr0_mask[%d]\t\t0x%016lx\n", VAR_60, VAR_71);
 }

 if (!VAR_70 && (VAR_33 || VAR_31)) {
  uint64_t VAR_72;
  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_1,
       &VAR_72);
  if (VAR_70 == 0)
   FUNC_0("cr0_shadow[%d]\t\t0x%016lx\n", VAR_60, VAR_72);
 }

 if (!VAR_70 && (VAR_35 || VAR_31)) {
  uint64_t VAR_73;
  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_7, &VAR_73);
  if (VAR_70 == 0)
   FUNC_0("cr4_mask[%d]\t\t0x%016lx\n", VAR_60, VAR_73);
 }

 if (!VAR_70 && (VAR_36 || VAR_31)) {
  uint64_t VAR_74;
  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_8,
       &VAR_74);
  if (VAR_70 == 0)
   FUNC_0("cr4_shadow[%d]\t\t0x%016lx\n", VAR_60, VAR_74);
 }

 if (!VAR_70 && (VAR_34 || VAR_31)) {
  uint64_t VAR_75, VAR_76;
  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_6,
       &VAR_75);
  if (VAR_70 == 0) {
   FUNC_0("cr3_target_count[%d]\t0x%016lx\n",
    VAR_60, VAR_75);
  }

  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_2,
       &VAR_76);
  if (VAR_70 == 0) {
   FUNC_0("cr3_target0[%d]\t\t0x%016lx\n",
    VAR_60, VAR_76);
  }

  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_3,
       &VAR_76);
  if (VAR_70 == 0) {
   FUNC_0("cr3_target1[%d]\t\t0x%016lx\n",
    VAR_60, VAR_76);
  }

  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_4,
       &VAR_76);
  if (VAR_70 == 0) {
   FUNC_0("cr3_target2[%d]\t\t0x%016lx\n",
    VAR_60, VAR_76);
  }

  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_5,
       &VAR_76);
  if (VAR_70 == 0) {
   FUNC_0("cr3_target3[%d]\t\t0x%016lx\n",
    VAR_60, VAR_76);
  }
 }

 if (!VAR_70 && (VAR_46 || VAR_31)) {
  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_27, &VAR_61);
  if (VAR_70 == 0)
   FUNC_0("pinbased_ctls[%d]\t0x%016lx\n", VAR_60, VAR_61);
 }

 if (!VAR_70 && (VAR_47 || VAR_31)) {
  VAR_70 = FUNC_1(VAR_59, VAR_60,
       VAR_28, &VAR_61);
  if (VAR_70 == 0)
   FUNC_0("procbased_ctls[%d]\t0x%016lx\n", VAR_60, VAR_61);
 }

 if (!VAR_70 && (VAR_48 || VAR_31)) {
  VAR_70 = FUNC_1(VAR_59, VAR_60,
       VAR_29, &VAR_61);
  if (VAR_70 == 0)
   FUNC_0("procbased_ctls2[%d]\t0x%016lx\n", VAR_60, VAR_61);
 }

 if (!VAR_70 && (VAR_55 || VAR_31)) {
  VAR_70 = FUNC_1(VAR_59, VAR_60,
       VAR_17, &VAR_69);
  if (VAR_70 == 0)
   FUNC_0("gla[%d]\t\t0x%016lx\n", VAR_60, VAR_69);
 }

 if (!VAR_70 && (VAR_56 || VAR_31)) {
  VAR_70 = FUNC_1(VAR_59, VAR_60,
       VAR_18, &VAR_69);
  if (VAR_70 == 0)
   FUNC_0("gpa[%d]\t\t0x%016lx\n", VAR_60, VAR_69);
 }

 if (!VAR_70 && (VAR_50 ||
  VAR_31)) {
  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_10,&VAR_69);
  if (VAR_70 == 0) {
   FUNC_0("entry_interruption_info[%d]\t0x%016lx\n",
    VAR_60, VAR_69);
  }
 }

 if (!VAR_70 && (VAR_49 || VAR_31)) {
  uint64_t VAR_77;
  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_30,
       &VAR_77);
  if (VAR_70 == 0)
   FUNC_0("tpr_threshold[%d]\t0x%016lx\n", VAR_60, VAR_77);
 }

 if (!VAR_70 && (VAR_45 || VAR_31)) {
  uint64_t VAR_78;
  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_25,
       &VAR_78);
  if (VAR_70 == 0) {
   FUNC_0("instruction_error[%d]\t0x%016lx\n",
    VAR_60, VAR_78);
  }
 }

 if (!VAR_70 && (VAR_38 || VAR_31)) {
  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_11, &VAR_61);
  if (VAR_70 == 0)
   FUNC_0("exit_ctls[%d]\t\t0x%016lx\n", VAR_60, VAR_61);
 }

 if (!VAR_70 && (VAR_37 || VAR_31)) {
  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_9, &VAR_61);
  if (VAR_70 == 0)
   FUNC_0("entry_ctls[%d]\t\t0x%016lx\n", VAR_60, VAR_61);
 }

 if (!VAR_70 && (VAR_42 || VAR_31)) {
  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_22, &VAR_67);
  if (VAR_70 == 0)
   FUNC_0("host_pat[%d]\t\t0x%016lx\n", VAR_60, VAR_67);
 }

 if (!VAR_70 && (VAR_39 || VAR_31)) {
  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_19, &VAR_62);
  if (VAR_70 == 0)
   FUNC_0("host_cr0[%d]\t\t0x%016lx\n", VAR_60, VAR_62);
 }

 if (!VAR_70 && (VAR_40 || VAR_31)) {
  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_20, &VAR_63);
  if (VAR_70 == 0)
   FUNC_0("host_cr3[%d]\t\t0x%016lx\n", VAR_60, VAR_63);
 }

 if (!VAR_70 && (VAR_41 || VAR_31)) {
  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_21, &VAR_64);
  if (VAR_70 == 0)
   FUNC_0("host_cr4[%d]\t\t0x%016lx\n", VAR_60, VAR_64);
 }

 if (!VAR_70 && (VAR_43 || VAR_31)) {
  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_23, &VAR_66);
  if (VAR_70 == 0)
   FUNC_0("host_rip[%d]\t\t0x%016lx\n", VAR_60, VAR_66);
 }

 if (!VAR_70 && (VAR_44 || VAR_31)) {
  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_24, &VAR_65);
  if (VAR_70 == 0)
   FUNC_0("host_rsp[%d]\t\t0x%016lx\n", VAR_60, VAR_65);
 }

 if (!VAR_70 && (VAR_58 || VAR_31)) {
  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_26, &VAR_68);
  if (VAR_70 == 0)
   FUNC_0("vmcs_pointer[%d]\t0x%016lx\n", VAR_60, VAR_68);
 }

 if (!VAR_70 && (VAR_53 || VAR_31)) {
  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_14, &VAR_69);
  if (VAR_70 == 0) {
   FUNC_0("vmcs_exit_interruption_info[%d]\t0x%016lx\n",
    VAR_60, VAR_69);
  }
 }

 if (!VAR_70 && (VAR_52 || VAR_31)) {
  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_13,
           &VAR_69);
  if (VAR_70 == 0) {
   FUNC_0("vmcs_exit_interruption_error[%d]\t0x%016lx\n",
    VAR_60, VAR_69);
  }
 }

 if (!VAR_70 && (VAR_57 || VAR_31)) {
  VAR_70 = FUNC_1(VAR_59, VAR_60,
       VAR_16, &VAR_69);
  if (VAR_70 == 0) {
   FUNC_0("vmcs_guest_interruptibility[%d]\t0x%016lx\n",
    VAR_60, VAR_69);
  }
 }

 if (!VAR_70 && (VAR_51 || VAR_31)) {
  VAR_70 = FUNC_1(VAR_59, VAR_60,
      VAR_12, &VAR_69);
  if (VAR_70 == 0)
   FUNC_0("vmcs_exit_inst_length[%d]\t0x%08x\n", VAR_60,
       (uint32_t)VAR_69);
 }

 if (!VAR_70 && (VAR_54 || VAR_31)) {
  VAR_70 = FUNC_1(VAR_59, VAR_60, VAR_15,
       &VAR_69);
  if (VAR_70 == 0)
   FUNC_0("vmcs_exit_qualification[%d]\t0x%016lx\n",
    VAR_60, VAR_69);
 }

 return (VAR_70);
}
