
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


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 long VAR_7 ;
 long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct kvm*) ;
 int FUNC_3 (struct kvm*,int *,unsigned long) ;
 unsigned long FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (unsigned long*) ;
 int FUNC_6 (struct kvm*,struct revmap_entry*) ;
 struct revmap_entry* FUNC_7 (int *) ;
 unsigned long* FUNC_8 (struct kvm*,unsigned long,unsigned long,int *,int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (unsigned long*) ;

long FUNC_12(struct kvm_vcpu *VAR_10, unsigned long VAR_11,
   unsigned long VAR_12)
{
 struct kvm *VAR_13 = VAR_10->kvm;
 __be64 *VAR_14;
 unsigned long VAR_15, VAR_16, VAR_17;
 struct revmap_entry *VAR_18;
 unsigned long *VAR_19;
 long VAR_20 = VAR_6;

 if (FUNC_2(VAR_13))
  return VAR_5;
 if (VAR_12 >= FUNC_4(&VAR_13->arch.hpt))
  return VAR_7;

 VAR_18 = FUNC_7(&VAR_13->arch.hpt.rev[VAR_12]);
 VAR_14 = (__be64 *)(VAR_13->arch.hpt.virt + (VAR_12 << 4));
 while (!FUNC_9(VAR_14, VAR_3))
  FUNC_1();
 VAR_15 = FUNC_0(VAR_14[0]);
 VAR_16 = FUNC_0(VAR_14[1]);
 if (!(VAR_15 & (VAR_4 | VAR_2)))
  goto out;

 VAR_17 = VAR_18->guest_rpte;
 if (VAR_18->guest_rpte & VAR_1) {
  VAR_18->guest_rpte &= ~VAR_1;
  FUNC_6(VAR_13, VAR_18);
 }
 if (VAR_15 & VAR_4) {
  VAR_17 |= VAR_16 & (VAR_1 | VAR_0);
  if (VAR_16 & VAR_1) {
   FUNC_3(VAR_13, VAR_14, VAR_12);
   VAR_19 = FUNC_8(VAR_13, VAR_15, VAR_17, ((void*)0), ((void*)0));
   if (VAR_19) {
    FUNC_5(VAR_19);
    *VAR_19 |= VAR_9;
    FUNC_11(VAR_19);
   }
  }
 }
 VAR_10->arch.regs.gpr[4] = VAR_17;
 VAR_20 = VAR_8;
 out:
 FUNC_10(VAR_14, VAR_15 & ~VAR_3);
 return VAR_20;
}
