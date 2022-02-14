
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_rmap_head {int dummy; } ;
struct kvm_mmu_page {int spt; } ;
struct kvm {int dummy; } ;
typedef int gfn_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct kvm_rmap_head*) ;
 struct kvm_rmap_head* FUNC_2 (struct kvm*,int ,struct kvm_mmu_page*) ;
 int FUNC_3 (struct kvm_mmu_page*,int *) ;
 struct kvm_mmu_page* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct kvm *VAR_0, u64 *VAR_1)
{
 struct kvm_mmu_page *VAR_2;
 gfn_t VAR_3;
 struct kvm_rmap_head *VAR_4;

 VAR_2 = FUNC_4(FUNC_0(VAR_1));
 VAR_3 = FUNC_3(VAR_2, VAR_1 - VAR_2->spt);
 VAR_4 = FUNC_2(VAR_0, VAR_3, VAR_2);
 FUNC_1(VAR_1, VAR_4);
}
