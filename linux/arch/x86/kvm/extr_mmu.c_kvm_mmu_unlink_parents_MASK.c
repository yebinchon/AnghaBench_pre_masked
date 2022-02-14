
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rmap_iterator {int dummy; } ;
struct kvm_mmu_page {int parent_ptes; } ;
struct kvm {int dummy; } ;


 int FUNC_0 (struct kvm_mmu_page*,int *) ;
 int * FUNC_1 (int *,struct rmap_iterator*) ;

__attribute__((used)) static void FUNC_2(struct kvm *VAR_0, struct kvm_mmu_page *VAR_1)
{
 u64 *VAR_2;
 struct rmap_iterator VAR_3;

 while ((VAR_2 = FUNC_1(&VAR_1->parent_ptes, &VAR_3)))
  FUNC_0(VAR_1, VAR_2);
}
