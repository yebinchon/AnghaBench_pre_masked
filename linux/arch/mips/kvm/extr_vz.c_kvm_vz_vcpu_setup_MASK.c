
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mips_coproc {scalar_t__** reg; } ;
struct TYPE_3__ {int pc; struct mips_coproc* cop0; } ;
struct kvm_vcpu {int vcpu_id; TYPE_1__ arch; } ;
typedef int s32 ;
struct TYPE_4__ {int processor_id; } ;


 int FUNC_0 (int) ;
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
 size_t VAR_36 ;
 size_t VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 unsigned long VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 TYPE_2__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 scalar_t__ VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
 scalar_t__ VAR_59 ;
 int VAR_60 ;
 int FUNC_1 (struct mips_coproc*,int ,int) ;
 int FUNC_2 (struct mips_coproc*,int ,int ) ;
 int FUNC_3 (struct mips_coproc*,int) ;
 int FUNC_4 (struct mips_coproc*,int) ;
 int FUNC_5 (struct mips_coproc*,int) ;
 int FUNC_6 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_7 (struct mips_coproc*) ;
 int FUNC_8 (struct mips_coproc*) ;
 int FUNC_9 (struct mips_coproc*) ;
 int FUNC_10 (struct mips_coproc*) ;
 int FUNC_11 (struct mips_coproc*) ;
 int FUNC_12 (struct mips_coproc*) ;
 int FUNC_13 (struct mips_coproc*,int ) ;
 int FUNC_14 (struct mips_coproc*,int ) ;
 int FUNC_15 (struct mips_coproc*,int ) ;
 int FUNC_16 (struct mips_coproc*,int ) ;
 int FUNC_17 (struct mips_coproc*,int ) ;
 int FUNC_18 (struct mips_coproc*,int) ;
 int FUNC_19 (struct mips_coproc*,int) ;
 int FUNC_20 (struct mips_coproc*,int) ;
 int FUNC_21 (struct mips_coproc*,int) ;
 int FUNC_22 (struct mips_coproc*,int ) ;
 int FUNC_23 (struct mips_coproc*,int) ;
 int FUNC_24 (struct mips_coproc*,int) ;
 int FUNC_25 (struct mips_coproc*,int) ;
 int FUNC_26 (struct mips_coproc*,int) ;
 int FUNC_27 (struct mips_coproc*,int) ;
 int FUNC_28 (struct mips_coproc*,int) ;
 int FUNC_29 (struct mips_coproc*,int) ;
 int FUNC_30 (struct mips_coproc*,unsigned long long) ;
 unsigned long VAR_61 ;
 int FUNC_31 () ;
 int FUNC_32 () ;
 int FUNC_33 () ;
 int FUNC_34 () ;

__attribute__((used)) static int FUNC_35(struct kvm_vcpu *VAR_62)
{
 struct mips_coproc *VAR_63 = VAR_62->arch.cop0;
 unsigned long VAR_64 = 100*1000*1000;





 if (VAR_61 && VAR_61 <= VAR_40)
  VAR_64 = VAR_61;
 FUNC_6(VAR_62, VAR_64);






 if (VAR_59)
  FUNC_21(VAR_63, VAR_42 | VAR_43 | VAR_41);

 if (VAR_59)
  FUNC_29(VAR_63,
           FUNC_34() & VAR_4);

 FUNC_28(VAR_63, VAR_44 | VAR_45);
 if (VAR_59)
  FUNC_2(VAR_63, VAR_46, FUNC_33());

 FUNC_20(VAR_63, FUNC_32() &
    (VAR_1 | VAR_2 | VAR_3));

 FUNC_22(VAR_63, VAR_49.processor_id);

 FUNC_19(VAR_63, (s32)0x80000000 | VAR_62->vcpu_id);

 FUNC_7(VAR_63);

 FUNC_1(VAR_63, VAR_0,
     VAR_48 >> VAR_47);

 FUNC_1(VAR_63, VAR_35, FUNC_31());
 if (VAR_50) {
  FUNC_13(VAR_63, VAR_34);

  FUNC_8(VAR_63);

  FUNC_3(VAR_63, VAR_5 |
            VAR_8 |
            VAR_9 |
            VAR_10 |
            VAR_6 |
            VAR_7);
 }
 if (VAR_51) {
  FUNC_14(VAR_63, VAR_34);

  FUNC_9(VAR_63);
 }
 if (VAR_52) {
  FUNC_15(VAR_63, VAR_34);

  FUNC_10(VAR_63);

  FUNC_4(VAR_63, VAR_15);

  FUNC_4(VAR_63, VAR_18 |
            VAR_11 |
            VAR_23 |
            VAR_14 |
            VAR_13 |
            VAR_16 |
            VAR_17 |
            VAR_24 |
            VAR_25 |
            VAR_21 |
            VAR_12 |
            VAR_19 |
            VAR_20 |
            VAR_22);
 }
 if (VAR_53) {
  FUNC_16(VAR_63, VAR_34);

  FUNC_11(VAR_63);
 }
 if (VAR_54) {
  FUNC_17(VAR_63, VAR_34);

  FUNC_12(VAR_63);

  FUNC_5(VAR_63, VAR_28 |
            VAR_26 |
            VAR_30 |
            VAR_32 |
            VAR_27 |
            VAR_31 |
            VAR_33);

  FUNC_5(VAR_63, VAR_29);
 }

 if (VAR_55) {

  FUNC_18(VAR_63, 0x007ffff0);






 }


 if (VAR_57) {

  FUNC_25(VAR_63, 0x00200010);
  FUNC_26(VAR_63, 0x00000002 |
    (VAR_48 >> VAR_47) <<
      (16 + VAR_39));
  FUNC_27(VAR_63, 0x00380438);
 }


 if (VAR_56 && VAR_59) {

  FUNC_23(VAR_63, 0x0c30c302);

  FUNC_24(VAR_63, 1 << VAR_38);
 }


 if (VAR_58)
  VAR_63->reg[VAR_36][VAR_37] = 0;


 VAR_62->arch.pc = FUNC_0(0x1fc00000);

 return 0;
}
