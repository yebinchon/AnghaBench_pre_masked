
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmu_page_path {unsigned int* idx; struct kvm_mmu_page** parent; } ;
struct kvm_mmu_pages {int nr; TYPE_2__* page; } ;
struct TYPE_3__ {int level; } ;
struct kvm_mmu_page {TYPE_1__ role; } ;
struct TYPE_4__ {unsigned int idx; struct kvm_mmu_page* sp; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct kvm_mmu_pages *VAR_1,
     struct mmu_page_path *VAR_2,
     int VAR_3)
{
 int VAR_4;

 for (VAR_4 = VAR_3+1; VAR_4 < VAR_1->nr; VAR_4++) {
  struct kvm_mmu_page *VAR_5 = VAR_1->page[VAR_4].sp;
  unsigned VAR_6 = VAR_1->page[VAR_4].idx;
  int VAR_7 = VAR_5->role.level;

  VAR_2->idx[VAR_7-1] = VAR_6;
  if (VAR_7 == VAR_0)
   break;

  VAR_2->parent[VAR_7-2] = VAR_5;
 }

 return VAR_4;
}
