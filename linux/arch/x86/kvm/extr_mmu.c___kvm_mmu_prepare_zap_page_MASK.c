
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_6__ {int invalid; int direct; } ;
struct kvm_mmu_page {TYPE_3__ role; scalar_t__ lpage_disallowed; int link; int root_count; scalar_t__ unsync; } ;
struct TYPE_5__ {struct list_head active_mmu_pages; } ;
struct TYPE_4__ {int mmu_shadow_zapped; } ;
struct kvm {TYPE_2__ arch; TYPE_1__ stat; } ;


 int FUNC_0 (struct kvm*,struct kvm_mmu_page*) ;
 int FUNC_1 (struct kvm*,struct kvm_mmu_page*) ;
 int FUNC_2 (struct kvm*,struct kvm_mmu_page*) ;
 int FUNC_3 (struct kvm*,int) ;
 int FUNC_4 (struct kvm*) ;
 int FUNC_5 (struct kvm*,struct kvm_mmu_page*) ;
 int FUNC_6 (int *,struct list_head*) ;
 int FUNC_7 (struct kvm*,struct kvm_mmu_page*,struct list_head*) ;
 int FUNC_8 (struct kvm_mmu_page*) ;
 int FUNC_9 (struct kvm*,struct kvm_mmu_page*) ;
 int FUNC_10 (struct kvm*,struct kvm_mmu_page*) ;

__attribute__((used)) static bool FUNC_11(struct kvm *VAR_0,
           struct kvm_mmu_page *VAR_1,
           struct list_head *VAR_2,
           int *VAR_3)
{
 bool VAR_4;

 FUNC_8(VAR_1);
 ++VAR_0->stat.mmu_shadow_zapped;
 *VAR_3 = FUNC_7(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_0, VAR_1);
 FUNC_2(VAR_0, VAR_1);


 VAR_4 = *VAR_3;

 if (!VAR_1->role.invalid && !VAR_1->role.direct)
  FUNC_10(VAR_0, VAR_1);

 if (VAR_1->unsync)
  FUNC_5(VAR_0, VAR_1);
 if (!VAR_1->root_count) {

  (*VAR_3)++;
  FUNC_6(&VAR_1->link, VAR_2);
  FUNC_3(VAR_0, -1);
 } else {
  FUNC_6(&VAR_1->link, &VAR_0->arch.active_mmu_pages);






  if (!FUNC_0(VAR_0, VAR_1))
   FUNC_4(VAR_0);
 }

 if (VAR_1->lpage_disallowed)
  FUNC_9(VAR_0, VAR_1);

 VAR_1->role.invalid = 1;
 return VAR_4;
}
