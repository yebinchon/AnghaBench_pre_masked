
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mmu_page_cache; int mmu_page_header_cache; } ;
struct kvm_vcpu {TYPE_3__* kvm; TYPE_1__ arch; } ;
struct kvm_mmu_page {int link; int mmu_valid_gen; void* spt; void* gfns; } ;
struct TYPE_5__ {int active_mmu_pages; int mmu_valid_gen; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int *,int *) ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static struct kvm_mmu_page *FUNC_5(struct kvm_vcpu *VAR_0, int VAR_1)
{
 struct kvm_mmu_page *VAR_2;

 VAR_2 = FUNC_2(&VAR_0->arch.mmu_page_header_cache);
 VAR_2->spt = FUNC_2(&VAR_0->arch.mmu_page_cache);
 if (!VAR_1)
  VAR_2->gfns = FUNC_2(&VAR_0->arch.mmu_page_cache);
 FUNC_3(FUNC_4(VAR_2->spt), (unsigned long)VAR_2);






 VAR_2->mmu_valid_gen = VAR_0->kvm->arch.mmu_valid_gen;
 FUNC_1(&VAR_2->link, &VAR_0->kvm->arch.active_mmu_pages);
 FUNC_0(VAR_0->kvm, +1);
 return VAR_2;
}
