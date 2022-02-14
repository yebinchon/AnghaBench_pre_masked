
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmu_page_path {unsigned int* idx; struct kvm_mmu_page** parent; } ;
struct kvm_mmu_page {int unsync_children; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm_mmu_page*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct mmu_page_path *VAR_1)
{
 struct kvm_mmu_page *VAR_2;
 unsigned int VAR_3 = 0;

 do {
  unsigned int VAR_4 = VAR_1->idx[VAR_3];
  VAR_2 = VAR_1->parent[VAR_3];
  if (!VAR_2)
   return;

  FUNC_0(VAR_4 == VAR_0);
  FUNC_1(VAR_2, VAR_4);
  VAR_3++;
 } while (!VAR_2->unsync_children);
}
