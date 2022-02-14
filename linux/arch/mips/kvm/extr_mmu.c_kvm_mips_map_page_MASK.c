
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_mmu_memory_cache {int dummy; } ;
struct TYPE_2__ {struct kvm_mmu_memory_cache mmu_page_cache; } ;
struct kvm_vcpu {TYPE_1__ arch; struct kvm* kvm; } ;
struct kvm {unsigned long mmu_notifier_seq; int srcu; int mmu_lock; } ;
typedef int pte_t ;
typedef int kvm_pfn_t ;
typedef unsigned long gfn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct kvm_vcpu*,unsigned long,int,int *,int *) ;
 unsigned long VAR_8 ;
 int FUNC_2 (struct kvm*,unsigned long,int,int*) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (struct kvm*,struct kvm_mmu_memory_cache*,unsigned long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct kvm*,unsigned long) ;
 scalar_t__ FUNC_9 (struct kvm*,unsigned long) ;
 int FUNC_10 (struct kvm_mmu_memory_cache*,int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int * FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 () ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int) ;

__attribute__((used)) static int FUNC_19(struct kvm_vcpu *VAR_9, unsigned long VAR_10,
        bool VAR_11,
        pte_t *VAR_12, pte_t *VAR_13)
{
 struct kvm *VAR_14 = VAR_9->kvm;
 struct kvm_mmu_memory_cache *VAR_15 = &VAR_9->arch.mmu_page_cache;
 gfn_t VAR_16 = VAR_10 >> VAR_3;
 int VAR_17, VAR_18;
 kvm_pfn_t VAR_19;
 pte_t *VAR_20, VAR_21, VAR_22;
 bool VAR_23;
 unsigned long VAR_24;
 unsigned long VAR_25;


 VAR_17 = FUNC_17(&VAR_14->srcu);
 VAR_18 = FUNC_1(VAR_9, VAR_10, VAR_11, VAR_12,
          VAR_13);
 if (!VAR_18)
  goto out;


 VAR_18 = FUNC_10(VAR_15, VAR_1,
         VAR_2);
 if (VAR_18)
  goto out;

retry:




 VAR_25 = VAR_14->mmu_notifier_seq;
 FUNC_14();


 VAR_19 = FUNC_2(VAR_14, VAR_16, VAR_11, &VAR_23);
 if (FUNC_3(VAR_19)) {
  VAR_18 = -VAR_0;
  goto out;
 }

 FUNC_15(&VAR_14->mmu_lock);

 if (FUNC_9(VAR_14, VAR_25)) {





  FUNC_16(&VAR_14->mmu_lock);
  FUNC_5(VAR_19);
  goto retry;
 }


 VAR_20 = FUNC_4(VAR_14, VAR_15, VAR_10);


 VAR_24 = VAR_4 | VAR_6 | VAR_8;
 if (VAR_23) {
  VAR_24 |= VAR_5;
  if (VAR_11) {
   VAR_24 |= VAR_7;
   FUNC_8(VAR_14, VAR_16);
   FUNC_7(VAR_19);
  }
 }
 VAR_21 = FUNC_11(VAR_19, FUNC_0(VAR_24));


 VAR_22 = *VAR_20;
 FUNC_13(VAR_20, VAR_21);

 VAR_18 = 0;
 if (VAR_12)
  *VAR_12 = *VAR_20;
 if (VAR_13)
  *VAR_13 = *FUNC_12(VAR_20);

 FUNC_16(&VAR_14->mmu_lock);
 FUNC_5(VAR_19);
 FUNC_6(VAR_19);
out:
 FUNC_18(&VAR_14->srcu, VAR_17);
 return VAR_18;
}
