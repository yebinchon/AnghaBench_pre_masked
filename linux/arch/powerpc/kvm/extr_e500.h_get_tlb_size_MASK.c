
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_book3e_206_tlb_entry {int mas1; } ;



__attribute__((used)) static inline unsigned int
FUNC_0(const struct kvm_book3e_206_tlb_entry *VAR_0)
{
 return (VAR_0->mas1 >> 7) & 0x1f;
}
