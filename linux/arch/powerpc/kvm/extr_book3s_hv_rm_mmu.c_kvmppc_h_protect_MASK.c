
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u64 ;
struct revmap_entry {unsigned long guest_rpte; } ;
struct kvm_vcpu {struct kvm* kvm; } ;
struct TYPE_4__ {int * rev; scalar_t__ virt; } ;
struct TYPE_3__ {int mmio_update; TYPE_2__ hpt; } ;
struct kvm {TYPE_1__ arch; } ;
typedef int __be64 ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 long VAR_12 ;
 long VAR_13 ;
 long VAR_14 ;
 long VAR_15 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (int ) ;
 unsigned long FUNC_3 (unsigned long,unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (struct kvm*,unsigned long*,int,int ,int) ;
 int FUNC_8 (struct kvm*) ;
 scalar_t__ FUNC_9 (unsigned long) ;
 unsigned long FUNC_10 (unsigned long) ;
 unsigned long FUNC_11 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_12 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_13 (struct kvm*) ;
 unsigned long FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (struct kvm*,struct revmap_entry*) ;
 struct revmap_entry* FUNC_16 (int *) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int *,unsigned long) ;

long FUNC_19(struct kvm_vcpu *VAR_16, unsigned long VAR_17,
        unsigned long VAR_18, unsigned long VAR_19,
        unsigned long VAR_20)
{
 struct kvm *VAR_21 = VAR_16->kvm;
 __be64 *VAR_22;
 struct revmap_entry *VAR_23;
 unsigned long VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 u64 VAR_29, VAR_30;

 if (FUNC_13(VAR_21))
  return VAR_12;
 if (VAR_18 >= FUNC_14(&VAR_21->arch.hpt))
  return VAR_14;

 VAR_22 = (__be64 *)(VAR_21->arch.hpt.virt + (VAR_18 << 4));
 while (!FUNC_17(VAR_22, VAR_9))
  FUNC_5();
 VAR_24 = VAR_29 = FUNC_2(VAR_22[0]);
 if (FUNC_4(VAR_0))
  VAR_24 = FUNC_11(VAR_24, FUNC_2(VAR_22[1]));
 if ((VAR_24 & (VAR_8 | VAR_10)) == 0 ||
     ((VAR_17 & VAR_11) && (VAR_24 & ~0x7fUL) != VAR_19)) {
  FUNC_0(VAR_22, VAR_29);
  return VAR_13;
 }

 VAR_30 = FUNC_2(VAR_22[1]);
 VAR_28 = (VAR_17 << 55) & VAR_6;
 VAR_28 |= (VAR_17 << 48) & VAR_2;
 VAR_28 |= VAR_17 & (VAR_5 | VAR_4 | VAR_3);


 VAR_27 = VAR_6 | VAR_5 | VAR_4 |
  VAR_2 | VAR_3;
 VAR_23 = FUNC_16(&VAR_21->arch.hpt.rev[VAR_18]);
 if (VAR_23) {
  VAR_25 = (VAR_23->guest_rpte & ~VAR_27) | VAR_28;
  VAR_23->guest_rpte = VAR_25;
  FUNC_15(VAR_21, VAR_23);
 }


 if (VAR_24 & VAR_10) {





  VAR_25 = (VAR_30 & ~VAR_27) | VAR_28;
  if (FUNC_9(VAR_25) && !FUNC_9(VAR_30))
   VAR_25 = FUNC_10(VAR_25);

  if (VAR_25 != VAR_30) {
   VAR_26 = FUNC_3(VAR_24, VAR_25, VAR_18);
   VAR_22[0] = FUNC_6((VAR_29 & ~VAR_10) |
           VAR_8);
   FUNC_7(VAR_21, &VAR_26, 1, FUNC_8(VAR_21), 1);

   VAR_25 |= FUNC_2(VAR_22[1]) & (VAR_7 | VAR_1);
   VAR_22[1] = FUNC_6(VAR_25);
  }
 }
 FUNC_18(VAR_22, VAR_29 & ~VAR_9);
 asm volatile("ptesync" : : : "memory");
 if (FUNC_12(VAR_24, VAR_30))
  FUNC_1(&VAR_21->arch.mmio_update);

 return VAR_15;
}
