
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_mmu_page {int unsync_children; int unsync_child_bitmap; int * spt; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (struct kvm_mmu_page*) ;
 struct kvm_mmu_page* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(u64 *VAR_0)
{
 struct kvm_mmu_page *VAR_1;
 unsigned int VAR_2;

 VAR_1 = FUNC_3(FUNC_0(VAR_0));
 VAR_2 = VAR_0 - VAR_1->spt;
 if (FUNC_1(VAR_2, VAR_1->unsync_child_bitmap))
  return;
 if (VAR_1->unsync_children++)
  return;
 FUNC_2(VAR_1);
}
