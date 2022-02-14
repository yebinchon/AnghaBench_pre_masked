
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t rt; size_t rd; size_t sel; int rs; } ;
struct TYPE_6__ {int sc; } ;
struct TYPE_7__ {int func; scalar_t__ co; } ;
union mips_instruction {TYPE_3__ c0r_format; TYPE_1__ mfmc0_format; TYPE_2__ co_format; } ;
typedef size_t u32 ;
struct mips_coproc {size_t** reg; int ** stat; } ;
struct TYPE_9__ {unsigned long pc; size_t* gprs; int aux_inuse; struct mips_coproc* cop0; } ;
struct kvm_vcpu {TYPE_4__ arch; } ;
struct kvm_run {int dummy; } ;
typedef void* s32 ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;
struct TYPE_10__ {int fpu_id; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (size_t,size_t) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 int VAR_31 ;
 unsigned int VAR_32 ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 TYPE_5__ VAR_33 ;




 int FUNC_3 (struct mips_coproc*,int,size_t) ;
 int FUNC_4 (struct mips_coproc*,int,size_t) ;
 int FUNC_5 (struct mips_coproc*,int ) ;
 int FUNC_6 (char*,size_t,...) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (struct kvm_vcpu*) ;
 int FUNC_10 (struct kvm_vcpu*,size_t) ;
 unsigned int FUNC_11 (struct kvm_vcpu*) ;
 int FUNC_12 (struct kvm_vcpu*) ;
 int FUNC_13 (struct kvm_vcpu*) ;
 int FUNC_14 (struct kvm_vcpu*) ;
 int FUNC_15 (struct kvm_vcpu*,union mips_instruction) ;
 int FUNC_16 (struct kvm_vcpu*) ;
 int FUNC_17 (struct kvm_vcpu*) ;
 int FUNC_18 (struct kvm_vcpu*) ;
 int FUNC_19 (struct kvm_vcpu*) ;
 int FUNC_20 (struct kvm_vcpu*) ;
 int FUNC_21 (TYPE_4__*) ;
 int FUNC_22 (struct kvm_vcpu*) ;
 int FUNC_23 (union mips_instruction,size_t*,struct kvm_vcpu*) ;
 int FUNC_24 (union mips_instruction,size_t*,struct kvm_vcpu*) ;
 int FUNC_25 (struct kvm_vcpu*,size_t,int) ;
 int FUNC_26 (struct kvm_vcpu*,size_t) ;
 size_t FUNC_27 (struct mips_coproc*) ;
 int FUNC_28 (struct mips_coproc*) ;
 unsigned int FUNC_29 (struct mips_coproc*) ;
 void* FUNC_30 (struct mips_coproc*) ;
 int FUNC_31 (struct mips_coproc*,int ) ;
 int FUNC_32 (struct mips_coproc*,unsigned int) ;
 int FUNC_33 (struct mips_coproc*,unsigned int) ;



 int FUNC_34 () ;
 int FUNC_35 () ;





 int FUNC_36 (struct kvm_vcpu*,int ,int ,size_t) ;
 int FUNC_37 (struct kvm_vcpu*,size_t) ;



enum emulation_result FUNC_38(union mips_instruction VAR_34,
        u32 *VAR_35, u32 VAR_36,
        struct kvm_run *VAR_37,
        struct kvm_vcpu *VAR_38)
{
 struct mips_coproc *VAR_39 = VAR_38->arch.cop0;
 enum emulation_result VAR_40 = VAR_1;
 u32 VAR_41, VAR_42, VAR_43;
 unsigned long VAR_44;





 VAR_44 = VAR_38->arch.pc;
 VAR_40 = FUNC_37(VAR_38, VAR_36);
 if (VAR_40 == VAR_2)
  return VAR_40;

 if (VAR_34.co_format.co) {
  switch (VAR_34.co_format.func) {
  case 132:
   VAR_40 = FUNC_17(VAR_38);
   break;
  case 131:
   VAR_40 = FUNC_18(VAR_38);
   break;
  case 130:
   VAR_40 = FUNC_19(VAR_38);
   break;
  case 133:
   VAR_40 = FUNC_16(VAR_38);
   break;
  case 134:
   FUNC_8("!!!COP0_RFE!!!\n");
   break;
  case 139:
   VAR_40 = FUNC_14(VAR_38);
   goto dont_update_pc;
  case 129:
   VAR_40 = FUNC_20(VAR_38);
   break;
  case 138:
   VAR_40 = FUNC_15(VAR_38, VAR_34);
   break;
  }
 } else {
  VAR_41 = VAR_34.c0r_format.rt;
  VAR_42 = VAR_34.c0r_format.rd;
  VAR_43 = VAR_34.c0r_format.sel;

  switch (VAR_34.c0r_format.rs) {
  case 137:




   if ((VAR_42 == VAR_16) && (VAR_43 == 0)) {
    VAR_38->arch.gprs[VAR_41] =
        (s32)FUNC_22(VAR_38);
   } else if ((VAR_42 == VAR_17) && (VAR_43 == 0)) {
    VAR_38->arch.gprs[VAR_41] = 0x0;



   } else {
    VAR_38->arch.gprs[VAR_41] = (s32)VAR_39->reg[VAR_42][VAR_43];




   }

   FUNC_36(VAR_38, VAR_8,
          FUNC_0(VAR_42, VAR_43),
          VAR_38->arch.gprs[VAR_41]);
   break;

  case 141:
   VAR_38->arch.gprs[VAR_41] = VAR_39->reg[VAR_42][VAR_43];

   FUNC_36(VAR_38, VAR_6,
          FUNC_0(VAR_42, VAR_43),
          VAR_38->arch.gprs[VAR_41]);
   break;

  case 135:



   FUNC_36(VAR_38, VAR_9,
          FUNC_0(VAR_42, VAR_43),
          VAR_38->arch.gprs[VAR_41]);

   if ((VAR_42 == VAR_22)
       && (VAR_38->arch.gprs[VAR_41] >=
    VAR_5)) {
    FUNC_8("Invalid TLB Index: %ld",
     VAR_38->arch.gprs[VAR_41]);
    VAR_40 = VAR_2;
    break;
   }
   if ((VAR_42 == VAR_19) && (VAR_43 == 1)) {




    FUNC_4(VAR_39, 0x1ffff000,
         VAR_38->arch.gprs[VAR_41]);
   } else if (VAR_42 == VAR_21 && VAR_43 == 0) {
    FUNC_10(VAR_38,
       VAR_38->arch.gprs[VAR_41]);
   }

   else if ((VAR_42 == VAR_16) && (VAR_43 == 0)) {
    FUNC_26(VAR_38, VAR_38->arch.gprs[VAR_41]);
    goto done;
   } else if ((VAR_42 == VAR_14) && (VAR_43 == 0)) {


    FUNC_25(VAR_38,
             VAR_38->arch.gprs[VAR_41],
             1);
   } else if ((VAR_42 == VAR_20) && (VAR_43 == 0)) {
    unsigned int VAR_45, VAR_46, VAR_47;

    VAR_45 = FUNC_30(VAR_39);
    VAR_46 = VAR_38->arch.gprs[VAR_41];
    VAR_47 = VAR_46 ^ VAR_45;


    VAR_46 &= ~VAR_32;






    if (!FUNC_21(&VAR_38->arch))
     VAR_46 &= ~(VAR_29 | VAR_30);





    if (!(VAR_33.fpu_id & VAR_23))
     VAR_46 &= ~VAR_30;



    FUNC_34();






    if (VAR_47 & VAR_30)
     FUNC_7(VAR_38);
    if (VAR_47 & VAR_29 && !(VAR_46 & VAR_30) &&
        VAR_38->arch.aux_inuse & VAR_4)
     FUNC_9(VAR_38);
    if (VAR_47 & VAR_29 &&
        VAR_38->arch.aux_inuse & VAR_3)
     FUNC_2(VAR_29, VAR_46);

    FUNC_35();

    FUNC_33(VAR_39, VAR_46);
   } else if ((VAR_42 == VAR_15) && (VAR_43 == 5)) {
    unsigned int VAR_48, VAR_49, VAR_50, VAR_51;

    VAR_48 = FUNC_29(VAR_39);
    VAR_49 = VAR_38->arch.gprs[VAR_41];


    VAR_51 = FUNC_11(VAR_38);
    VAR_50 = (VAR_49 ^ VAR_48) & VAR_51;
    VAR_49 = VAR_48 ^ VAR_50;



    FUNC_34();





    if (VAR_50 & VAR_11 &&
        VAR_38->arch.aux_inuse & VAR_3)
     FUNC_1(VAR_11, VAR_49);







    if (VAR_50 & VAR_12 &&
        VAR_38->arch.aux_inuse & VAR_4)
     FUNC_1(VAR_12,
         VAR_49);

    FUNC_35();

    FUNC_32(VAR_39, VAR_49);
   } else if ((VAR_42 == VAR_13) && (VAR_43 == 0)) {
    u32 VAR_52, VAR_53;

    VAR_52 = FUNC_27(VAR_39);
    VAR_53 = VAR_38->arch.gprs[VAR_41];

    FUNC_3(VAR_39, 0x08800300,
         VAR_53);

    if ((VAR_52 ^ VAR_53) & VAR_0) {
     if (VAR_53 & VAR_0)
      FUNC_12(VAR_38);
     else
      FUNC_13(VAR_38);
    }
   } else if ((VAR_42 == VAR_18) && (VAR_43 == 0)) {
    u32 VAR_54 = VAR_26 |
        VAR_27 |
        VAR_24 |
        VAR_25;

    if (FUNC_28(VAR_39) &
        VAR_10)
     VAR_54 |= VAR_28;
    VAR_39->reg[VAR_42][VAR_43] = VAR_38->arch.gprs[VAR_41] & VAR_54;
   } else {
    VAR_39->reg[VAR_42][VAR_43] = VAR_38->arch.gprs[VAR_41];



   }
   break;

  case 140:
   FUNC_8("!!!!!!![%#lx]dmtc_op: rt: %d, rd: %d, sel: %d!!!!!!\n",
    VAR_38->arch.pc, VAR_41, VAR_42, VAR_43);
   FUNC_36(VAR_38, VAR_7,
          FUNC_0(VAR_42, VAR_43),
          VAR_38->arch.gprs[VAR_41]);
   VAR_40 = VAR_2;
   break;

  case 136:



   if (VAR_41 != 0)
    VAR_38->arch.gprs[VAR_41] =
        FUNC_30(VAR_39);

   if (VAR_34.mfmc0_format.sc) {
    FUNC_6("[%#lx] mfmc0_op: EI\n",
       VAR_38->arch.pc);
    FUNC_31(VAR_39, VAR_31);
   } else {
    FUNC_6("[%#lx] mfmc0_op: DI\n",
       VAR_38->arch.pc);
    FUNC_5(VAR_39, VAR_31);
   }

   break;

  case 128:
   {
    u32 VAR_55 = VAR_39->reg[VAR_20][2] & 0xf;
    u32 VAR_56 =
        (VAR_39->reg[VAR_20][2] >> 6) & 0xf;




    if (VAR_55 || VAR_56) {
     VAR_40 = VAR_2;
     break;
    }
    FUNC_6("WRPGPR[%d][%d] = %#lx\n", VAR_56, VAR_42,
       VAR_38->arch.gprs[VAR_41]);
    VAR_38->arch.gprs[VAR_42] = VAR_38->arch.gprs[VAR_41];
   }
   break;
  default:
   FUNC_8("[%#lx]MachEmulateCP0: unsupported COP0, copz: 0x%x\n",
    VAR_38->arch.pc, VAR_34.c0r_format.rs);
   VAR_40 = VAR_2;
   break;
  }
 }

done:

 if (VAR_40 == VAR_2)
  VAR_38->arch.pc = VAR_44;

dont_update_pc:






 return VAR_40;
}
