
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {scalar_t__ level; } ;
struct kvm_mmu_page {TYPE_1__ role; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,struct kvm_mmu_page*,int *) ;
 int FUNC_1 (int *) ;
 struct kvm_mmu_page* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct kvm_mmu_page*) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_1, u64 *VAR_2)
{
 struct kvm_mmu_page *VAR_3;

 VAR_3 = FUNC_2(FUNC_1(VAR_2));






 if (FUNC_3(VAR_3))
  return;

 if (VAR_3->role.level > VAR_0)
  return;

 FUNC_0(VAR_1, VAR_3, VAR_2);
}
