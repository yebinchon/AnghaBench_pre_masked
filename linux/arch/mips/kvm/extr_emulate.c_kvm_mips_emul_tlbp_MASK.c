
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mips_coproc {int dummy; } ;
struct TYPE_2__ {unsigned long pc; struct mips_coproc* cop0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned long,long,int) ;
 int FUNC_1 (struct kvm_vcpu*,long) ;
 long FUNC_2 (struct mips_coproc*) ;
 int FUNC_3 (struct mips_coproc*,int) ;

enum emulation_result FUNC_4(struct kvm_vcpu *VAR_1)
{
 struct mips_coproc *VAR_2 = VAR_1->arch.cop0;
 long VAR_3 = FUNC_2(VAR_2);
 unsigned long VAR_4 = VAR_1->arch.pc;
 int VAR_5 = -1;

 VAR_5 = FUNC_1(VAR_1, VAR_3);

 FUNC_3(VAR_2, VAR_5);

 FUNC_0("[%#lx] COP0_TLBP (entryhi: %#lx), index: %d\n", VAR_4, VAR_3,
    VAR_5);

 return VAR_0;
}
