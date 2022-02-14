
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {struct kvm* kvm; } ;
struct kvm_nested_guest {int shadow_lpid; int shadow_pgtable; } ;
struct kvm {int mmu_lock; } ;
typedef int pte_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,long,int *,int*) ;
 int FUNC_1 (struct kvm*,int *,long,int,int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5(struct kvm_vcpu *VAR_1,
     struct kvm_nested_guest *VAR_2,
     long VAR_3, int *VAR_4)
{
 struct kvm *VAR_5 = VAR_1->kvm;
 bool VAR_6 = 0;
 pte_t *VAR_7;
 int VAR_8;

 FUNC_3(&VAR_5->mmu_lock);
 VAR_7 = FUNC_0(VAR_2->shadow_pgtable, VAR_3, ((void*)0), &VAR_8);
 if (!VAR_8)
  VAR_8 = VAR_0;
 if (VAR_7 && FUNC_2(*VAR_7)) {
  FUNC_1(VAR_5, VAR_7, VAR_3, VAR_8, ((void*)0), VAR_2->shadow_lpid);
  VAR_6 = 1;
 }
 FUNC_4(&VAR_5->mmu_lock);

 if (VAR_4)
  *VAR_4 = VAR_8;
 return VAR_6;
}
