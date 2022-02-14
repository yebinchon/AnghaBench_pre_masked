
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct TYPE_6__ {TYPE_2__* mmu; } ;
struct kvm_vcpu {int kvm; TYPE_3__ arch; } ;
struct TYPE_4__ {int gpte_is_8_bytes; } ;
struct kvm_mmu_page {TYPE_1__ role; } ;
struct TYPE_5__ {scalar_t__ (* sync_page ) (struct kvm_vcpu*,struct kvm_mmu_page*) ;} ;


 int FUNC_0 (struct kvm_mmu_page*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ,struct kvm_mmu_page*,struct list_head*) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*,struct kvm_mmu_page*) ;

__attribute__((used)) static bool FUNC_4(struct kvm_vcpu *VAR_0, struct kvm_mmu_page *VAR_1,
       struct list_head *VAR_2)
{
 if ((!FUNC_0(VAR_1) && VAR_1->role.gpte_is_8_bytes != !!FUNC_1(VAR_0)) ||
     VAR_0->arch.mmu->sync_page(VAR_0, VAR_1) == 0) {
  FUNC_2(VAR_0->kvm, VAR_1, VAR_2);
  return 0;
 }

 return 1;
}
