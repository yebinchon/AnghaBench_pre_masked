
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mips_coproc {int dummy; } ;
struct TYPE_2__ {long count_ctl; long count_hz; int count_resume; struct mips_coproc* cop0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_one_reg {int id; } ;
typedef long s64 ;


 int VAR_0 ;
 long FUNC_0 (int ) ;
 long FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (struct mips_coproc*) ;
 scalar_t__ FUNC_3 (struct mips_coproc*) ;
 scalar_t__ FUNC_4 (struct mips_coproc*) ;
 scalar_t__ FUNC_5 (struct mips_coproc*) ;
 scalar_t__ FUNC_6 (struct mips_coproc*) ;
 scalar_t__ FUNC_7 (struct mips_coproc*) ;
 scalar_t__ FUNC_8 (struct mips_coproc*) ;
 scalar_t__ FUNC_9 (struct mips_coproc*) ;
 scalar_t__ FUNC_10 (struct mips_coproc*) ;
 scalar_t__ FUNC_11 (struct mips_coproc*) ;
 scalar_t__ FUNC_12 (struct mips_coproc*) ;
 scalar_t__ FUNC_13 (struct mips_coproc*) ;
 scalar_t__ FUNC_14 (struct mips_coproc*) ;
 long FUNC_15 (struct mips_coproc*) ;
 long FUNC_16 (struct mips_coproc*) ;
 scalar_t__ FUNC_17 (struct mips_coproc*) ;
 scalar_t__ FUNC_18 (struct mips_coproc*) ;
 scalar_t__ FUNC_19 (struct mips_coproc*) ;
 scalar_t__ FUNC_20 (struct mips_coproc*) ;
 scalar_t__ FUNC_21 (struct mips_coproc*) ;
 scalar_t__ FUNC_22 (struct mips_coproc*) ;
 scalar_t__ FUNC_23 (struct mips_coproc*) ;
 scalar_t__ FUNC_24 (struct mips_coproc*) ;
 scalar_t__ FUNC_25 (struct mips_coproc*) ;
 scalar_t__ FUNC_26 (struct mips_coproc*) ;
 scalar_t__ FUNC_27 (struct mips_coproc*) ;
 scalar_t__ FUNC_28 (struct mips_coproc*) ;
 scalar_t__ FUNC_29 (struct mips_coproc*) ;
 scalar_t__ FUNC_30 (struct mips_coproc*) ;
 scalar_t__ FUNC_31 (struct mips_coproc*) ;
 scalar_t__ FUNC_32 (struct mips_coproc*) ;

__attribute__((used)) static int FUNC_33(struct kvm_vcpu *VAR_1,
         const struct kvm_one_reg *VAR_2,
         s64 *VAR_3)
{
 struct mips_coproc *VAR_4 = VAR_1->arch.cop0;

 switch (VAR_2->id) {
 case 140:
  *VAR_3 = (long)FUNC_20(VAR_4);
  break;
 case 145:
  *VAR_3 = FUNC_15(VAR_4);
  break;
 case 144:
  *VAR_3 = FUNC_16(VAR_4);
  break;
 case 149:
  *VAR_3 = (long)FUNC_12(VAR_4);
  break;
 case 129:
  *VAR_3 = (long)FUNC_31(VAR_4);
  break;
 case 132:
  *VAR_3 = (long)FUNC_28(VAR_4);
  break;
 case 128:
  *VAR_3 = (long)FUNC_32(VAR_4);
  break;
 case 141:
  *VAR_3 = (long)FUNC_19(VAR_4);
  break;
 case 159:
  *VAR_3 = (long)FUNC_2(VAR_4);
  break;
 case 146:
  *VAR_3 = (long)FUNC_14(VAR_4);
  break;
 case 157:
  *VAR_3 = (long)FUNC_4(VAR_4);
  break;
 case 130:
  *VAR_3 = (long)FUNC_30(VAR_4);
  break;
 case 139:
  *VAR_3 = (long)FUNC_21(VAR_4);
  break;
 case 158:
  *VAR_3 = (long)FUNC_3(VAR_4);
  break;
 case 143:
  *VAR_3 = (long)FUNC_17(VAR_4);
  break;
 case 131:
  *VAR_3 = (long)FUNC_29(VAR_4);
  break;
 case 147:
  *VAR_3 = (long)FUNC_13(VAR_4);
  break;
 case 156:
  *VAR_3 = (long)FUNC_5(VAR_4);
  break;
 case 155:
  *VAR_3 = (long)FUNC_6(VAR_4);
  break;
 case 154:
  *VAR_3 = (long)FUNC_7(VAR_4);
  break;
 case 153:
  *VAR_3 = (long)FUNC_8(VAR_4);
  break;
 case 152:
  *VAR_3 = (long)FUNC_9(VAR_4);
  break;
 case 151:
  *VAR_3 = (long)FUNC_10(VAR_4);
  break;
 case 150:
  *VAR_3 = (long)FUNC_11(VAR_4);
  break;
 case 148:
  *VAR_3 = FUNC_1(VAR_1);
  break;
 case 162:
  *VAR_3 = VAR_1->arch.count_ctl;
  break;
 case 160:
  *VAR_3 = FUNC_0(VAR_1->arch.count_resume);
  break;
 case 161:
  *VAR_3 = VAR_1->arch.count_hz;
  break;
 case 142:
  *VAR_3 = (long)FUNC_18(VAR_4);
  break;
 case 138:
  *VAR_3 = (long)FUNC_22(VAR_4);
  break;
 case 137:
  *VAR_3 = (long)FUNC_23(VAR_4);
  break;
 case 136:
  *VAR_3 = (long)FUNC_24(VAR_4);
  break;
 case 135:
  *VAR_3 = (long)FUNC_25(VAR_4);
  break;
 case 134:
  *VAR_3 = (long)FUNC_26(VAR_4);
  break;
 case 133:
  *VAR_3 = (long)FUNC_27(VAR_4);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
