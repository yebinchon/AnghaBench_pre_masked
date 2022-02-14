
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_4__ {int pgdir; } ;
struct kvm_vcpu {TYPE_1__ arch; struct kvm* kvm; } ;
struct kvm_memory_slot {int flags; } ;
struct TYPE_6__ {int num_1G_pages; int num_2M_pages; } ;
struct TYPE_5__ {int lpid; int pgtable; } ;
struct kvm {unsigned long mmu_notifier_seq; TYPE_3__ stat; TYPE_2__ arch; } ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned int VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * FUNC_1 (int ,unsigned long,int *,unsigned int*) ;
 int FUNC_2 (unsigned long,int,int,struct page**) ;
 unsigned long FUNC_3 (struct kvm_memory_slot*,unsigned long,int,int *,int,int*) ;
 int FUNC_4 (int) ;
 unsigned long FUNC_5 (struct kvm_memory_slot*,unsigned long) ;
 scalar_t__ FUNC_6 (unsigned long) ;
 int FUNC_7 (struct kvm*,int ,int ,unsigned long,unsigned int,unsigned long,int ,int *,int *) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 struct page* FUNC_10 (unsigned long) ;
 scalar_t__ FUNC_11 (unsigned long) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*) ;
 int FUNC_15 () ;

int FUNC_16(struct kvm_vcpu *VAR_13,
       unsigned long VAR_14,
       struct kvm_memory_slot *VAR_15,
       bool VAR_16, bool VAR_17,
       pte_t *VAR_18, unsigned int *VAR_19)
{
 struct kvm *VAR_20 = VAR_13->kvm;
 struct page *VAR_21 = ((void*)0);
 unsigned long VAR_22;
 unsigned long VAR_23, VAR_24 = VAR_14 >> VAR_2;
 bool VAR_25 = 0;
 bool *VAR_26 = &VAR_25;
 pte_t VAR_27, *VAR_28;
 unsigned int VAR_29, VAR_30;
 int VAR_31;
 bool VAR_32;


 VAR_22 = VAR_20->mmu_notifier_seq;
 FUNC_15();







 VAR_23 = FUNC_5(VAR_15, VAR_24);
 if (!VAR_17 && FUNC_2(VAR_23, 1, 1, &VAR_21) == 1) {
  VAR_25 = 1;
 } else {
  unsigned long VAR_33;


  VAR_33 = FUNC_3(VAR_15, VAR_24, 0, ((void*)0),
        VAR_16, VAR_26);
  if (FUNC_6(VAR_33))
   return -VAR_0;
  VAR_21 = ((void*)0);
  if (FUNC_11(VAR_33)) {
   VAR_21 = FUNC_10(VAR_33);
   if (FUNC_0(VAR_21))
    VAR_21 = ((void*)0);
  }
 }





 FUNC_8();
 VAR_28 = FUNC_1(VAR_13->arch.pgdir, VAR_23, ((void*)0), &VAR_29);




 if (!VAR_28) {
  FUNC_9();
  if (VAR_21)
   FUNC_13(VAR_21);
  return VAR_8;
 }
 VAR_27 = *VAR_28;
 FUNC_9();


 VAR_32 = !(VAR_15->flags & VAR_1);


 if (VAR_32 && VAR_29 == VAR_6 &&
     (VAR_14 & (VAR_7 - VAR_3)) ==
     (VAR_23 & (VAR_7 - VAR_3))) {
  VAR_30 = 2;
 } else if (VAR_32 && VAR_29 == VAR_4 &&
     (VAR_14 & (VAR_5 - VAR_3)) ==
     (VAR_23 & (VAR_5 - VAR_3))) {
  VAR_30 = 1;
 } else {
  VAR_30 = 0;
  if (VAR_29 > VAR_2) {





   unsigned long VAR_34 = (1ul << VAR_29) - VAR_3;
   VAR_27 = FUNC_4(FUNC_12(VAR_27) | (VAR_23 & VAR_34));
  }
 }

 VAR_27 = FUNC_4(FUNC_12(VAR_27) | VAR_11 | VAR_9);
 if (VAR_16 || VAR_25) {
  if (FUNC_12(VAR_27) & VAR_12)
   VAR_27 = FUNC_4(FUNC_12(VAR_27) | VAR_10);
 } else {
  VAR_27 = FUNC_4(FUNC_12(VAR_27) & ~(VAR_12 | VAR_10));
 }


 VAR_31 = FUNC_7(VAR_20, VAR_20->arch.pgtable, VAR_27, VAR_14, VAR_30,
    VAR_22, VAR_20->arch.lpid, ((void*)0), ((void*)0));
 if (VAR_18)
  *VAR_18 = VAR_27;
 if (VAR_19)
  *VAR_19 = VAR_30;

 if (VAR_21) {
  if (!VAR_31 && (FUNC_12(VAR_27) & VAR_12))
   FUNC_14(VAR_21);
  FUNC_13(VAR_21);
 }


 if (!VAR_31) {
  if (VAR_30 == 1)
   VAR_20->stat.num_2M_pages++;
  else if (VAR_30 == 2)
   VAR_20->stat.num_1G_pages++;
 }

 return VAR_31;
}
