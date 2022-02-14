
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long u64 ;
struct rmap_nested {unsigned long rmap; } ;
struct kvmppc_pte {unsigned int page_shift; unsigned long raddr; int rc; scalar_t__ may_execute; scalar_t__ may_write; scalar_t__ may_read; } ;
struct TYPE_4__ {unsigned long fault_dsisr; unsigned long fault_dar; int fault_gpa; } ;
struct kvm_vcpu {TYPE_1__ arch; struct kvm* kvm; } ;
struct kvm_run {int dummy; } ;
struct kvm_nested_guest {int shadow_lpid; int shadow_pgtable; scalar_t__ l1_lpid; int l1_gr_to_hr; } ;
struct TYPE_6__ {unsigned long* rmap; } ;
struct kvm_memory_slot {int flags; unsigned long base_gfn; TYPE_3__ arch; } ;
struct TYPE_5__ {int pgtable; } ;
struct kvm {unsigned long mmu_notifier_seq; int mmu_lock; TYPE_2__ arch; } ;
typedef int pte_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 long VAR_9 ;
 long VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 long VAR_16 ;
 long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 int VAR_20 ;
 unsigned long VAR_21 ;
 unsigned long VAR_22 ;
 unsigned long VAR_23 ;
 unsigned long VAR_24 ;
 int * FUNC_0 (int ,unsigned long,int *,unsigned int*) ;
 int FUNC_1 (unsigned long) ;
 struct kvm_memory_slot* FUNC_2 (struct kvm*,unsigned long) ;
 int FUNC_3 (struct rmap_nested*) ;
 long FUNC_4 (struct kvm_vcpu*,struct kvm_nested_guest*,unsigned long,struct kvmppc_pte,unsigned long) ;
 int FUNC_5 (struct kvm_vcpu*,struct kvm_nested_guest*,unsigned long,int *) ;
 long FUNC_6 (struct kvm_vcpu*,struct kvm_nested_guest*,unsigned long,unsigned long,struct kvmppc_pte*) ;
 int FUNC_7 (struct kvm_nested_guest*) ;
 long FUNC_8 (struct kvm_vcpu*,unsigned long,struct kvm_memory_slot*,int,int,int *,unsigned int*) ;
 int FUNC_9 (struct kvm_vcpu*,unsigned long,unsigned long) ;
 long FUNC_10 (struct kvm*,int ,int ,unsigned long,unsigned int,unsigned long,int ,unsigned long*,struct rmap_nested**) ;
 long FUNC_11 (struct kvm_run*,struct kvm_vcpu*,unsigned long,unsigned long,int) ;
 unsigned int FUNC_12 (unsigned int) ;
 unsigned int FUNC_13 (unsigned int) ;
 struct rmap_nested* FUNC_14 (int,int ) ;
 int FUNC_15 (char*,unsigned int,unsigned int) ;
 int FUNC_16 (int ) ;
 unsigned long FUNC_17 (int ) ;
 int FUNC_18 () ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static long int FUNC_21(struct kvm_run *VAR_25,
       struct kvm_vcpu *VAR_26,
       struct kvm_nested_guest *VAR_27)
{
 struct kvm *VAR_28 = VAR_26->kvm;
 struct kvm_memory_slot *VAR_29;
 struct rmap_nested *VAR_30;
 struct kvmppc_pte VAR_31;
 pte_t VAR_32, *VAR_33;
 unsigned long VAR_34;
 unsigned long VAR_35 = VAR_26->arch.fault_dsisr;
 unsigned long VAR_36 = VAR_26->arch.fault_dar;
 unsigned long *VAR_37;
 unsigned long VAR_38, VAR_39, VAR_40, VAR_41 = 0UL;
 unsigned int VAR_42, VAR_43, VAR_44;
 bool VAR_45 = !!(VAR_35 & VAR_3);
 bool VAR_46 = 0;
 long int VAR_47;

 if (!VAR_27->l1_gr_to_hr) {
  FUNC_7(VAR_27);
  if (!VAR_27->l1_gr_to_hr)
   return VAR_17;
 }



 VAR_38 = VAR_26->arch.fault_gpa & ~0xF000000000000FFFULL;
 if (!(VAR_35 & VAR_7))
  VAR_38 |= VAR_36 & 0xFFF;
 VAR_47 = FUNC_6(VAR_26, VAR_27, VAR_38, VAR_35, &VAR_31);






 if (VAR_47 == VAR_17 &&
     (VAR_35 & (VAR_6 | VAR_0 | VAR_4 |
        VAR_1)))
  goto inval;
 if (VAR_47)
  return VAR_47;


 if (VAR_35 & VAR_8) {
  VAR_47 = FUNC_4(VAR_26, VAR_27, VAR_38, VAR_31, VAR_35);
  if (VAR_47 == VAR_17)
   return VAR_47;
  if (VAR_47)
   goto inval;
  VAR_35 &= ~VAR_8;
  if (!(VAR_35 & (VAR_2 | VAR_5 |
          VAR_6)))
   return VAR_16;
 }







 VAR_43 = VAR_31.page_shift;
 if (VAR_43 < VAR_14) {

  FUNC_15("KVM: L1 guest page shift (%d) less than our own (%d)\n",
   VAR_43, VAR_14);
  return -VAR_10;
 }
 VAR_39 = VAR_31.raddr;
 VAR_40 = VAR_39 >> VAR_14;



 VAR_29 = FUNC_2(VAR_28, VAR_40);
 if (!VAR_29 || (VAR_29->flags & VAR_12)) {
  if (VAR_35 & (VAR_7 | VAR_0)) {

   FUNC_9(VAR_26, VAR_36, VAR_35);
   return VAR_16;
  }


  return FUNC_11(VAR_25, VAR_26, VAR_39, VAR_36, VAR_45);
 }
 if (VAR_29->flags & VAR_13) {
  if (VAR_45) {

   FUNC_9(VAR_26, VAR_36,
     VAR_3 | VAR_6);
   return VAR_16;
  }
  VAR_46 = 1;
 }




 VAR_34 = VAR_28->mmu_notifier_seq;
 FUNC_18();


 VAR_32 = FUNC_1(0);
 FUNC_19(&VAR_28->mmu_lock);
 VAR_33 = FUNC_0(VAR_28->arch.pgtable, VAR_39, ((void*)0), &VAR_42);
 if (!VAR_42)
  VAR_42 = VAR_14;
 if (VAR_33)
  VAR_32 = *VAR_33;
 FUNC_20(&VAR_28->mmu_lock);

 if (!FUNC_16(VAR_32) || (VAR_45 && !(FUNC_17(VAR_32) & VAR_24))) {

  VAR_47 = FUNC_8(VAR_26, VAR_39, VAR_29,
     VAR_45, VAR_46, &VAR_32, &VAR_44);
  if (VAR_47 == -VAR_9)
   return VAR_16;
  else if (VAR_47)
   return VAR_47;
  VAR_42 = FUNC_12(VAR_44);
 }

 VAR_40 = (VAR_39 & ~((1UL << VAR_42) - 1)) >> VAR_14;




 VAR_41 |= VAR_31.may_read ? 0UL : VAR_23;
 VAR_41 |= VAR_31.may_write ? 0UL : VAR_24;
 VAR_41 |= VAR_31.may_execute ? 0UL : VAR_22;

 VAR_41 |= (VAR_31.rc & VAR_20) ? 0UL : VAR_20;
 VAR_41 |= ((VAR_31.rc & VAR_21) && VAR_45) ? 0UL : VAR_21;
 VAR_32 = FUNC_1(FUNC_17(VAR_32) & ~VAR_41);


 if (VAR_42 > VAR_43) {
  u64 VAR_48;
  unsigned int VAR_49 = VAR_14;
  if (VAR_15 < VAR_43)
   VAR_49 = VAR_15;
  VAR_48 = (1UL << VAR_42) - (1UL << VAR_49);
  VAR_32 = FUNC_1(FUNC_17(VAR_32) | (VAR_39 & VAR_48));
  VAR_42 = VAR_49;
 }
 VAR_44 = FUNC_13(VAR_42);
 VAR_38 &= ~((1UL << VAR_42) - 1);



 VAR_30 = FUNC_14(sizeof(*VAR_30), VAR_11);
 if (!VAR_30)
  return VAR_16;
 VAR_30->rmap = (VAR_38 & VAR_18) |
  (((unsigned long) VAR_27->l1_lpid) << VAR_19);
 VAR_37 = &VAR_29->arch.rmap[VAR_40 - VAR_29->base_gfn];
 VAR_47 = FUNC_10(VAR_28, VAR_27->shadow_pgtable, VAR_32, VAR_38, VAR_44,
    VAR_34, VAR_27->shadow_lpid, VAR_37, &VAR_30);
 if (VAR_30)
  FUNC_3(VAR_30);
 if (VAR_47 == -VAR_9)
  VAR_47 = VAR_16;

 return VAR_47;

 inval:
 FUNC_5(VAR_26, VAR_27, VAR_38, ((void*)0));
 return VAR_16;
}
