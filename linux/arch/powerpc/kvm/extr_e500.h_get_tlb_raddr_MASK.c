
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_book3e_206_tlb_entry {int mas7_3; } ;



__attribute__((used)) static inline u64 FUNC_0(const struct kvm_book3e_206_tlb_entry *VAR_0)
{
 return VAR_0->mas7_3 & ~0xfffULL;
}
