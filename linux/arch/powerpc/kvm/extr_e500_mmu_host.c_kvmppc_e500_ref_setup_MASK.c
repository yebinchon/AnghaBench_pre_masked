
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlbe_ref {unsigned int flags; int pfn; } ;
struct kvm_book3e_206_tlb_entry {unsigned int mas2; } ;
typedef int kvm_pfn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct kvm_book3e_206_tlb_entry*) ;

__attribute__((used)) static inline void FUNC_3(struct tlbe_ref *VAR_2,
      struct kvm_book3e_206_tlb_entry *VAR_3,
      kvm_pfn_t VAR_4, unsigned int VAR_5)
{
 VAR_2->pfn = VAR_4;
 VAR_2->flags = VAR_0;


 VAR_2->flags |= (VAR_3->mas2 & VAR_1) | VAR_5;


 FUNC_0(VAR_4);

 if (FUNC_2(VAR_3))
  FUNC_1(VAR_4);
}
