
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct kvm_book3e_206_tlb_entry {int dummy; } ;
typedef scalar_t__ gva_t ;


 scalar_t__ FUNC_0 (struct kvm_book3e_206_tlb_entry const*) ;
 scalar_t__ FUNC_1 (struct kvm_book3e_206_tlb_entry const*) ;

__attribute__((used)) static inline gva_t FUNC_2(const struct kvm_book3e_206_tlb_entry *VAR_0)
{
 u64 VAR_1 = FUNC_0(VAR_0);
 return FUNC_1(VAR_0) + VAR_1 - 1;
}
