
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {TYPE_6__* sie_block; struct gmap* gmap; } ;
struct TYPE_10__ {int instruction_essa; } ;
struct kvm_vcpu {TYPE_7__ arch; TYPE_9__* kvm; TYPE_1__ stat; } ;
struct gmap {TYPE_8__* mm; } ;
struct TYPE_12__ {int migration_mode; int use_cmma; } ;
struct TYPE_18__ {TYPE_5__* mm; int srcu; TYPE_3__ arch; } ;
struct TYPE_17__ {int mmap_sem; } ;
struct TYPE_11__ {int mask; } ;
struct TYPE_15__ {int cbrlo; int ipb; int ecb2; TYPE_2__ gpsw; } ;
struct TYPE_13__ {int uses_cmm; } ;
struct TYPE_14__ {int mmap_sem; TYPE_4__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct kvm_vcpu*,int,char*,int) ;
 int FUNC_1 (struct kvm_vcpu*,int) ;
 int FUNC_2 (struct gmap*,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct kvm_vcpu*,int ) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 unsigned long* FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (TYPE_9__*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct kvm_vcpu *VAR_8)
{

 int VAR_9 = (VAR_8->arch.sie_block->cbrlo & ~VAR_3) >> 3;
 unsigned long *VAR_10;
 struct gmap *VAR_11;
 int VAR_12, VAR_13;

 FUNC_0(VAR_8, 4, "ESSA: release %d pages", VAR_9);
 VAR_11 = VAR_8->arch.gmap;
 VAR_8->stat.instruction_essa++;
 if (!VAR_8->kvm->arch.use_cmma)
  return FUNC_5(VAR_8, VAR_4);

 if (VAR_8->arch.sie_block->gpsw.mask & VAR_7)
  return FUNC_5(VAR_8, VAR_5);

 VAR_13 = (VAR_8->arch.sie_block->ipb & 0xf0000000) >> 28;

 if (VAR_13 > (FUNC_10(VAR_8->kvm, 147) ? VAR_2
      : VAR_1))
  return FUNC_5(VAR_8, VAR_6);

 if (!VAR_8->kvm->arch.migration_mode) {
  if (VAR_8->kvm->mm->context.uses_cmm == 0) {
   FUNC_4(&VAR_8->kvm->mm->mmap_sem);
   VAR_8->kvm->mm->context.uses_cmm = 1;
   FUNC_12(&VAR_8->kvm->mm->mmap_sem);
  }
  VAR_8->arch.sie_block->ecb2 |= VAR_0;

  FUNC_6(VAR_8);
 } else {
  int VAR_14;

  FUNC_3(&VAR_8->kvm->mm->mmap_sem);
  VAR_14 = FUNC_8(&VAR_8->kvm->srcu);
  VAR_12 = FUNC_1(VAR_8, VAR_13);
  FUNC_9(&VAR_8->kvm->srcu, VAR_14);
  FUNC_11(&VAR_8->kvm->mm->mmap_sem);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_9 += VAR_12;
 }
 VAR_8->arch.sie_block->cbrlo &= VAR_3;
 VAR_10 = FUNC_7(VAR_8->arch.sie_block->cbrlo);
 FUNC_3(&VAR_11->mm->mmap_sem);
 for (VAR_12 = 0; VAR_12 < VAR_9; ++VAR_12)
  FUNC_2(VAR_11, VAR_10[VAR_12]);
 FUNC_11(&VAR_11->mm->mmap_sem);
 return 0;
}
