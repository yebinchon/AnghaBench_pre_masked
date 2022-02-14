
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_mmu_page {scalar_t__ unsync; } ;
struct TYPE_2__ {int mmu_unsync; } ;
struct kvm {TYPE_1__ stat; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm_mmu_page*) ;

__attribute__((used)) static void FUNC_2(struct kvm *VAR_0, struct kvm_mmu_page *VAR_1)
{
 FUNC_0(!VAR_1->unsync);
 FUNC_1(VAR_1);
 VAR_1->unsync = 0;
 --VAR_0->stat.mmu_unsync;
}
