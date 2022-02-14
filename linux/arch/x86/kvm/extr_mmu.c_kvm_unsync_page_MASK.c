
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_vcpu {TYPE_2__* kvm; } ;
struct kvm_mmu_page {int unsync; } ;
struct TYPE_3__ {int mmu_unsync; } ;
struct TYPE_4__ {TYPE_1__ stat; } ;


 int FUNC_0 (struct kvm_mmu_page*) ;
 int FUNC_1 (struct kvm_mmu_page*) ;

__attribute__((used)) static void FUNC_2(struct kvm_vcpu *VAR_0, struct kvm_mmu_page *VAR_1)
{
 FUNC_1(VAR_1);
 ++VAR_0->kvm->stat.mmu_unsync;
 VAR_1->unsync = 1;

 FUNC_0(VAR_1);
}
