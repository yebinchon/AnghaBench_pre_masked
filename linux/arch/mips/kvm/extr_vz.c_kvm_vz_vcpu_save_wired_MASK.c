
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int wired_tlb_limit; int wired_tlb_used; struct kvm_mips_tlb* wired_tlb; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_mips_tlb {scalar_t__ tlb_mask; scalar_t__* tlb_lo; int tlb_hi; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 struct kvm_mips_tlb* FUNC_2 (struct kvm_mips_tlb*,unsigned int,int ) ;
 int FUNC_3 (struct kvm_mips_tlb*,int ,unsigned int) ;
 unsigned int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_2)
{
 unsigned int VAR_3 = FUNC_4();
 struct kvm_mips_tlb *VAR_4;
 int VAR_5;


 VAR_3 &= VAR_1;
 if (VAR_3 > VAR_2->arch.wired_tlb_limit) {
  VAR_4 = FUNC_2(VAR_2->arch.wired_tlb, VAR_3 *
    sizeof(*VAR_2->arch.wired_tlb), VAR_0);
  if (FUNC_1(!VAR_4)) {

   VAR_3 = VAR_2->arch.wired_tlb_limit;
  } else {
   VAR_2->arch.wired_tlb = VAR_4;
   VAR_2->arch.wired_tlb_limit = VAR_3;
  }
 }

 if (VAR_3)

  FUNC_3(VAR_2->arch.wired_tlb, 0, VAR_3);

 for (VAR_5 = VAR_3; VAR_5 < VAR_2->arch.wired_tlb_used; ++VAR_5) {
  VAR_2->arch.wired_tlb[VAR_5].tlb_hi = FUNC_0(VAR_5);
  VAR_2->arch.wired_tlb[VAR_5].tlb_lo[0] = 0;
  VAR_2->arch.wired_tlb[VAR_5].tlb_lo[1] = 0;
  VAR_2->arch.wired_tlb[VAR_5].tlb_mask = 0;
 }
 VAR_2->arch.wired_tlb_used = VAR_3;
}
