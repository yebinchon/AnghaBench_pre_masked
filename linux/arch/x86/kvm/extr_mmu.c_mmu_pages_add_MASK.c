
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_mmu_pages {int nr; TYPE_1__* page; } ;
struct kvm_mmu_page {scalar_t__ unsync; } ;
struct TYPE_2__ {int idx; struct kvm_mmu_page* sp; } ;


 size_t VAR_0 ;

__attribute__((used)) static int FUNC_0(struct kvm_mmu_pages *VAR_1, struct kvm_mmu_page *VAR_2,
    int VAR_3)
{
 int VAR_4;

 if (VAR_2->unsync)
  for (VAR_4=0; VAR_4 < VAR_1->nr; VAR_4++)
   if (VAR_1->page[VAR_4].sp == VAR_2)
    return 0;

 VAR_1->page[VAR_1->nr].sp = VAR_2;
 VAR_1->page[VAR_1->nr].idx = VAR_3;
 VAR_1->nr++;
 return (VAR_1->nr == VAR_0);
}
