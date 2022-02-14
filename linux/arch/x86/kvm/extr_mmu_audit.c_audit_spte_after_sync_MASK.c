
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct kvm_vcpu {TYPE_2__* kvm; } ;
struct kvm_mmu_page {scalar_t__ unsync; } ;
struct TYPE_3__ {scalar_t__ audit_point; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,char*,struct kvm_mmu_page*) ;
 struct kvm_mmu_page* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_1, u64 *VAR_2, int VAR_3)
{
 struct kvm_mmu_page *VAR_4 = FUNC_2(FUNC_0(VAR_2));

 if (VAR_1->kvm->arch.audit_point == VAR_0 && VAR_4->unsync)
  FUNC_1(VAR_1->kvm, "meet unsync sp(%p) after sync "
        "root.\n", VAR_4);
}
