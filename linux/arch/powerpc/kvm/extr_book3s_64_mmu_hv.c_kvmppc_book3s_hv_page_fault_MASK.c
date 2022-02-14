
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; int vm_flags; unsigned long vm_pgoff; int vm_page_prot; } ;
struct revmap_entry {unsigned long guest_rpte; } ;
struct page {int dummy; } ;
struct TYPE_10__ {unsigned long pgfault_addr; unsigned long* pgfault_hpte; long pgfault_index; TYPE_2__* pgfault_cache; } ;
struct kvm_vcpu {struct kvm* kvm; TYPE_3__ arch; } ;
struct kvm_run {int dummy; } ;
struct TYPE_8__ {unsigned long* rmap; } ;
struct kvm_memory_slot {int flags; unsigned long base_gfn; TYPE_1__ arch; } ;
struct TYPE_12__ {struct revmap_entry* rev; scalar_t__ virt; } ;
struct TYPE_11__ {int mmu_ready; TYPE_5__ hpt; int mmio_update; } ;
struct kvm {unsigned long mmu_notifier_seq; TYPE_4__ arch; } ;
typedef int pte_t ;
typedef int __be64 ;
struct TYPE_14__ {TYPE_6__* mm; } ;
struct TYPE_13__ {int pgd; int mmap_sem; } ;
struct TYPE_9__ {long mmio_update; unsigned long rpte; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 int VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_20 ;
 int FUNC_1 (struct page*) ;
 int VAR_21 ;
 unsigned int VAR_22 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 long FUNC_5 (int *) ;
 unsigned long FUNC_6 (int ) ;
 struct page* FUNC_7 (struct page*) ;
 unsigned long FUNC_8 (struct page*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (unsigned long) ;
 TYPE_7__* VAR_23 ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int * FUNC_14 (int ,unsigned long,int *,int *) ;
 struct vm_area_struct* FUNC_15 (TYPE_6__*,unsigned long) ;
 long FUNC_16 (unsigned long,int,int ,struct page**) ;
 unsigned long FUNC_17 (struct kvm_memory_slot*,unsigned long) ;
 struct kvm_memory_slot* FUNC_18 (struct kvm*,unsigned long) ;
 int FUNC_19 (unsigned long,int) ;
 scalar_t__ FUNC_20 (unsigned long) ;
 unsigned long FUNC_21 (unsigned long) ;
 unsigned long FUNC_22 (unsigned long) ;
 unsigned long FUNC_23 (unsigned long,unsigned long) ;
 unsigned long FUNC_24 (unsigned long,unsigned long) ;
 unsigned long FUNC_25 (unsigned long) ;
 scalar_t__ FUNC_26 (struct kvm*) ;
 unsigned long FUNC_27 (unsigned long,unsigned long) ;
 int FUNC_28 (struct kvm*,struct revmap_entry*,unsigned long*,long,int ) ;
 int FUNC_29 (struct kvm_run*,struct kvm_vcpu*,unsigned long,unsigned long) ;
 int FUNC_30 (struct kvm_run*,struct kvm_vcpu*,unsigned long,unsigned long,unsigned long) ;
 int FUNC_31 (struct kvm*,int *,long) ;
 int FUNC_32 (int *,int) ;
 int FUNC_33 (unsigned long) ;
 int FUNC_34 (unsigned long) ;
 int FUNC_35 (unsigned long*) ;
 scalar_t__ FUNC_36 (struct kvm*,unsigned long) ;
 unsigned long FUNC_37 (struct page*) ;
 int FUNC_38 (int ) ;
 int FUNC_39 () ;
 int FUNC_40 () ;
 int FUNC_41 (int ) ;
 int FUNC_42 (struct page*) ;
 int FUNC_43 () ;
 int FUNC_44 (struct kvm_vcpu*,unsigned long*,struct kvm_memory_slot*,unsigned long,unsigned long) ;
 int FUNC_45 (struct kvm_vcpu*,unsigned long*,long) ;
 int FUNC_46 (int *,unsigned long) ;
 int FUNC_47 (int *,unsigned long) ;
 int FUNC_48 (unsigned long*) ;
 int FUNC_49 (int *) ;

int FUNC_50(struct kvm_run *VAR_24, struct kvm_vcpu *VAR_25,
    unsigned long VAR_26, unsigned long VAR_27)
{
 struct kvm *VAR_28 = VAR_25->kvm;
 unsigned long VAR_29[3], VAR_30;
 unsigned long VAR_31, VAR_32;
 __be64 *VAR_33;
 unsigned long VAR_34, VAR_35, VAR_36;
 unsigned long VAR_37, VAR_38;
 unsigned long VAR_39, VAR_40, VAR_41, VAR_42;
 struct kvm_memory_slot *VAR_43;
 unsigned long *VAR_44;
 struct revmap_entry *VAR_45;
 struct page *VAR_46, *VAR_47[1];
 long VAR_48, VAR_49, VAR_50;
 bool VAR_51;
 unsigned int VAR_52, VAR_53;
 struct vm_area_struct *VAR_54;
 unsigned long VAR_55;
 long VAR_56;

 if (FUNC_26(VAR_28))
  return FUNC_29(VAR_24, VAR_25, VAR_26, VAR_27);







 if (VAR_26 != VAR_25->arch.pgfault_addr)
  return VAR_20;

 if (VAR_25->arch.pgfault_cache) {
  VAR_56 = FUNC_5(&VAR_28->arch.mmio_update);
  if (VAR_56 == VAR_25->arch.pgfault_cache->mmio_update) {
   VAR_30 = VAR_25->arch.pgfault_cache->rpte;
   VAR_35 = FUNC_27(VAR_25->arch.pgfault_hpte[0],
         VAR_30);
   VAR_37 = VAR_30 & VAR_11 & ~(VAR_35 - 1);
   VAR_38 = VAR_37 >> VAR_18;
   VAR_39 = VAR_37 | (VAR_26 & (VAR_35 - 1));
   return FUNC_30(VAR_24, VAR_25, VAR_39, VAR_26,
      VAR_27 & VAR_1);
  }
 }
 VAR_48 = VAR_25->arch.pgfault_index;
 VAR_33 = (__be64 *)(VAR_28->arch.hpt.virt + (VAR_48 << 4));
 VAR_45 = &VAR_28->arch.hpt.rev[VAR_48];
 FUNC_39();
 while (!FUNC_46(VAR_33, VAR_14))
  FUNC_10();
 VAR_29[0] = FUNC_6(VAR_33[0]) & ~VAR_14;
 VAR_29[1] = FUNC_6(VAR_33[1]);
 VAR_29[2] = VAR_30 = VAR_45->guest_rpte;
 FUNC_47(VAR_33, VAR_29[0]);
 FUNC_40();

 if (FUNC_9(VAR_0)) {
  VAR_29[0] = FUNC_23(VAR_29[0], VAR_29[1]);
  VAR_29[1] = FUNC_22(VAR_29[1]);
 }
 if (VAR_29[0] != VAR_25->arch.pgfault_hpte[0] ||
     VAR_29[1] != VAR_25->arch.pgfault_hpte[1])
  return VAR_20;


 VAR_35 = FUNC_27(VAR_29[0], VAR_30);
 VAR_37 = VAR_30 & VAR_11 & ~(VAR_35 - 1);
 VAR_38 = VAR_37 >> VAR_18;
 VAR_39 = VAR_37 | (VAR_26 & (VAR_35 - 1));
 VAR_40 = VAR_39 >> VAR_18;
 VAR_43 = FUNC_18(VAR_28, VAR_40);

 FUNC_44(VAR_25, VAR_29, VAR_43, VAR_26, VAR_27);


 if (!VAR_43 || (VAR_43->flags & VAR_17))
  return FUNC_30(VAR_24, VAR_25, VAR_39, VAR_26,
           VAR_27 & VAR_1);





 if (VAR_38 < VAR_43->base_gfn)
  return -VAR_2;


 VAR_34 = VAR_28->mmu_notifier_seq;
 FUNC_43();

 VAR_49 = -VAR_2;
 VAR_51 = 0;
 VAR_42 = 0;
 VAR_46 = ((void*)0);
 VAR_36 = VAR_19;
 VAR_52 = (VAR_27 & VAR_1) != 0;

 VAR_53 = VAR_52;
 VAR_41 = FUNC_17(VAR_43, VAR_40);
 VAR_50 = FUNC_16(VAR_41, 1, VAR_52 ? VAR_3 : 0, VAR_47);
 if (VAR_50 < 1) {

  FUNC_12(&VAR_23->mm->mmap_sem);
  VAR_54 = FUNC_15(VAR_23->mm, VAR_41);
  if (VAR_54 && VAR_54->vm_start <= VAR_41 && VAR_41 + VAR_35 <= VAR_54->vm_end &&
      (VAR_54->vm_flags & VAR_21)) {
   VAR_42 = VAR_54->vm_pgoff +
    ((VAR_41 - VAR_54->vm_start) >> VAR_18);
   VAR_36 = VAR_35;
   VAR_51 = FUNC_41(FUNC_2((FUNC_38(VAR_54->vm_page_prot))));
   VAR_53 = VAR_54->vm_flags & VAR_22;
  }
  FUNC_49(&VAR_23->mm->mmap_sem);
  if (!VAR_42)
   goto out_put;
 } else {
  VAR_46 = VAR_47[0];
  VAR_42 = FUNC_37(VAR_46);
  if (FUNC_0(VAR_46)) {
   VAR_46 = FUNC_7(VAR_46);
   VAR_36 <<= FUNC_8(VAR_46);
  }

  if (!VAR_52 && FUNC_20(VAR_30)) {
   pte_t *VAR_57, VAR_58;
   unsigned long VAR_59;




   FUNC_34(VAR_59);
   VAR_57 = FUNC_14(VAR_23->mm->pgd,
         VAR_41, ((void*)0), ((void*)0));
   if (VAR_57) {
    VAR_58 = FUNC_32(VAR_57, 1);
    if (FUNC_3(VAR_58))
     VAR_53 = 1;
   }
   FUNC_33(VAR_59);
  }
 }

 if (VAR_35 > VAR_36)
  goto out_put;


 if (!FUNC_19(VAR_30, VAR_51)) {
  if (VAR_51)
   goto out_put;




  VAR_30 = (VAR_30 & ~(VAR_12|VAR_6|VAR_5)) | VAR_8;
 }






 if (VAR_35 < VAR_19)
  VAR_35 = VAR_19;
 VAR_30 = (VAR_30 & VAR_7) | (VAR_30 & ~(VAR_9 - VAR_35)) |
     ((VAR_42 << VAR_18) & ~(VAR_35 - 1));
 if (FUNC_20(VAR_30) && !VAR_53)
  VAR_30 = FUNC_21(VAR_30);
 VAR_49 = VAR_20;
 FUNC_39();
 while (!FUNC_46(VAR_33, VAR_14))
  FUNC_10();
 VAR_31 = FUNC_6(VAR_33[0]);
 VAR_32 = FUNC_6(VAR_33[1]);
 if (FUNC_9(VAR_0)) {
  VAR_31 = FUNC_23(VAR_31, VAR_32);
  VAR_32 = FUNC_22(VAR_32);
 }







 if (!VAR_28->arch.mmu_ready)
  goto out_unlock;

 if ((VAR_31 & ~VAR_14) != VAR_29[0] || VAR_32 != VAR_29[1] ||
     VAR_45->guest_rpte != VAR_29[2])

  goto out_unlock;
 VAR_29[0] = (VAR_29[0] & ~VAR_13) | VAR_15;


 VAR_44 = &VAR_43->arch.rmap[VAR_38 - VAR_43->base_gfn];
 FUNC_35(VAR_44);


 VAR_49 = VAR_20;
 if (FUNC_36(VAR_25->kvm, VAR_34)) {
  FUNC_48(VAR_44);
  goto out_unlock;
 }


 VAR_55 = *VAR_44 >> VAR_16;
 VAR_30 &= VAR_55 | ~(VAR_10 | VAR_4);

 if (FUNC_6(VAR_33[0]) & VAR_15) {

  FUNC_48(VAR_44);
  VAR_33[0] |= FUNC_11(VAR_13);
  FUNC_31(VAR_28, VAR_33, VAR_48);

  VAR_30 |= FUNC_6(VAR_33[1]) & (VAR_10 | VAR_4);
 } else {
  FUNC_28(VAR_28, VAR_45, VAR_44, VAR_48, 0);
 }

 if (FUNC_9(VAR_0)) {
  VAR_30 = FUNC_24(VAR_29[0], VAR_30);
  VAR_29[0] = FUNC_25(VAR_29[0]);
 }
 VAR_33[1] = FUNC_11(VAR_30);
 FUNC_13();
 FUNC_4(VAR_33, VAR_29[0]);
 asm volatile("ptesync" : : : "memory");
 FUNC_40();
 if (VAR_46 && FUNC_20(VAR_30))
  FUNC_1(VAR_46);

 out_put:
 FUNC_45(VAR_25, VAR_29, VAR_49);

 if (VAR_46) {






  FUNC_42(VAR_47[0]);
 }
 return VAR_49;

 out_unlock:
 FUNC_4(VAR_33, FUNC_6(VAR_33[0]));
 FUNC_40();
 goto out_put;
}
