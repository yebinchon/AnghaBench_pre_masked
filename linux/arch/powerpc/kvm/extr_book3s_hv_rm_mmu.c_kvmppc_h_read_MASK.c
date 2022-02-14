
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
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 long VAR_7 ;
 long VAR_8 ;
 unsigned long VAR_9 ;
 long VAR_10 ;
 unsigned long FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 unsigned long FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_4 (struct kvm*) ;
 unsigned long FUNC_5 (TYPE_4__*) ;
 struct revmap_entry* FUNC_6 (int *) ;

long FUNC_7(struct kvm_vcpu *VAR_11, unsigned long VAR_12,
     unsigned long VAR_13)
{
 struct kvm *VAR_14 = VAR_11->kvm;
 __be64 *VAR_15;
 unsigned long VAR_16, VAR_17;
 int VAR_18, VAR_19 = 1;
 struct revmap_entry *VAR_20 = ((void*)0);

 if (FUNC_4(VAR_14))
  return VAR_7;
 if (VAR_13 >= FUNC_5(&VAR_14->arch.hpt))
  return VAR_8;
 if (VAR_12 & VAR_9) {
  VAR_13 &= ~3;
  VAR_19 = 4;
 }
 VAR_20 = FUNC_6(&VAR_14->arch.hpt.rev[VAR_13]);
 for (VAR_18 = 0; VAR_18 < VAR_19; ++VAR_18, ++VAR_13) {
  VAR_15 = (__be64 *)(VAR_14->arch.hpt.virt + (VAR_13 << 4));
  VAR_16 = FUNC_0(VAR_15[0]) & ~VAR_5;
  VAR_17 = FUNC_0(VAR_15[1]);
  if (FUNC_1(VAR_0)) {
   VAR_16 = FUNC_3(VAR_16, VAR_17);
   VAR_17 = FUNC_2(VAR_17);
  }
  if (VAR_16 & VAR_4) {
   VAR_16 &= ~VAR_4;
   VAR_16 |= VAR_6;
  }
  if (VAR_16 & VAR_6) {
   VAR_17 = VAR_20[VAR_18].guest_rpte | (VAR_17 & (VAR_3 | VAR_2));
   VAR_17 &= ~VAR_1;
  }
  VAR_11->arch.regs.gpr[4 + VAR_18 * 2] = VAR_16;
  VAR_11->arch.regs.gpr[5 + VAR_18 * 2] = VAR_17;
 }
 return VAR_10;
}
