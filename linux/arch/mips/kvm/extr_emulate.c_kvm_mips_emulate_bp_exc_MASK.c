
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mips_coproc {int dummy; } ;
struct kvm_vcpu_arch {scalar_t__ pc; struct mips_coproc* cop0; } ;
struct kvm_vcpu {struct kvm_vcpu_arch arch; } ;
struct kvm_run {int dummy; } ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mips_coproc*,int,int) ;
 int FUNC_1 (struct mips_coproc*,int) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct mips_coproc*) ;
 int FUNC_6 (struct mips_coproc*,int) ;
 int FUNC_7 (struct mips_coproc*,int) ;
 int FUNC_8 (struct mips_coproc*,scalar_t__) ;

enum emulation_result FUNC_9(u32 VAR_6,
           u32 *VAR_7,
           struct kvm_run *VAR_8,
           struct kvm_vcpu *VAR_9)
{
 struct mips_coproc *VAR_10 = VAR_9->arch.cop0;
 struct kvm_vcpu_arch *VAR_11 = &VAR_9->arch;
 enum emulation_result VAR_12 = VAR_2;

 if ((FUNC_5(VAR_10) & VAR_5) == 0) {

  FUNC_8(VAR_10, VAR_11->pc);
  FUNC_7(VAR_10, VAR_5);

  if (VAR_6 & VAR_1)
   FUNC_6(VAR_10, VAR_1);
  else
   FUNC_1(VAR_10, VAR_1);

  FUNC_2("Delivering BP @ pc %#lx\n", VAR_11->pc);

  FUNC_0(VAR_10, (0xff),
       (VAR_4 << VAR_0));


  VAR_11->pc = FUNC_4(VAR_9) + 0x180;

 } else {
  FUNC_3("Trying to deliver BP when EXL is already set\n");
  VAR_12 = VAR_3;
 }

 return VAR_12;
}
