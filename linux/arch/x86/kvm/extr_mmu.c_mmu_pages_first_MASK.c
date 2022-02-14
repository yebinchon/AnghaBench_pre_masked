
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmu_page_path {struct kvm_mmu_page** parent; } ;
struct kvm_mmu_pages {scalar_t__ nr; TYPE_2__* page; } ;
struct TYPE_3__ {int level; } ;
struct kvm_mmu_page {TYPE_1__ role; } ;
struct TYPE_4__ {scalar_t__ idx; struct kvm_mmu_page* sp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm_mmu_pages*,struct mmu_page_path*,int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_mmu_pages *VAR_2,
      struct mmu_page_path *VAR_3)
{
 struct kvm_mmu_page *VAR_4;
 int VAR_5;

 if (VAR_2->nr == 0)
  return 0;

 FUNC_0(VAR_2->page[0].idx != VAR_0);

 VAR_4 = VAR_2->page[0].sp;
 VAR_5 = VAR_4->role.level;
 FUNC_0(VAR_5 == VAR_1);

 VAR_3->parent[VAR_5-2] = VAR_4;




 VAR_3->parent[VAR_5-1] = ((void*)0);
 return FUNC_1(VAR_2, VAR_3, 0);
}
