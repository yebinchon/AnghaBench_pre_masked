
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct kvm_book3e_206_tlb_entry {int dummy; } ;


 unsigned int FUNC_0 (struct kvm_book3e_206_tlb_entry const*) ;

__attribute__((used)) static inline u64 FUNC_1(const struct kvm_book3e_206_tlb_entry *VAR_0)
{
 unsigned int VAR_1 = FUNC_0(VAR_0);
 return 1ULL << 10 << VAR_1;
}
