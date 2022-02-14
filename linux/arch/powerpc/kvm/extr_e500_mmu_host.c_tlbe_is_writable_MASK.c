
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_book3e_206_tlb_entry {int mas7_3; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct kvm_book3e_206_tlb_entry *VAR_2)
{
 return VAR_2->mas7_3 & (VAR_0|VAR_1);
}
