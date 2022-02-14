
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_mmu_page {int lpage_disallowed; int lpage_disallowed_link; } ;
struct TYPE_2__ {int nx_lpage_splits; } ;
struct kvm {TYPE_1__ stat; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct kvm *VAR_0, struct kvm_mmu_page *VAR_1)
{
 --VAR_0->stat.nx_lpage_splits;
 VAR_1->lpage_disallowed = 0;
 FUNC_0(&VAR_1->lpage_disallowed_link);
}
