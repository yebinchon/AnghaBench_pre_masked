
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_book3e_206_tlb_entry {unsigned int mas1; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static inline unsigned int
FUNC_0(const struct kvm_book3e_206_tlb_entry *VAR_2)
{
 return (VAR_2->mas1 & VAR_0) >> VAR_1;
}
