
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* tlbcfg; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_book3e_206_tlb_params {int* tlb_sizes; int* tlb_ways; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct kvm_vcpu *VAR_3,
  struct kvm_book3e_206_tlb_params *VAR_4)
{
 VAR_3->arch.tlbcfg[0] &= ~(VAR_2 | VAR_0);
 if (VAR_4->tlb_sizes[0] <= 2048)
  VAR_3->arch.tlbcfg[0] |= VAR_4->tlb_sizes[0];
 VAR_3->arch.tlbcfg[0] |= VAR_4->tlb_ways[0] << VAR_1;

 VAR_3->arch.tlbcfg[1] &= ~(VAR_2 | VAR_0);
 VAR_3->arch.tlbcfg[1] |= VAR_4->tlb_sizes[1];
 VAR_3->arch.tlbcfg[1] |= VAR_4->tlb_ways[1] << VAR_1;
 return 0;
}
