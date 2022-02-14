
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {struct kvm* kvm; } ;
struct TYPE_2__ {int mmu_ready; int mmu_setup_lock; } ;
struct kvm {TYPE_1__ arch; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct kvm*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_1)
{
 int VAR_2 = 0;
 struct kvm *VAR_3 = VAR_1->kvm;

 FUNC_4(&VAR_3->arch.mmu_setup_lock);
 if (!VAR_3->arch.mmu_ready) {
  if (!FUNC_1(VAR_3))
   VAR_2 = FUNC_2(VAR_1);
  if (!VAR_2) {
   if (FUNC_0(VAR_0))
    FUNC_3(VAR_3);
   VAR_3->arch.mmu_ready = 1;
  }
 }
 FUNC_5(&VAR_3->arch.mmu_setup_lock);
 return VAR_2;
}
