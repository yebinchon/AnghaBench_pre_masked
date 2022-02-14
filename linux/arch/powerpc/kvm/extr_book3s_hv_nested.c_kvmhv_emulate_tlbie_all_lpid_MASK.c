
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {struct kvm* kvm; } ;
struct kvm_nested_guest {int dummy; } ;
struct TYPE_2__ {int max_nested_lpid; struct kvm_nested_guest** nested_guests; } ;
struct kvm {int mmu_lock; TYPE_1__ arch; } ;


 int FUNC_0 (struct kvm_vcpu*,struct kvm_nested_guest*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct kvm_vcpu *VAR_0, int VAR_1)
{
 struct kvm *VAR_2 = VAR_0->kvm;
 struct kvm_nested_guest *VAR_3;
 int VAR_4;

 FUNC_1(&VAR_2->mmu_lock);
 for (VAR_4 = 0; VAR_4 <= VAR_2->arch.max_nested_lpid; VAR_4++) {
  VAR_3 = VAR_2->arch.nested_guests[VAR_4];
  if (VAR_3) {
   FUNC_2(&VAR_2->mmu_lock);
   FUNC_0(VAR_0, VAR_3, VAR_1);
   FUNC_1(&VAR_2->mmu_lock);
  }
 }
 FUNC_2(&VAR_2->mmu_lock);
}
