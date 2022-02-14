
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct kvm_vcpu {int kvm; } ;
struct TYPE_2__ {int level; } ;
struct kvm_mmu_page {TYPE_1__ role; int gfn; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;
 struct kvm_mmu_page* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_0, u64 *VAR_1)
{
 if (FUNC_1(VAR_0->kvm, VAR_1)) {
  struct kvm_mmu_page *VAR_2 = FUNC_4(FUNC_2(VAR_1));

  FUNC_3(VAR_0->kvm, VAR_2->gfn,
   FUNC_0(VAR_2->role.level));
 }
}
