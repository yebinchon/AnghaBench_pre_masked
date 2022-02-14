
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mips_coproc {int dummy; } ;
struct kvm_vcpu_arch {unsigned long host_cp0_badvaddr; void* pc; struct mips_coproc* cop0; } ;
struct kvm_vcpu {struct kvm_vcpu_arch arch; } ;
struct kvm_run {int dummy; } ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (struct mips_coproc*,int,int) ;
 int FUNC_1 (struct mips_coproc*,int) ;
 int FUNC_2 (char*,void*) ;
 void* FUNC_3 (struct kvm_vcpu*) ;
 unsigned long FUNC_4 (struct mips_coproc*) ;
 int FUNC_5 (struct mips_coproc*) ;
 int FUNC_6 (struct mips_coproc*,int) ;
 int FUNC_7 (struct mips_coproc*,int) ;
 int FUNC_8 (struct mips_coproc*,unsigned long) ;
 int FUNC_9 (struct mips_coproc*,unsigned long) ;
 int FUNC_10 (struct mips_coproc*,void*) ;

enum emulation_result FUNC_11(u32 VAR_7,
        u32 *VAR_8,
        struct kvm_run *VAR_9,
        struct kvm_vcpu *VAR_10)
{
 struct mips_coproc *VAR_11 = VAR_10->arch.cop0;
 struct kvm_vcpu_arch *VAR_12 = &VAR_10->arch;
 unsigned long VAR_13 = (VAR_10->arch.host_cp0_badvaddr & VAR_6) |
   (FUNC_4(VAR_11) & VAR_4);

 if ((FUNC_5(VAR_11) & VAR_5) == 0) {

  FUNC_10(VAR_11, VAR_12->pc);
  FUNC_7(VAR_11, VAR_5);

  if (VAR_7 & VAR_1)
   FUNC_6(VAR_11, VAR_1);
  else
   FUNC_1(VAR_11, VAR_1);

  FUNC_2("[EXL == 0] Delivering TLB MISS @ pc %#lx\n",
     VAR_12->pc);


  VAR_12->pc = FUNC_3(VAR_10) + 0x0;
 } else {
  FUNC_2("[EXL == 1] Delivering TLB MISS @ pc %#lx\n",
     VAR_12->pc);
  VAR_12->pc = FUNC_3(VAR_10) + 0x180;
 }

 FUNC_0(VAR_11, (0xff),
      (VAR_3 << VAR_0));


 FUNC_8(VAR_11, VAR_10->arch.host_cp0_badvaddr);

 FUNC_9(VAR_11, VAR_13);

 return VAR_2;
}
