
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mips_coproc {int dummy; } ;
struct kvm_vcpu_arch {int pc; int pending_exceptions; struct mips_coproc* cop0; } ;
struct kvm_vcpu {struct kvm_vcpu_arch arch; } ;


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
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (struct mips_coproc*,int ,int) ;
 int FUNC_2 (struct mips_coproc*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct mips_coproc*) ;
 int FUNC_7 (struct mips_coproc*) ;
 int FUNC_8 (struct mips_coproc*,int) ;
 int FUNC_9 (struct mips_coproc*,int) ;
 int FUNC_10 (struct mips_coproc*,int) ;

int FUNC_11(struct kvm_vcpu *VAR_12, unsigned int VAR_13,
       u32 VAR_14)
{
 int VAR_15 = 0;
 u32 VAR_16;

 struct kvm_vcpu_arch *VAR_17 = &VAR_12->arch;
 struct mips_coproc *VAR_18 = VAR_12->arch.cop0;

 switch (VAR_13) {
 case 128:
  if ((FUNC_7(VAR_18) & VAR_11)
      && (!(FUNC_7(VAR_18) & (VAR_10 | VAR_9)))
      && (FUNC_7(VAR_18) & VAR_8)) {
   VAR_15 = 1;
   VAR_16 = VAR_4;
  }
  break;

 case 131:
  if ((FUNC_7(VAR_18) & VAR_11)
      && (!(FUNC_7(VAR_18) & (VAR_10 | VAR_9)))
      && (FUNC_7(VAR_18) & VAR_5)) {
   VAR_15 = 1;
   VAR_16 = VAR_4;
  }
  break;

 case 130:
  if ((FUNC_7(VAR_18) & VAR_11)
      && (!(FUNC_7(VAR_18) & (VAR_10 | VAR_9)))
      && (FUNC_7(VAR_18) & VAR_6)) {
   VAR_15 = 1;
   VAR_16 = VAR_4;
  }
  break;

 case 129:
  if ((FUNC_7(VAR_18) & VAR_11)
      && (!(FUNC_7(VAR_18) & (VAR_10 | VAR_9)))
      && (FUNC_7(VAR_18) & VAR_7)) {
   VAR_15 = 1;
   VAR_16 = VAR_4;
  }
  break;

 default:
  break;
 }


 if (VAR_15) {
  if ((FUNC_7(VAR_18) & VAR_10) == 0) {

   FUNC_10(VAR_18, VAR_17->pc);
   FUNC_9(VAR_18, VAR_10);

   if (VAR_14 & VAR_1)
    FUNC_8(VAR_18, VAR_1);
   else
    FUNC_2(VAR_18, VAR_1);

   FUNC_3("Delivering INT @ pc %#lx\n", VAR_17->pc);

  } else
   FUNC_4("Trying to deliver interrupt when EXL is already set\n");

  FUNC_1(VAR_18, VAR_2,
       (VAR_16 << VAR_0));


  VAR_17->pc = FUNC_5(VAR_12);
  if (FUNC_6(VAR_18) & VAR_3)
   VAR_17->pc += 0x200;
  else
   VAR_17->pc += 0x180;

  FUNC_0(VAR_13, &VAR_12->arch.pending_exceptions);
 }

 return VAR_15;
}
