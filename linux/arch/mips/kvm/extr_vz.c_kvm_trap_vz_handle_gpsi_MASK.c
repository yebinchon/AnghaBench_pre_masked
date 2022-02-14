
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int opcode; int re; int rd; int rt; int rs; } ;
struct TYPE_3__ {int func; } ;
union mips_instruction {int word; TYPE_2__ r_format; TYPE_1__ spec3_format; } ;
typedef int u32 ;
struct kvm_vcpu_arch {long* gprs; } ;
struct kvm_vcpu {struct kvm_run* run; struct kvm_vcpu_arch arch; } ;
struct kvm_run {int dummy; } ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int VAR_4 ;




 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (char*,int*,int ) ;
 int FUNC_3 (int*,struct kvm_vcpu*,int *) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (union mips_instruction,int*,int,struct kvm_run*,struct kvm_vcpu*) ;
 int FUNC_6 (union mips_instruction,int*,int,struct kvm_run*,struct kvm_vcpu*) ;


 int FUNC_7 (struct kvm_vcpu*,int ) ;
 int FUNC_8 (struct kvm_vcpu*,int ,int ,long) ;
 int FUNC_9 (struct kvm_vcpu*,int) ;

__attribute__((used)) static enum emulation_result FUNC_10(u32 VAR_5, u32 *VAR_6,
           struct kvm_vcpu *VAR_7)
{
 enum emulation_result VAR_8 = VAR_1;
 struct kvm_vcpu_arch *VAR_9 = &VAR_7->arch;
 struct kvm_run *VAR_10 = VAR_7->run;
 union mips_instruction VAR_11;
 int VAR_12, VAR_13, VAR_14;
 int VAR_15;




 if (VAR_5 & VAR_0)
  VAR_6 += 1;
 VAR_15 = FUNC_3(VAR_6, VAR_7, &VAR_11.word);
 if (VAR_15)
  return VAR_2;

 switch (VAR_11.r_format.opcode) {
 case 130:
  VAR_8 = FUNC_6(VAR_11, VAR_6, VAR_5, VAR_10, VAR_7);
  break;

 case 131:
  FUNC_7(VAR_7, VAR_3);
  VAR_8 = FUNC_5(VAR_11, VAR_6, VAR_5, VAR_10, VAR_7);
  break;

 case 128:
  switch (VAR_11.spec3_format.func) {






  case 129:
   if (VAR_11.r_format.rs || (VAR_11.r_format.re >> 3))
    goto unknown;

   VAR_12 = VAR_11.r_format.rd;
   VAR_13 = VAR_11.r_format.rt;
   VAR_14 = VAR_11.r_format.re & 0x7;

   switch (VAR_12) {
   case 133:
    VAR_9->gprs[VAR_13] =
     (long)(int)FUNC_4(VAR_7);
    break;
   default:
    FUNC_8(VAR_7, VAR_4,
           FUNC_0(VAR_12, VAR_14), 0);
    goto unknown;
   };

   FUNC_8(VAR_7, VAR_4,
          FUNC_0(VAR_12, VAR_14), VAR_9->gprs[VAR_13]);

   VAR_8 = FUNC_9(VAR_7, VAR_5);
   break;
  default:
   goto unknown;
  };
  break;
unknown:

 default:
  FUNC_2("GPSI exception not supported (%p/%#x)\n",
    VAR_6, VAR_11.word);
  FUNC_1(VAR_7);
  VAR_8 = VAR_2;
  break;
 }

 return VAR_8;
}
