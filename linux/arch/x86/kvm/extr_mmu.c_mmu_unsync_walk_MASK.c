
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_mmu_pages {scalar_t__ nr; } ;
struct kvm_mmu_page {int unsync_children; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_mmu_page*,struct kvm_mmu_pages*) ;
 int FUNC_1 (struct kvm_mmu_pages*,struct kvm_mmu_page*,int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_mmu_page *VAR_1,
      struct kvm_mmu_pages *VAR_2)
{
 VAR_2->nr = 0;
 if (!VAR_1->unsync_children)
  return 0;

 FUNC_1(VAR_2, VAR_1, VAR_0);
 return FUNC_0(VAR_1, VAR_2);
}
