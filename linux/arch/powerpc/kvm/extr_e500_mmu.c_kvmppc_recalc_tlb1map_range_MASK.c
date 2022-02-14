
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmppc_vcpu_e500 {unsigned long tlb1_min_eaddr; unsigned int* gtlb_offset; int tlb1_max_eaddr; struct kvm_book3e_206_tlb_entry* gtlb_arch; TYPE_1__* gtlb_params; } ;
struct kvm_book3e_206_tlb_entry {int dummy; } ;
typedef int gva_t ;
struct TYPE_2__ {int entries; } ;


 int FUNC_0 (struct kvm_book3e_206_tlb_entry*) ;
 int FUNC_1 (struct kvm_book3e_206_tlb_entry*) ;
 int FUNC_2 (struct kvm_book3e_206_tlb_entry*) ;
 int FUNC_3 (int ,int ) ;
 unsigned long FUNC_4 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_5(struct kvmppc_vcpu_e500 *VAR_0)
{
 int VAR_1 = VAR_0->gtlb_params[1].entries;
 unsigned int VAR_2;
 gva_t VAR_3;
 int VAR_4;

 VAR_0->tlb1_min_eaddr = ~0UL;
 VAR_0->tlb1_max_eaddr = 0;
 VAR_2 = VAR_0->gtlb_offset[1];

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  struct kvm_book3e_206_tlb_entry *VAR_5 =
   &VAR_0->gtlb_arch[VAR_2 + VAR_4];

  if (!FUNC_2(VAR_5))
   continue;

  VAR_3 = FUNC_0(VAR_5);
  VAR_0->tlb1_min_eaddr =
    FUNC_4(VAR_0->tlb1_min_eaddr, VAR_3);

  VAR_3 = FUNC_1(VAR_5);
  VAR_0->tlb1_max_eaddr =
    FUNC_3(VAR_0->tlb1_max_eaddr, VAR_3);
 }
}
