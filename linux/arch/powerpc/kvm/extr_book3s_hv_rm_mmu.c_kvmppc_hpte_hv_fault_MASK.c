
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct revmap_entry {unsigned long guest_rpte; } ;
struct mmio_hpte_cache_entry {long pte_index; unsigned long hpte_v; unsigned long hpte_r; unsigned long rpte; unsigned long eaddr; unsigned int slb_base_pshift; unsigned long slb_v; long mmio_update; } ;
struct TYPE_7__ {int msr; } ;
struct TYPE_8__ {unsigned long pgfault_addr; long pgfault_index; unsigned long* pgfault_hpte; TYPE_3__ shregs; struct mmio_hpte_cache_entry* pgfault_cache; int amr; } ;
struct kvm_vcpu {TYPE_4__ arch; struct kvm* kvm; } ;
struct TYPE_5__ {int * rev; scalar_t__ virt; } ;
struct TYPE_6__ {TYPE_1__ hpt; int mmio_update; } ;
struct kvm {TYPE_2__ arch; } ;
typedef int __be64 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 unsigned long VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 long FUNC_0 (int *) ;
 unsigned long FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned int FUNC_3 (unsigned long,int ) ;
 unsigned long FUNC_4 (unsigned long) ;
 unsigned long FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (unsigned long,unsigned long) ;
 long FUNC_8 (struct kvm*,unsigned long,unsigned long,unsigned long) ;
 struct mmio_hpte_cache_entry* FUNC_9 (struct kvm_vcpu*,unsigned long,unsigned long,long) ;
 struct mmio_hpte_cache_entry* FUNC_10 (struct kvm_vcpu*) ;
 struct revmap_entry* FUNC_11 (int *) ;
 unsigned int* VAR_23 ;
 int FUNC_12 (int *,unsigned long) ;

long FUNC_13(struct kvm_vcpu *VAR_24, unsigned long VAR_25,
     unsigned long VAR_26, unsigned int VAR_27, bool VAR_28)
{
 struct kvm *VAR_29 = VAR_24->kvm;
 long int VAR_30;
 unsigned long VAR_31, VAR_32, VAR_33, VAR_34;
 __be64 *VAR_35;
 unsigned long VAR_36;
 struct revmap_entry *VAR_37;
 unsigned long VAR_38, VAR_39;
 struct mmio_hpte_cache_entry *VAR_40 = ((void*)0);
 long VAR_41 = 0;


 VAR_36 = VAR_13;
 if (VAR_27 & VAR_3) {
  VAR_36 |= VAR_11;
  VAR_41 = FUNC_0(&VAR_29->arch.mmio_update);
  VAR_40 = FUNC_9(VAR_24, VAR_25, VAR_26, VAR_41);
 }
 if (VAR_40) {
  VAR_30 = VAR_40->pte_index;
  VAR_31 = VAR_40->hpte_v;
  VAR_32 = VAR_40->hpte_r;
  VAR_33 = VAR_40->rpte;
 } else {
  VAR_30 = FUNC_8(VAR_29, VAR_25, VAR_26, VAR_36);
  if (VAR_30 < 0) {
   if (VAR_27 & VAR_3)
    return VAR_27;
   return 0;
  }
  VAR_35 = (__be64 *)(VAR_29->arch.hpt.virt + (VAR_30 << 4));
  VAR_31 = VAR_34 = FUNC_1(VAR_35[0]) & ~VAR_12;
  VAR_32 = FUNC_1(VAR_35[1]);
  if (FUNC_2(VAR_0)) {
   VAR_31 = FUNC_5(VAR_31, VAR_32);
   VAR_32 = FUNC_4(VAR_32);
  }
  VAR_37 = FUNC_11(&VAR_29->arch.hpt.rev[VAR_30]);
  VAR_33 = VAR_37->guest_rpte;

  FUNC_12(VAR_35, VAR_34);
 }


 if ((VAR_27 & VAR_3) && (VAR_31 & VAR_13))
  return 0;


 VAR_38 = VAR_33 & (VAR_10 | VAR_9);
 VAR_39 = (VAR_24->arch.shregs.msr & VAR_16) ? VAR_17 : VAR_18;
 VAR_27 &= ~VAR_3;
 if (!VAR_28) {
  if (VAR_33 & (VAR_8 | VAR_5))
   return VAR_27 | VAR_21;
  if (!FUNC_6(VAR_38, VAR_26 & VAR_39))
   return VAR_27 | VAR_22;
 } else if (VAR_27 & VAR_1) {

  if (!FUNC_7(VAR_38, VAR_26 & VAR_39))
   return VAR_27 | VAR_4;
 } else {
  if (!FUNC_6(VAR_38, VAR_26 & VAR_39))
   return VAR_27 | VAR_4;
 }


 if (VAR_28 && (VAR_24->arch.shregs.msr & VAR_14)) {
  unsigned int VAR_42 = FUNC_3(VAR_33, VAR_24->arch.amr);
  if (VAR_27 & VAR_1)
   VAR_42 >>= 1;
  if (VAR_42 & 1)
   return VAR_27 | VAR_2;
 }


 VAR_24->arch.pgfault_addr = VAR_25;
 VAR_24->arch.pgfault_index = VAR_30;
 VAR_24->arch.pgfault_hpte[0] = VAR_31;
 VAR_24->arch.pgfault_hpte[1] = VAR_32;
 VAR_24->arch.pgfault_cache = VAR_40;


 if ((VAR_32 & (VAR_6 | VAR_7)) ==
     (VAR_6 | VAR_7)) {
  if (!VAR_40) {
   unsigned int VAR_43 = 12;
   unsigned int VAR_44;

   if (VAR_26 & VAR_19) {
    VAR_44 = ((VAR_26 & VAR_20) >> 4);
    VAR_43 = VAR_23[VAR_44];
   }
   VAR_40 = FUNC_10(VAR_24);
   VAR_40->eaddr = VAR_25;
   VAR_40->slb_base_pshift = VAR_43;
   VAR_40->pte_index = VAR_30;
   VAR_40->hpte_v = VAR_31;
   VAR_40->hpte_r = VAR_32;
   VAR_40->rpte = VAR_33;
   VAR_40->slb_v = VAR_26;
   VAR_40->mmio_update = VAR_41;
  }
  if (VAR_28 && (VAR_24->arch.shregs.msr & VAR_15))
   return -2;
 }

 return -1;
}
