
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct kvm_vcpu {int kvm; } ;
struct kvm_rmap_head {int dummy; } ;
struct TYPE_2__ {int level; } ;
struct kvm_mmu_page {TYPE_1__ role; int gfn; } ;
typedef int gfn_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct kvm_rmap_head* FUNC_2 (int ,int ,struct kvm_mmu_page*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,struct kvm_rmap_head*,int *,int ,int ,int ) ;
 struct kvm_mmu_page* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_0, u64 *VAR_1, gfn_t VAR_2)
{
 struct kvm_rmap_head *VAR_3;
 struct kvm_mmu_page *VAR_4;

 VAR_4 = FUNC_5(FUNC_1(VAR_1));

 VAR_3 = FUNC_2(VAR_0->kvm, VAR_2, VAR_4);

 FUNC_4(VAR_0->kvm, VAR_3, ((void*)0), VAR_2, VAR_4->role.level, 0);
 FUNC_3(VAR_0->kvm, VAR_4->gfn,
   FUNC_0(VAR_4->role.level));
}
