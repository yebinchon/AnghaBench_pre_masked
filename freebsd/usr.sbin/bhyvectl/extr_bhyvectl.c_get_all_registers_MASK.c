
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
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
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
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
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (struct vmctx*,int,int ,int *) ;

__attribute__((used)) static int
FUNC_2(struct vmctx *VAR_59, int VAR_60)
{
 uint64_t VAR_61, VAR_62, VAR_63, VAR_64, VAR_65, VAR_66, VAR_67, VAR_68, VAR_69, VAR_70;
 uint64_t VAR_71, VAR_72, VAR_73, VAR_74;
 uint64_t VAR_75, VAR_76, VAR_77, VAR_78, VAR_79, VAR_80, VAR_81;
 uint64_t VAR_82, VAR_83, VAR_84, VAR_85, VAR_86, VAR_87, VAR_88, VAR_89;
 int VAR_90 = 0;

 if (!VAR_90 && (VAR_40 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_10, &VAR_74);
  if (VAR_90 == 0)
   FUNC_0("efer[%d]\t\t0x%016lx\n", VAR_60, VAR_74);
 }

 if (!VAR_90 && (VAR_30 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_0, &VAR_61);
  if (VAR_90 == 0)
   FUNC_0("cr0[%d]\t\t0x%016lx\n", VAR_60, VAR_61);
 }

 if (!VAR_90 && (VAR_31 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_1, &VAR_62);
  if (VAR_90 == 0)
   FUNC_0("cr2[%d]\t\t0x%016lx\n", VAR_60, VAR_62);
 }

 if (!VAR_90 && (VAR_32 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_2, &VAR_63);
  if (VAR_90 == 0)
   FUNC_0("cr3[%d]\t\t0x%016lx\n", VAR_60, VAR_63);
 }

 if (!VAR_90 && (VAR_33 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_3, &VAR_64);
  if (VAR_90 == 0)
   FUNC_0("cr4[%d]\t\t0x%016lx\n", VAR_60, VAR_64);
 }

 if (!VAR_90 && (VAR_34 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_4, &VAR_65);
  if (VAR_90 == 0)
   FUNC_0("dr0[%d]\t\t0x%016lx\n", VAR_60, VAR_65);
 }

 if (!VAR_90 && (VAR_35 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_5, &VAR_66);
  if (VAR_90 == 0)
   FUNC_0("dr1[%d]\t\t0x%016lx\n", VAR_60, VAR_66);
 }

 if (!VAR_90 && (VAR_36 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_6, &VAR_67);
  if (VAR_90 == 0)
   FUNC_0("dr2[%d]\t\t0x%016lx\n", VAR_60, VAR_67);
 }

 if (!VAR_90 && (VAR_37 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_7, &VAR_68);
  if (VAR_90 == 0)
   FUNC_0("dr3[%d]\t\t0x%016lx\n", VAR_60, VAR_68);
 }

 if (!VAR_90 && (VAR_38 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_8, &VAR_69);
  if (VAR_90 == 0)
   FUNC_0("dr6[%d]\t\t0x%016lx\n", VAR_60, VAR_69);
 }

 if (!VAR_90 && (VAR_39 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_9, &VAR_70);
  if (VAR_90 == 0)
   FUNC_0("dr7[%d]\t\t0x%016lx\n", VAR_60, VAR_70);
 }

 if (!VAR_90 && (VAR_58 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_28, &VAR_71);
  if (VAR_90 == 0)
   FUNC_0("rsp[%d]\t\t0x%016lx\n", VAR_60, VAR_71);
 }

 if (!VAR_90 && (VAR_56 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_26, &VAR_72);
  if (VAR_90 == 0)
   FUNC_0("rip[%d]\t\t0x%016lx\n", VAR_60, VAR_72);
 }

 if (!VAR_90 && (VAR_49 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_19, &VAR_75);
  if (VAR_90 == 0)
   FUNC_0("rax[%d]\t\t0x%016lx\n", VAR_60, VAR_75);
 }

 if (!VAR_90 && (VAR_51 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_21, &VAR_76);
  if (VAR_90 == 0)
   FUNC_0("rbx[%d]\t\t0x%016lx\n", VAR_60, VAR_76);
 }

 if (!VAR_90 && (VAR_52 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_22, &VAR_77);
  if (VAR_90 == 0)
   FUNC_0("rcx[%d]\t\t0x%016lx\n", VAR_60, VAR_77);
 }

 if (!VAR_90 && (VAR_54 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_24, &VAR_78);
  if (VAR_90 == 0)
   FUNC_0("rdx[%d]\t\t0x%016lx\n", VAR_60, VAR_78);
 }

 if (!VAR_90 && (VAR_57 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_27, &VAR_79);
  if (VAR_90 == 0)
   FUNC_0("rsi[%d]\t\t0x%016lx\n", VAR_60, VAR_79);
 }

 if (!VAR_90 && (VAR_53 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_23, &VAR_80);
  if (VAR_90 == 0)
   FUNC_0("rdi[%d]\t\t0x%016lx\n", VAR_60, VAR_80);
 }

 if (!VAR_90 && (VAR_50 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_20, &VAR_81);
  if (VAR_90 == 0)
   FUNC_0("rbp[%d]\t\t0x%016lx\n", VAR_60, VAR_81);
 }

 if (!VAR_90 && (VAR_47 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_17, &VAR_82);
  if (VAR_90 == 0)
   FUNC_0("r8[%d]\t\t0x%016lx\n", VAR_60, VAR_82);
 }

 if (!VAR_90 && (VAR_48 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_18, &VAR_83);
  if (VAR_90 == 0)
   FUNC_0("r9[%d]\t\t0x%016lx\n", VAR_60, VAR_83);
 }

 if (!VAR_90 && (VAR_41 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_11, &VAR_84);
  if (VAR_90 == 0)
   FUNC_0("r10[%d]\t\t0x%016lx\n", VAR_60, VAR_84);
 }

 if (!VAR_90 && (VAR_42 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_12, &VAR_85);
  if (VAR_90 == 0)
   FUNC_0("r11[%d]\t\t0x%016lx\n", VAR_60, VAR_85);
 }

 if (!VAR_90 && (VAR_43 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_13, &VAR_86);
  if (VAR_90 == 0)
   FUNC_0("r12[%d]\t\t0x%016lx\n", VAR_60, VAR_86);
 }

 if (!VAR_90 && (VAR_44 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_14, &VAR_87);
  if (VAR_90 == 0)
   FUNC_0("r13[%d]\t\t0x%016lx\n", VAR_60, VAR_87);
 }

 if (!VAR_90 && (VAR_45 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_15, &VAR_88);
  if (VAR_90 == 0)
   FUNC_0("r14[%d]\t\t0x%016lx\n", VAR_60, VAR_88);
 }

 if (!VAR_90 && (VAR_46 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_16, &VAR_89);
  if (VAR_90 == 0)
   FUNC_0("r15[%d]\t\t0x%016lx\n", VAR_60, VAR_89);
 }

 if (!VAR_90 && (VAR_55 || VAR_29)) {
  VAR_90 = FUNC_1(VAR_59, VAR_60, VAR_25,
     &VAR_73);
  if (VAR_90 == 0)
   FUNC_0("rflags[%d]\t0x%016lx\n", VAR_60, VAR_73);
 }

 return (VAR_90);
}
