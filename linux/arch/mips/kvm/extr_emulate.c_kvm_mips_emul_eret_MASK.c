
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mips_coproc {int dummy; } ;
struct TYPE_2__ {int pc; struct mips_coproc* cop0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mips_coproc*,int) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct mips_coproc*) ;
 int FUNC_4 (struct mips_coproc*) ;
 int FUNC_5 (struct mips_coproc*) ;

enum emulation_result FUNC_6(struct kvm_vcpu *VAR_4)
{
 struct mips_coproc *VAR_5 = VAR_4->arch.cop0;
 enum emulation_result VAR_6 = VAR_0;

 if (FUNC_5(VAR_5) & VAR_2) {
  FUNC_0(VAR_5, VAR_2);
  VAR_4->arch.pc = FUNC_4(VAR_5);
 } else if (FUNC_5(VAR_5) & VAR_3) {
  FUNC_1("[%#lx] ERET to %#lx\n", VAR_4->arch.pc,
     FUNC_3(VAR_5));
  FUNC_0(VAR_5, VAR_3);
  VAR_4->arch.pc = FUNC_3(VAR_5);

 } else {
  FUNC_2("[%#lx] ERET when MIPS_SR_EXL|MIPS_SR_ERL == 0\n",
   VAR_4->arch.pc);
  VAR_6 = VAR_1;
 }

 return VAR_6;
}
