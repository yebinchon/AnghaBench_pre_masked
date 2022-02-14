
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mmu_page_header_cache; int mmu_page_cache; int mmu_pte_list_desc_cache; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_2)
{
 FUNC_0(&VAR_2->arch.mmu_pte_list_desc_cache,
    VAR_1);
 FUNC_1(&VAR_2->arch.mmu_page_cache);
 FUNC_0(&VAR_2->arch.mmu_page_header_cache,
    VAR_0);
}
