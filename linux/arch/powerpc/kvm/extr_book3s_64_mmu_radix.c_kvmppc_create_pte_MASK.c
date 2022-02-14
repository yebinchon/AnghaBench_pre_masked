
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmap_nested {int dummy; } ;
struct kvm {int mm; int mmu_lock; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm*,unsigned long*,struct rmap_nested**) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct kvm*,unsigned long,int *,int ) ;
 int FUNC_7 (struct kvm*,int *,int ,int,unsigned long,int ) ;
 int FUNC_8 (struct kvm*,int *,unsigned long,unsigned int) ;
 int FUNC_9 (struct kvm*,int *,unsigned long,unsigned int) ;
 int FUNC_10 (struct kvm*,int *,unsigned long,int ,int *,unsigned int) ;
 scalar_t__ FUNC_11 (struct kvm*,unsigned long) ;
 int FUNC_12 (unsigned long) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,int *,int *) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int * FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int ,int *,int *) ;
 scalar_t__ FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int * FUNC_23 (int *) ;
 int * FUNC_24 (int *,unsigned long) ;
 scalar_t__ FUNC_25 (int ) ;
 scalar_t__ FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 int * FUNC_28 (int ,unsigned long) ;
 int FUNC_29 (int ,int *) ;
 scalar_t__ FUNC_30 (int ) ;
 scalar_t__ FUNC_31 (int ) ;
 int * FUNC_32 (int *,unsigned long) ;
 int FUNC_33 (int ,int *,int *) ;
 scalar_t__ FUNC_34 (int ) ;
 scalar_t__ FUNC_35 (int ) ;
 int FUNC_36 (int ) ;
 int FUNC_37 (int *) ;
 int FUNC_38 (int *) ;

int FUNC_39(struct kvm *VAR_7, pgd_t *VAR_8, pte_t VAR_9,
        unsigned long VAR_10, unsigned int VAR_11,
        unsigned long VAR_12, unsigned int VAR_13,
        unsigned long *VAR_14, struct rmap_nested **VAR_15)
{
 pgd_t *VAR_16;
 pud_t *VAR_17, *VAR_18 = ((void*)0);
 pmd_t *VAR_19, *VAR_20 = ((void*)0);
 pte_t *VAR_21, *VAR_22 = ((void*)0);
 int VAR_23;


 VAR_16 = VAR_8 + FUNC_12(VAR_10);
 VAR_17 = ((void*)0);
 if (FUNC_15(*VAR_16))
  VAR_17 = FUNC_32(VAR_16, VAR_10);
 else
  VAR_18 = FUNC_28(VAR_7->mm, VAR_10);

 VAR_19 = ((void*)0);
 if (VAR_17 && FUNC_34(*VAR_17) && !FUNC_30(*VAR_17))
  VAR_19 = FUNC_18(VAR_17, VAR_10);
 else if (VAR_11 <= 1)
  VAR_20 = FUNC_2();

 if (VAR_11 == 0 && !(VAR_19 && FUNC_20(*VAR_19) && !FUNC_16(*VAR_19)))
  VAR_22 = FUNC_4();


 FUNC_37(&VAR_7->mmu_lock);
 VAR_23 = -VAR_0;
 if (FUNC_11(VAR_7, VAR_12))
  goto out_unlock;


 VAR_23 = -VAR_1;
 if (FUNC_13(*VAR_16)) {
  if (!VAR_18)
   goto out_unlock;
  FUNC_14(VAR_7->mm, VAR_16, VAR_18);
  VAR_18 = ((void*)0);
 }
 VAR_17 = FUNC_32(VAR_16, VAR_10);
 if (FUNC_30(*VAR_17)) {
  unsigned long VAR_24 = VAR_10 & VAR_5;


  if (VAR_11 == 2) {
   if (FUNC_35(*VAR_17) == FUNC_26(VAR_9)) {
    VAR_23 = 0;
    goto out_unlock;
   }

   FUNC_0((FUNC_36(*VAR_17) ^ FUNC_27(VAR_9)) &
       VAR_4);
   FUNC_7(VAR_7, (pte_t *)VAR_17,
           0, FUNC_27(VAR_9), VAR_24, VAR_6);
   VAR_23 = 0;
   goto out_unlock;
  }




  if (!VAR_20) {
   VAR_23 = -VAR_0;
   goto out_unlock;
  }

  FUNC_10(VAR_7, (pte_t *)VAR_17, VAR_24, VAR_6, ((void*)0),
     VAR_13);
 }
 if (VAR_11 == 2) {
  if (!FUNC_31(*VAR_17)) {





   FUNC_9(VAR_7, VAR_17, VAR_10, VAR_13);
  }
  FUNC_6(VAR_7, VAR_10, (pte_t *)VAR_17, VAR_9);
  if (VAR_14 && VAR_15)
   FUNC_1(VAR_7, VAR_14, VAR_15);
  VAR_23 = 0;
  goto out_unlock;
 }
 if (FUNC_31(*VAR_17)) {
  if (!VAR_20)
   goto out_unlock;
  FUNC_33(VAR_7->mm, VAR_17, VAR_20);
  VAR_20 = ((void*)0);
 }
 VAR_19 = FUNC_18(VAR_17, VAR_10);
 if (FUNC_16(*VAR_19)) {
  unsigned long VAR_25 = VAR_10 & VAR_2;


  if (VAR_11 == 1) {
   if (FUNC_21(*VAR_19) == FUNC_26(VAR_9)) {
    VAR_23 = 0;
    goto out_unlock;
   }

   FUNC_0((FUNC_22(*VAR_19) ^ FUNC_27(VAR_9)) &
       VAR_4);
   FUNC_7(VAR_7, FUNC_23(VAR_19),
     0, FUNC_27(VAR_9), VAR_25, VAR_3);
   VAR_23 = 0;
   goto out_unlock;
  }





  if (!VAR_22) {
   VAR_23 = -VAR_0;
   goto out_unlock;
  }

  FUNC_10(VAR_7, FUNC_23(VAR_19), VAR_25, VAR_3, ((void*)0),
     VAR_13);
 }
 if (VAR_11 == 1) {
  if (!FUNC_17(*VAR_19)) {





   FUNC_8(VAR_7, VAR_19, VAR_10, VAR_13);
  }
  FUNC_6(VAR_7, VAR_10, FUNC_23(VAR_19), VAR_9);
  if (VAR_14 && VAR_15)
   FUNC_1(VAR_7, VAR_14, VAR_15);
  VAR_23 = 0;
  goto out_unlock;
 }
 if (FUNC_17(*VAR_19)) {
  if (!VAR_22)
   goto out_unlock;
  FUNC_19(VAR_7->mm, VAR_19, VAR_22);
  VAR_22 = ((void*)0);
 }
 VAR_21 = FUNC_24(VAR_19, VAR_10);
 if (FUNC_25(*VAR_21)) {

  if (FUNC_26(*VAR_21) == FUNC_26(VAR_9)) {
   VAR_23 = 0;
   goto out_unlock;
  }

  FUNC_0((FUNC_27(*VAR_21) ^ FUNC_27(VAR_9)) &
       VAR_4);
  FUNC_7(VAR_7, VAR_21, 0, FUNC_27(VAR_9), VAR_10, 0);
  VAR_23 = 0;
  goto out_unlock;
 }
 FUNC_6(VAR_7, VAR_10, VAR_21, VAR_9);
 if (VAR_14 && VAR_15)
  FUNC_1(VAR_7, VAR_14, VAR_15);
 VAR_23 = 0;

 out_unlock:
 FUNC_38(&VAR_7->mmu_lock);
 if (VAR_18)
  FUNC_29(VAR_7->mm, VAR_18);
 if (VAR_20)
  FUNC_3(VAR_20);
 if (VAR_22)
  FUNC_5(VAR_22);
 return VAR_23;
}
