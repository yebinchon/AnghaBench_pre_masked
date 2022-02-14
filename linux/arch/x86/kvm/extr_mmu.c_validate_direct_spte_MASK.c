
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct kvm_vcpu {int kvm; } ;
struct TYPE_2__ {unsigned int access; } ;
struct kvm_mmu_page {int gfn; TYPE_1__ role; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_mmu_page*,int*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;
 struct kvm_mmu_page* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_1, u64 *VAR_2,
       unsigned VAR_3)
{
 if (FUNC_2(*VAR_2) && !FUNC_1(*VAR_2)) {
  struct kvm_mmu_page *VAR_4;
  VAR_4 = FUNC_4(*VAR_2 & VAR_0);
  if (VAR_4->role.access == VAR_3)
   return;

  FUNC_0(VAR_4, VAR_2);
  FUNC_3(VAR_1->kvm, VAR_4->gfn, 1);
 }
}
