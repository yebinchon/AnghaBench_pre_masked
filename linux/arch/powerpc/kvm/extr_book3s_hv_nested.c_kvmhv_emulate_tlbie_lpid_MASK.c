
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {struct kvm* kvm; } ;
struct kvm_nested_guest {int tlb_lock; int shadow_lpid; int shadow_pgtable; } ;
struct kvm {int mmu_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_nested_guest*) ;
 int FUNC_2 (struct kvm*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct kvm_vcpu *VAR_0,
         struct kvm_nested_guest *VAR_1, int VAR_2)
{
 struct kvm *VAR_3 = VAR_0->kvm;

 FUNC_3(&VAR_1->tlb_lock);
 switch (VAR_2) {
 case 0:

  FUNC_5(&VAR_3->mmu_lock);
  FUNC_2(VAR_3, VAR_1->shadow_pgtable,
       VAR_1->shadow_lpid);
  FUNC_0(VAR_1->shadow_lpid);
  FUNC_6(&VAR_3->mmu_lock);
  break;
 case 1:




  break;
 case 2:

  FUNC_1(VAR_1);
  break;
 default:
  break;
 }
 FUNC_4(&VAR_1->tlb_lock);
}
