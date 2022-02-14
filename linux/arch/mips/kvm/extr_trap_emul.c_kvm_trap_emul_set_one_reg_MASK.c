
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mips_coproc {int dummy; } ;
struct TYPE_2__ {struct mips_coproc* cop0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_one_reg {int id; } ;
typedef unsigned int s64 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mips_coproc*,int ,unsigned int) ;
 int FUNC_1 (struct mips_coproc*,int,unsigned int) ;
 unsigned int FUNC_2 (struct kvm_vcpu*) ;
 unsigned int FUNC_3 (struct kvm_vcpu*) ;
 unsigned int FUNC_4 (struct kvm_vcpu*) ;
 unsigned int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*,unsigned int) ;
 int FUNC_9 (struct kvm_vcpu*,unsigned int) ;
 int FUNC_10 (struct kvm_vcpu*,unsigned int) ;
 int FUNC_11 (struct kvm_vcpu*,unsigned int,int) ;
 int FUNC_12 (struct kvm_vcpu*,unsigned int) ;
 unsigned int FUNC_13 (struct mips_coproc*) ;
 unsigned int FUNC_14 (struct mips_coproc*) ;
 unsigned int FUNC_15 (struct mips_coproc*) ;
 unsigned int FUNC_16 (struct mips_coproc*) ;
 unsigned int FUNC_17 (struct mips_coproc*) ;
 int FUNC_18 (struct mips_coproc*,unsigned int) ;
 int FUNC_19 (struct mips_coproc*,unsigned int) ;
 int FUNC_20 (struct mips_coproc*,unsigned int) ;
 int FUNC_21 (struct mips_coproc*,unsigned int) ;
 int FUNC_22 (struct mips_coproc*,unsigned int) ;
 int FUNC_23 (struct mips_coproc*,unsigned int) ;
 int FUNC_24 (struct mips_coproc*,unsigned int) ;
 int FUNC_25 (struct mips_coproc*,unsigned int) ;
 int FUNC_26 (struct mips_coproc*,unsigned int) ;
 int FUNC_27 (struct mips_coproc*,unsigned int) ;
 int FUNC_28 (struct mips_coproc*,unsigned int) ;
 int FUNC_29 (struct mips_coproc*,unsigned int) ;
 int FUNC_30 (struct mips_coproc*,unsigned int) ;
 int FUNC_31 (struct mips_coproc*,unsigned int) ;
 int FUNC_32 (struct mips_coproc*,unsigned int) ;
 int FUNC_33 (struct mips_coproc*,unsigned int) ;
 int FUNC_34 (struct mips_coproc*,unsigned int) ;
 int FUNC_35 (struct mips_coproc*,unsigned int) ;
 int FUNC_36 (struct mips_coproc*,unsigned int) ;
 int FUNC_37 (struct mips_coproc*,unsigned int) ;
 int FUNC_38 (struct mips_coproc*,unsigned int) ;
 int FUNC_39 (struct mips_coproc*,unsigned int) ;
 int FUNC_40 (struct mips_coproc*,unsigned int) ;
 int FUNC_41 (struct mips_coproc*,unsigned int) ;
 int FUNC_42 (struct mips_coproc*,unsigned int) ;

__attribute__((used)) static int FUNC_43(struct kvm_vcpu *VAR_3,
         const struct kvm_one_reg *VAR_4,
         s64 VAR_5)
{
 struct mips_coproc *VAR_6 = VAR_3->arch.cop0;
 int VAR_7 = 0;
 unsigned int VAR_8, VAR_9;

 switch (VAR_4->id) {
 case 140:
  FUNC_31(VAR_6, VAR_5);
  break;
 case 145:
  FUNC_26(VAR_6, VAR_5);
  break;
 case 144:
  FUNC_27(VAR_6, VAR_5);
  break;
 case 149:
  FUNC_24(VAR_6, VAR_5);
  break;
 case 129:
  FUNC_41(VAR_6, VAR_5);
  break;
 case 132:
  FUNC_38(VAR_6, VAR_5);
  break;
 case 128:
  FUNC_42(VAR_6, VAR_5);
  break;
 case 141:
  FUNC_30(VAR_6, VAR_5);
  break;
 case 159:
  FUNC_18(VAR_6, VAR_5);
  break;
 case 146:
  FUNC_25(VAR_6, VAR_5);
  break;
 case 130:
  FUNC_40(VAR_6, VAR_5);
  break;
 case 139:

  break;
 case 143:
  FUNC_28(VAR_6, VAR_5);
  break;
 case 131:
  FUNC_39(VAR_6, VAR_5);
  break;
 case 147:




  FUNC_1(VAR_6, 0x1ffff000 | VAR_2,
       VAR_5);
  break;
 case 148:
  FUNC_12(VAR_3, VAR_5);
  break;
 case 157:
  FUNC_11(VAR_3, VAR_5, 0);
  break;
 case 158:





  if ((FUNC_13(VAR_6) ^ VAR_5) & VAR_0) {
   if (VAR_5 & VAR_0) {

    FUNC_6(VAR_3);
    FUNC_0(VAR_6, (u32)~VAR_0,
         VAR_5);
   } else {

    FUNC_0(VAR_6, (u32)~VAR_0,
         VAR_5);
    FUNC_7(VAR_3);
   }
  } else {
   FUNC_19(VAR_6, VAR_5);
  }
  break;
 case 156:

  break;
 case 155:
  VAR_8 = FUNC_14(VAR_6);
  VAR_9 = (VAR_8 ^ VAR_5) & FUNC_2(VAR_3);
  if (VAR_9) {
   VAR_5 = VAR_8 ^ VAR_9;
   FUNC_20(VAR_6, VAR_5);
  }
  break;
 case 154:

  break;
 case 153:
  VAR_8 = FUNC_15(VAR_6);
  VAR_9 = (VAR_8 ^ VAR_5) & FUNC_3(VAR_3);
  if (VAR_9) {
   VAR_5 = VAR_8 ^ VAR_9;
   FUNC_21(VAR_6, VAR_5);
  }
  break;
 case 152:
  VAR_8 = FUNC_16(VAR_6);
  VAR_9 = (VAR_8 ^ VAR_5) & FUNC_4(VAR_3);
  if (VAR_9) {
   VAR_5 = VAR_8 ^ VAR_9;
   FUNC_22(VAR_6, VAR_5);
  }
  break;
 case 151:
  VAR_8 = FUNC_17(VAR_6);
  VAR_9 = (VAR_8 ^ VAR_5) & FUNC_5(VAR_3);
  if (VAR_9) {
   VAR_5 = VAR_8 ^ VAR_9;
   FUNC_23(VAR_6, VAR_5);
  }
  break;
 case 150:

  break;
 case 162:
  VAR_7 = FUNC_8(VAR_3, VAR_5);
  break;
 case 160:
  VAR_7 = FUNC_10(VAR_3, VAR_5);
  break;
 case 161:
  VAR_7 = FUNC_9(VAR_3, VAR_5);
  break;
 case 142:
  FUNC_29(VAR_6, VAR_5);
  break;
 case 138:
  FUNC_32(VAR_6, VAR_5);
  break;
 case 137:
  FUNC_33(VAR_6, VAR_5);
  break;
 case 136:
  FUNC_34(VAR_6, VAR_5);
  break;
 case 135:
  FUNC_35(VAR_6, VAR_5);
  break;
 case 134:
  FUNC_36(VAR_6, VAR_5);
  break;
 case 133:
  FUNC_37(VAR_6, VAR_5);
  break;
 default:
  return -VAR_1;
 }
 return VAR_7;
}
