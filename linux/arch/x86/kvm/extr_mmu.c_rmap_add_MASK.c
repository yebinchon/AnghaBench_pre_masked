
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct kvm_vcpu {int kvm; } ;
struct kvm_rmap_head {int dummy; } ;
struct kvm_mmu_page {int spt; } ;
typedef int gfn_t ;


 int FUNC_0 (int *) ;
 struct kvm_rmap_head* FUNC_1 (int ,int ,struct kvm_mmu_page*) ;
 int FUNC_2 (struct kvm_mmu_page*,int *,int ) ;
 struct kvm_mmu_page* FUNC_3 (int ) ;
 int FUNC_4 (struct kvm_vcpu*,int *,struct kvm_rmap_head*) ;

__attribute__((used)) static int FUNC_5(struct kvm_vcpu *VAR_0, u64 *VAR_1, gfn_t VAR_2)
{
 struct kvm_mmu_page *VAR_3;
 struct kvm_rmap_head *VAR_4;

 VAR_3 = FUNC_3(FUNC_0(VAR_1));
 FUNC_2(VAR_3, VAR_1 - VAR_3->spt, VAR_2);
 VAR_4 = FUNC_1(VAR_0->kvm, VAR_2, VAR_3);
 return FUNC_4(VAR_0, VAR_1, VAR_4);
}
