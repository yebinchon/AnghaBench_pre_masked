
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mips_coproc {int dummy; } ;
struct kvm_vcpu_arch {int host_cp0_badvaddr; scalar_t__ pc; struct mips_coproc* cop0; } ;
struct kvm_vcpu {struct kvm_vcpu_arch arch; } ;
struct kvm_run {int dummy; } ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mips_coproc*,int,int) ;
 int FUNC_1 (struct mips_coproc*,int) ;
 int FUNC_2 (char*,int,int ,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct mips_coproc*) ;
 int FUNC_6 (struct mips_coproc*) ;
 int FUNC_7 (struct mips_coproc*) ;
 int FUNC_8 (struct mips_coproc*,int) ;
 int FUNC_9 (struct mips_coproc*,int) ;
 int FUNC_10 (struct mips_coproc*,int ) ;
 int FUNC_11 (struct mips_coproc*,scalar_t__) ;

__attribute__((used)) static enum emulation_result FUNC_12(u32 VAR_5,
        u32 *VAR_6,
        struct kvm_run *VAR_7,
        struct kvm_vcpu *VAR_8)
{
 u32 VAR_9 = (VAR_5 >> VAR_0) & 0x1f;
 struct mips_coproc *VAR_10 = VAR_8->arch.cop0;
 struct kvm_vcpu_arch *VAR_11 = &VAR_8->arch;
 enum emulation_result VAR_12 = VAR_2;

 if ((FUNC_7(VAR_10) & VAR_4) == 0) {

  FUNC_11(VAR_10, VAR_11->pc);
  FUNC_9(VAR_10, VAR_4);

  if (VAR_5 & VAR_1)
   FUNC_8(VAR_10, VAR_1);
  else
   FUNC_1(VAR_10, VAR_1);

  FUNC_0(VAR_10, (0xff),
       (VAR_9 << VAR_0));


  VAR_11->pc = FUNC_4(VAR_8) + 0x180;
  FUNC_10(VAR_10, VAR_8->arch.host_cp0_badvaddr);

  FUNC_2("Delivering EXC %d @ pc %#lx, badVaddr: %#lx\n",
     VAR_9, FUNC_6(VAR_10),
     FUNC_5(VAR_10));
 } else {
  FUNC_3("Trying to deliver EXC when EXL is already set\n");
  VAR_12 = VAR_3;
 }

 return VAR_12;
}
