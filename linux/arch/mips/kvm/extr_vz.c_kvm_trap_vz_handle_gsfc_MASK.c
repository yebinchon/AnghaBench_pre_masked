
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ opcode; scalar_t__ rs; scalar_t__ z; int rt; int rd; int sel; } ;
union mips_instruction {int word; TYPE_1__ c0r_format; } ;
typedef int u32 ;
struct kvm_vcpu_arch {unsigned int* gprs; int aux_inuse; } ;
struct kvm_vcpu {struct kvm_vcpu_arch arch; } ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;
struct TYPE_4__ {int fpu_id; } ;


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
 int FUNC_0 (int,int) ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 TYPE_2__ VAR_18 ;
 int FUNC_1 (unsigned int,unsigned int) ;
 scalar_t__ VAR_19 ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (char*,int*,int ) ;
 int FUNC_4 (int*,struct kvm_vcpu*,int *) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu_arch*) ;
 unsigned int FUNC_9 (struct kvm_vcpu*) ;
 int FUNC_10 (struct kvm_vcpu*) ;
 scalar_t__ VAR_20 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 unsigned int FUNC_14 () ;
 unsigned int FUNC_15 () ;
 int FUNC_16 (struct kvm_vcpu*,int ,int ,unsigned int) ;
 int FUNC_17 (struct kvm_vcpu*,int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (unsigned int) ;
 int FUNC_20 (unsigned int) ;
 int FUNC_21 (unsigned int) ;

__attribute__((used)) static enum emulation_result FUNC_22(u32 VAR_21, u32 *VAR_22,
           struct kvm_vcpu *VAR_23)
{
 enum emulation_result VAR_24 = VAR_6;
 struct kvm_vcpu_arch *VAR_25 = &VAR_23->arch;
 union mips_instruction VAR_26;
 int VAR_27;




 if (VAR_21 & VAR_0)
  VAR_22 += 1;
 VAR_27 = FUNC_4(VAR_22, VAR_23, &VAR_26.word);
 if (VAR_27)
  return VAR_7;


 if (VAR_26.c0r_format.opcode == VAR_19 &&
     VAR_26.c0r_format.rs == VAR_20 &&
     VAR_26.c0r_format.z == 0) {
  int VAR_28 = VAR_26.c0r_format.rt;
  int VAR_29 = VAR_26.c0r_format.rd;
  int VAR_30 = VAR_26.c0r_format.sel;
  unsigned int VAR_31 = VAR_25->gprs[VAR_28];
  unsigned int VAR_32, VAR_33;

  FUNC_16(VAR_23, VAR_10, FUNC_0(VAR_29, VAR_30),
         VAR_31);

  if ((VAR_29 == VAR_14) && (VAR_30 == 0)) {

   if (!FUNC_8(&VAR_23->arch))
    VAR_31 &= ~(VAR_16 | VAR_17);





   if (!(VAR_18.fpu_id & VAR_15))
    VAR_31 &= ~VAR_17;

   VAR_32 = FUNC_15();
   VAR_33 = VAR_31 ^ VAR_32;

   if (VAR_33 & VAR_17) {





    FUNC_2(VAR_23);
   }
   if (VAR_33 & VAR_16 && !(VAR_31 & VAR_17) &&
       VAR_23->arch.aux_inuse & VAR_9)
    FUNC_5(VAR_23);

   FUNC_21(VAR_31);
  } else if ((VAR_29 == VAR_12) && (VAR_30 == 0)) {
   u32 VAR_34 = FUNC_13();
   u32 VAR_35 = VAR_34 ^ VAR_31;


   if (VAR_35 & VAR_1) {
    if (VAR_31 & VAR_1) {
     FUNC_10(VAR_23);
     FUNC_6(VAR_23);
    } else {
     FUNC_7(VAR_23);
    }
   }


   VAR_35 &= (VAR_1 | VAR_4 | VAR_5 |
       VAR_2 | VAR_3);


   VAR_35 &= ~VAR_5 | VAR_34;

   FUNC_18(VAR_34 ^ VAR_35);
  } else if ((VAR_29 == VAR_14) && (VAR_30 == 1)) {
   FUNC_20(VAR_31);
  } else if ((VAR_29 == VAR_13) && (VAR_30 == 5)) {
   VAR_32 = FUNC_14();
   VAR_33 = VAR_31 ^ VAR_32;

   FUNC_11();





   if (VAR_33 & VAR_11 &&
       VAR_23->arch.aux_inuse & VAR_8)
    FUNC_1(VAR_11, VAR_31);

   FUNC_12();

   VAR_31 = VAR_32 ^
    (VAR_33 & FUNC_9(VAR_23));
   FUNC_19(VAR_31);
  } else {
   FUNC_3("Handle GSFC, unsupported field change @ %p: %#x\n",
       VAR_22, VAR_26.word);
   VAR_24 = VAR_7;
  }

  if (VAR_24 != VAR_7)
   VAR_24 = FUNC_17(VAR_23, VAR_21);
 } else {
  FUNC_3("Handle GSFC, unrecognized instruction @ %p: %#x\n",
   VAR_22, VAR_26.word);
  VAR_24 = VAR_7;
 }

 return VAR_24;
}
