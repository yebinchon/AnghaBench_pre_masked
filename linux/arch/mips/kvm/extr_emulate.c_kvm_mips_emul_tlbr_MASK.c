
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mips_coproc {int dummy; } ;
struct TYPE_2__ {unsigned long pc; struct kvm_mips_tlb* guest_tlb; struct mips_coproc* cop0; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_mips_tlb {int tlb_hi; int * tlb_lo; int tlb_mask; } ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned long,int) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct mips_coproc*) ;
 int FUNC_3 (struct mips_coproc*,int ) ;
 int FUNC_4 (struct mips_coproc*,int ) ;
 int FUNC_5 (struct mips_coproc*,int ) ;

enum emulation_result FUNC_6(struct kvm_vcpu *VAR_2)
{
 struct mips_coproc *VAR_3 = VAR_2->arch.cop0;
 struct kvm_mips_tlb *VAR_4;
 unsigned long VAR_5 = VAR_2->arch.pc;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6 < 0 || VAR_6 >= VAR_1) {

  FUNC_0("[%#lx] TLBR Index %#x out of range\n", VAR_5, VAR_6);
  VAR_6 &= VAR_1 - 1;
 }

 VAR_4 = &VAR_2->arch.guest_tlb[VAR_6];
 FUNC_5(VAR_3, VAR_4->tlb_mask);
 FUNC_3(VAR_3, VAR_4->tlb_lo[0]);
 FUNC_4(VAR_3, VAR_4->tlb_lo[1]);
 FUNC_1(VAR_2, VAR_4->tlb_hi);

 return VAR_0;
}
