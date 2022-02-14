
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_mmu_page {int lpage_disallowed; int lpage_disallowed_link; } ;
struct TYPE_4__ {int lpage_disallowed_mmu_pages; } ;
struct TYPE_3__ {int nx_lpage_splits; } ;
struct kvm {TYPE_2__ arch; TYPE_1__ stat; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct kvm *VAR_0, struct kvm_mmu_page *VAR_1)
{
 if (VAR_1->lpage_disallowed)
  return;

 ++VAR_0->stat.nx_lpage_splits;
 FUNC_0(&VAR_1->lpage_disallowed_link,
        &VAR_0->arch.lpage_disallowed_mmu_pages);
 VAR_1->lpage_disallowed = 1;
}
