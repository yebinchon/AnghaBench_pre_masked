
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct revmap_entry {unsigned long guest_rpte; } ;
struct kvm_hpt_info {int order; struct revmap_entry* rev; scalar_t__ virt; } ;
struct kvm_resize_hpt {struct kvm_hpt_info hpt; struct kvm* kvm; } ;
struct TYPE_4__ {unsigned long* rmap; } ;
struct kvm_memory_slot {unsigned long base_gfn; TYPE_2__ arch; } ;
struct TYPE_3__ {struct kvm_hpt_info hpt; } ;
struct kvm {int srcu; TYPE_1__ arch; } ;
typedef int __be64 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 struct kvm_memory_slot* FUNC_2 (int ,unsigned long) ;
 unsigned long FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned long) ;
 unsigned long FUNC_7 (unsigned long) ;
 unsigned long FUNC_8 (unsigned long,unsigned long) ;
 unsigned long FUNC_9 (unsigned long,unsigned long) ;
 unsigned long FUNC_10 (unsigned long) ;
 unsigned long FUNC_11 (unsigned long,unsigned long) ;
 int FUNC_12 (struct kvm*) ;
 unsigned long FUNC_13 (unsigned long,unsigned long) ;
 int FUNC_14 (unsigned long,unsigned long) ;
 int FUNC_15 (struct kvm*,unsigned long,struct kvm_memory_slot*,unsigned long*,unsigned long) ;
 int FUNC_16 (unsigned long*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (unsigned long*) ;

__attribute__((used)) static unsigned long FUNC_22(struct kvm_resize_hpt *VAR_10,
         unsigned long VAR_11)
{
 struct kvm *VAR_12 = VAR_10->kvm;
 struct kvm_hpt_info *VAR_13 = &VAR_12->arch.hpt;
 struct kvm_hpt_info *VAR_14 = &VAR_10->hpt;
 unsigned long VAR_15 = (1ULL << (VAR_13->order - 7)) - 1;
 unsigned long VAR_16 = (1ULL << (VAR_14->order - 7)) - 1;
 __be64 *VAR_17, *VAR_18;
 unsigned long VAR_19, VAR_20, VAR_21;
 int VAR_22;
 struct revmap_entry *VAR_23;
 unsigned long VAR_24, VAR_25, VAR_26, VAR_27;
 unsigned long VAR_28, VAR_29, VAR_30;
 int VAR_31;

 VAR_17 = (__be64 *)(VAR_13->virt + (VAR_11 << 4));




 VAR_19 = FUNC_3(VAR_17[0]);
 if (!(VAR_19 & VAR_9) && !(VAR_19 & VAR_5))
  return 0;

 while (!FUNC_19(VAR_17, VAR_7))
  FUNC_5();

 VAR_19 = FUNC_3(VAR_17[0]);

 VAR_22 = 0;
 if (!(VAR_19 & VAR_9) && !(VAR_19 & VAR_5))

  goto out;

 if (FUNC_4(VAR_0)) {
  VAR_20 = FUNC_3(VAR_17[1]);
  VAR_19 = FUNC_8(VAR_19, VAR_20);
 }


 VAR_23 = &VAR_13->rev[VAR_11];
 VAR_21 = VAR_23->guest_rpte;

 VAR_22 = -VAR_1;
 VAR_24 = FUNC_13(VAR_19, VAR_21);
 if (!VAR_24)
  goto out;

 if (VAR_19 & VAR_9) {
  unsigned long VAR_32 = FUNC_11(VAR_21, VAR_24);
  int VAR_33 = FUNC_17(&VAR_12->srcu);
  struct kvm_memory_slot *VAR_34 =
   FUNC_2(FUNC_12(VAR_12), VAR_32);

  if (VAR_34) {
   unsigned long *VAR_35;
   VAR_35 = &VAR_34->arch.rmap[VAR_32 - VAR_34->base_gfn];

   FUNC_16(VAR_35);
   FUNC_15(VAR_12, VAR_11, VAR_34, VAR_35, VAR_32);
   FUNC_21(VAR_35);
  }

  FUNC_18(&VAR_12->srcu, VAR_33);
 }


 VAR_19 = FUNC_3(VAR_17[0]);
 FUNC_0(VAR_19 & VAR_9);
 FUNC_0(!(VAR_19 & VAR_5));

 VAR_22 = 0;
 if (!(VAR_19 & VAR_6))
  goto out;

 VAR_20 = FUNC_3(VAR_17[1]);

 if (FUNC_4(VAR_0)) {
  VAR_19 = FUNC_8(VAR_19, VAR_20);
  VAR_20 = FUNC_7(VAR_20);
 }

 VAR_31 = FUNC_14(VAR_19, VAR_20);
 VAR_25 = FUNC_1(VAR_19) & ~(((1ul << VAR_31) - 1) >> 23);
 VAR_26 = VAR_11 / VAR_3;
 if (VAR_19 & VAR_8)
  VAR_26 = ~VAR_26;

 if (!(VAR_19 & VAR_4)) {
  unsigned long VAR_36, VAR_37;


  VAR_36 = (VAR_25 & 0x1f) << 23;
  VAR_37 = VAR_25 >> 5;

  if (VAR_31 < 23)
   VAR_36 |= ((VAR_37 ^ VAR_26) & VAR_15) << VAR_31;

  VAR_27 = VAR_37 ^ (VAR_36 >> VAR_31);
 } else {
  unsigned long VAR_38, VAR_39;


  VAR_38 = (VAR_25 & 0x1ffff) << 23;
  VAR_39 = VAR_25 >> 17;
  if (VAR_31 < 23)
   VAR_38 |= ((VAR_39 ^ (VAR_39 << 25) ^ VAR_26) & VAR_15) << VAR_31;

  VAR_27 = VAR_39 ^ (VAR_39 << 25) ^ (VAR_38 >> VAR_31);
 }

 VAR_29 = VAR_27 & VAR_16;
 if (VAR_19 & VAR_8)
  VAR_29 = ~VAR_27 & VAR_16;

 VAR_28 = VAR_29 * VAR_3 + (VAR_11 % VAR_3);
 VAR_18 = (__be64 *)(VAR_14->virt + (VAR_28 << 4));

 VAR_30 = FUNC_3(VAR_18[0]);
 if (FUNC_4(VAR_0)) {
  unsigned long VAR_40 = FUNC_3(VAR_18[1]);
  VAR_30 = FUNC_8(VAR_30, VAR_40);
 }

 if (VAR_30 & (VAR_9 | VAR_5)) {
  FUNC_0(VAR_14->order >= VAR_13->order);

  if (VAR_30 & VAR_6) {
   if (VAR_19 & VAR_6)

    VAR_22 = -VAR_2;

   goto out;
  }


 }

 if (FUNC_4(VAR_0)) {
  VAR_20 = FUNC_9(VAR_19, VAR_20);
  VAR_19 = FUNC_10(VAR_19);
 }

 VAR_18[1] = FUNC_6(VAR_20);
 VAR_14->rev[VAR_28].guest_rpte = VAR_21;

 VAR_18[0] = FUNC_6(VAR_19);
 FUNC_20(VAR_18, VAR_19);

out:
 FUNC_20(VAR_17, VAR_19);
 return VAR_22;
}
