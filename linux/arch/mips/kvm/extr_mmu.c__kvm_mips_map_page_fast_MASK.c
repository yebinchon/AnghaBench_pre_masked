
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_vcpu {struct kvm* kvm; } ;
struct kvm {int mmu_lock; } ;
typedef int pte_t ;
typedef int kvm_pfn_t ;
typedef unsigned long gfn_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int * FUNC_0 (struct kvm*,int *,unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct kvm*,unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int * FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct kvm_vcpu *VAR_2, unsigned long VAR_3,
       bool VAR_4,
       pte_t *VAR_5, pte_t *VAR_6)
{
 struct kvm *VAR_7 = VAR_2->kvm;
 gfn_t VAR_8 = VAR_3 >> VAR_1;
 pte_t *VAR_9;
 kvm_pfn_t VAR_10 = 0;
 bool VAR_11 = 0;
 int VAR_12 = 0;

 FUNC_13(&VAR_7->mmu_lock);


 VAR_9 = FUNC_0(VAR_7, ((void*)0), VAR_3);
 if (!VAR_9 || !FUNC_8(*VAR_9)) {
  VAR_12 = -VAR_0;
  goto out;
 }


 if (!FUNC_10(*VAR_9)) {
  FUNC_12(VAR_9, FUNC_6(*VAR_9));
  VAR_10 = FUNC_7(*VAR_9);
  VAR_11 = 1;

 }
 if (VAR_4 && !FUNC_4(*VAR_9)) {
  if (!FUNC_9(*VAR_9)) {
   VAR_12 = -VAR_0;
   goto out;
  }


  FUNC_12(VAR_9, FUNC_5(*VAR_9));
  VAR_10 = FUNC_7(*VAR_9);
  FUNC_3(VAR_7, VAR_8);
  FUNC_2(VAR_10);
 }

 if (VAR_5)
  *VAR_5 = *VAR_9;
 if (VAR_6)
  *VAR_6 = *FUNC_11(VAR_9);

out:
 FUNC_14(&VAR_7->mmu_lock);
 if (VAR_11)
  FUNC_1(VAR_10);
 return VAR_12;
}
