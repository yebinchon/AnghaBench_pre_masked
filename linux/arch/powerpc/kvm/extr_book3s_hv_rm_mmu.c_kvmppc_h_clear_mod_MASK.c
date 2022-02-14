
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct revmap_entry {unsigned long guest_rpte; } ;
struct TYPE_6__ {unsigned long* gpr; } ;
struct TYPE_7__ {TYPE_2__ regs; } ;
struct kvm_vcpu {TYPE_3__ arch; struct kvm* kvm; } ;
struct TYPE_8__ {scalar_t__ virt; int * rev; } ;
struct TYPE_5__ {TYPE_4__ hpt; } ;
struct kvm {TYPE_1__ arch; } ;
typedef int __be64 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 long VAR_7 ;
 long VAR_8 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct kvm*) ;
 unsigned long FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (struct kvm*,int *,unsigned long) ;
 int FUNC_7 (struct kvm*,unsigned long,unsigned long) ;
 int FUNC_8 (struct kvm*,struct revmap_entry*) ;
 struct revmap_entry* FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

long FUNC_12(struct kvm_vcpu *VAR_9, unsigned long VAR_10,
   unsigned long VAR_11)
{
 struct kvm *VAR_12 = VAR_9->kvm;
 __be64 *VAR_13;
 unsigned long VAR_14, VAR_15, VAR_16;
 struct revmap_entry *VAR_17;
 long VAR_18 = VAR_6;

 if (FUNC_4(VAR_12))
  return VAR_5;
 if (VAR_11 >= FUNC_5(&VAR_12->arch.hpt))
  return VAR_7;

 VAR_17 = FUNC_9(&VAR_12->arch.hpt.rev[VAR_11]);
 VAR_13 = (__be64 *)(VAR_12->arch.hpt.virt + (VAR_11 << 4));
 while (!FUNC_10(VAR_13, VAR_3))
  FUNC_1();
 VAR_14 = FUNC_0(VAR_13[0]);
 VAR_15 = FUNC_0(VAR_13[1]);
 if (!(VAR_14 & (VAR_4 | VAR_2)))
  goto out;

 VAR_16 = VAR_17->guest_rpte;
 if (VAR_16 & VAR_0) {
  VAR_17->guest_rpte &= ~VAR_0;
  FUNC_8(VAR_12, VAR_17);
 }
 if (VAR_14 & VAR_4) {

  VAR_13[0] |= FUNC_2(VAR_2);
  FUNC_6(VAR_12, VAR_13, VAR_11);
  VAR_15 = FUNC_0(VAR_13[1]);
  VAR_16 |= VAR_15 & (VAR_1 | VAR_0);
  if (VAR_15 & VAR_0) {
   VAR_13[1] = FUNC_2(VAR_15 & ~VAR_0);
   FUNC_3();
   FUNC_7(VAR_12, VAR_14, VAR_16);
  }
 }
 VAR_9->arch.regs.gpr[4] = VAR_16;
 VAR_18 = VAR_8;
 out:
 FUNC_11(VAR_13, VAR_14 & ~VAR_3);
 return VAR_18;
}
