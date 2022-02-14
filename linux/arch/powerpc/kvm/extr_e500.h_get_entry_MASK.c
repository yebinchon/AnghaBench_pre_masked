
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvmppc_vcpu_e500 {int* gtlb_offset; struct kvm_book3e_206_tlb_entry* gtlb_arch; } ;
struct kvm_book3e_206_tlb_entry {int dummy; } ;



__attribute__((used)) static inline struct kvm_book3e_206_tlb_entry *FUNC_0(
 struct kvmppc_vcpu_e500 *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = VAR_0->gtlb_offset[VAR_1];
 return &VAR_0->gtlb_arch[VAR_3 + VAR_2];
}
