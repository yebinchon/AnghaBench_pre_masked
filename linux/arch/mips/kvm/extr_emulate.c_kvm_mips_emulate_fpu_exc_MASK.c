
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
 int VAR_6 ;
 int FUNC_0 (struct mips_coproc*,int,int) ;
 int FUNC_1 (struct mips_coproc*,int) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct mips_coproc*) ;
 int FUNC_4 (struct mips_coproc*,int) ;
 int FUNC_5 (struct mips_coproc*,int) ;
 int FUNC_6 (struct mips_coproc*,scalar_t__) ;

enum emulation_result FUNC_7(u32 VAR_7,
            u32 *VAR_8,
            struct kvm_run *VAR_9,
            struct kvm_vcpu *VAR_10)
{
 struct mips_coproc *VAR_11 = VAR_10->arch.cop0;
 struct kvm_vcpu_arch *VAR_12 = &VAR_10->arch;

 if ((FUNC_3(VAR_11) & VAR_6) == 0) {

  FUNC_6(VAR_11, VAR_12->pc);
  FUNC_5(VAR_11, VAR_6);

  if (VAR_7 & VAR_2)
   FUNC_4(VAR_11, VAR_2);
  else
   FUNC_1(VAR_11, VAR_2);

 }

 VAR_12->pc = FUNC_2(VAR_10) + 0x180;

 FUNC_0(VAR_11, (0xff),
      (VAR_5 << VAR_1));
 FUNC_0(VAR_11, (VAR_3), (0x1 << VAR_0));

 return VAR_4;
}
