
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {int processor_id; scalar_t__ cputype; int fpu_msk31; int options; int ases; int srsets; int msa_id; int fpu_csr31; int writecombine; int fpu_id; } ;


 int FUNC_0 (int) ;
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
 int VAR_28 ;





 int VAR_29 ;
 int VAR_30 ;
 int FUNC_1 (int,char*) ;
 int VAR_31 ;
 int * VAR_32 ;
 unsigned long long VAR_33 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
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
 int FUNC_4 (struct cpuinfo_mips*,unsigned int) ;
 int FUNC_5 (struct cpuinfo_mips*,unsigned int) ;
 int FUNC_6 (struct cpuinfo_mips*,unsigned int) ;
 int FUNC_7 (struct cpuinfo_mips*,unsigned int) ;
 int FUNC_8 (struct cpuinfo_mips*,unsigned int) ;
 int FUNC_9 (struct cpuinfo_mips*,unsigned int) ;
 int FUNC_10 (struct cpuinfo_mips*,unsigned int) ;
 int FUNC_11 (struct cpuinfo_mips*,unsigned int) ;
 int FUNC_12 (struct cpuinfo_mips*,unsigned int) ;
 int FUNC_13 (struct cpuinfo_mips*,unsigned int) ;
 int FUNC_14 (struct cpuinfo_mips*,unsigned int) ;
 int FUNC_15 (struct cpuinfo_mips*) ;
 int FUNC_16 (struct cpuinfo_mips*) ;
 int FUNC_17 (struct cpuinfo_mips*) ;
 int FUNC_18 (struct cpuinfo_mips*) ;
 unsigned long long VAR_51 ;
 struct cpuinfo_mips VAR_52 ;
 scalar_t__ FUNC_19 () ;
 int VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 scalar_t__ VAR_56 ;
 int FUNC_20 () ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 (int) ;
 int FUNC_26 (unsigned int,char*) ;
 unsigned int FUNC_27 () ;
 int FUNC_28 (int) ;
 int FUNC_29 (int) ;

void FUNC_30(void)
{
 struct cpuinfo_mips *VAR_57 = &VAR_52;
 unsigned int VAR_58 = FUNC_27();





 FUNC_26(VAR_58, "mips");

 VAR_57->processor_id = VAR_29;
 VAR_57->fpu_id = VAR_1;
 VAR_57->cputype = VAR_0;
 VAR_57->writecombine = VAR_31;

 VAR_57->fpu_csr31 = VAR_4;
 VAR_57->fpu_msk31 = VAR_5 | VAR_2 | VAR_3;

 VAR_57->processor_id = FUNC_21();
 switch (VAR_57->processor_id & VAR_28) {
 case 134:
  FUNC_8(VAR_57, VAR_58);
  break;
 case 132:
  FUNC_10(VAR_57, VAR_58);
  break;
 case 140:
  FUNC_4(VAR_57, VAR_58);
  break;
 case 128:
  FUNC_14(VAR_57, VAR_58);
  break;
 case 139:
  FUNC_5(VAR_57, VAR_58);
  break;
 case 129:
  FUNC_13(VAR_57, VAR_58);
  break;
 case 130:
  FUNC_12(VAR_57, VAR_58);
  break;
 case 138:
  FUNC_6(VAR_57, VAR_58);
  break;
 case 133:
  FUNC_9(VAR_57, VAR_58);
  break;
 case 137:
 case 136:
 case 135:
  FUNC_7(VAR_57, VAR_58);
  break;
 case 131:
  FUNC_11(VAR_57, VAR_58);
  break;
 }

 FUNC_0(!VAR_32[VAR_58]);
 FUNC_0(VAR_57->cputype == VAR_0);






 FUNC_0(FUNC_19() != VAR_57->cputype);

 if (VAR_48) {

  FUNC_25(VAR_27);
  FUNC_2();

  if (FUNC_20() & VAR_27)
   VAR_57->options |= VAR_24;
 }

 if (VAR_55)
  VAR_57->options &= ~VAR_21;

 if (VAR_54)
  VAR_57->ases &= ~(VAR_19 | VAR_20);

 if (VAR_56) {
  VAR_57->options &= ~VAR_22;
  FUNC_28(FUNC_22() &
          ~(1 << VAR_25));
 }

 if (VAR_57->options & VAR_21)
  FUNC_17(VAR_57);
 else
  FUNC_18(VAR_57);

 if (VAR_34)
  FUNC_29(FUNC_23() |
       VAR_30);

 if (VAR_45) {
  VAR_57->srsets = ((FUNC_24() >> 26) & 0x0f) + 1;

  VAR_57->options |= VAR_23;
 }
 else
  VAR_57->srsets = 1;

 if (VAR_46)
  VAR_53 |= VAR_17;

 if (VAR_47) {
  VAR_57->msa_id = FUNC_3();
  FUNC_1(VAR_57->msa_id & VAR_26,
       "Vector register partitioning unimplemented!");
  VAR_53 |= VAR_16;
 }

 if (VAR_42)
  VAR_53 |= VAR_13;

 if (VAR_41)
  VAR_53 |= VAR_12;

 if (VAR_44)
  VAR_53 |= VAR_15;

 if (VAR_49)
  VAR_53 |= VAR_18;

 if (VAR_35)
  VAR_53 |= VAR_9;

 if (VAR_36)
  VAR_53 |= VAR_10;

 if (VAR_37)
  VAR_53 |= VAR_11;

 if (VAR_43)
  VAR_53 |= VAR_14;

 if (VAR_40)
  VAR_53 |= VAR_8;

 if (VAR_38)
  VAR_53 |= VAR_6;

 if (VAR_39)
  VAR_53 |= VAR_7;

 if (VAR_50)
  FUNC_16(VAR_57);

 FUNC_15(VAR_57);





}
