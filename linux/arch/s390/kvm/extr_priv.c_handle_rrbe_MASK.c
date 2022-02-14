
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {TYPE_3__* sie_block; } ;
struct TYPE_12__ {int instruction_rrbe; } ;
struct kvm_vcpu {int kvm; TYPE_7__* run; TYPE_4__ arch; TYPE_1__ stat; } ;
struct TYPE_20__ {TYPE_8__* mm; } ;
struct TYPE_19__ {int mmap_sem; } ;
struct TYPE_16__ {unsigned long* gprs; } ;
struct TYPE_17__ {TYPE_5__ regs; } ;
struct TYPE_18__ {TYPE_6__ s; } ;
struct TYPE_13__ {int mask; } ;
struct TYPE_14__ {TYPE_2__ gpsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_9__* VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_9__*,TYPE_8__*,unsigned long,int ,int*) ;
 unsigned long FUNC_2 (int ,int ) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 int FUNC_5 (struct kvm_vcpu*,int*,int*) ;
 int FUNC_6 (struct kvm_vcpu*,int ) ;
 unsigned long FUNC_7 (struct kvm_vcpu*,unsigned long) ;
 unsigned long FUNC_8 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_9 (struct kvm_vcpu*,int) ;
 int FUNC_10 (TYPE_8__*,unsigned long) ;
 int FUNC_11 (struct kvm_vcpu*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct kvm_vcpu *VAR_8)
{
 unsigned long VAR_9, VAR_10;
 int VAR_11, VAR_12;
 bool VAR_13;
 int VAR_14;

 VAR_8->stat.instruction_rrbe++;

 if (VAR_8->arch.sie_block->gpsw.mask & VAR_6)
  return FUNC_6(VAR_8, VAR_5);

 VAR_14 = FUNC_11(VAR_8);
 if (VAR_14)
  return VAR_14 != -VAR_0 ? VAR_14 : 0;

 FUNC_5(VAR_8, &VAR_11, &VAR_12);

 VAR_10 = VAR_8->run->s.regs.gprs[VAR_12] & VAR_3;
 VAR_10 = FUNC_7(VAR_8, VAR_10);
 VAR_10 = FUNC_8(VAR_8, VAR_10);
 VAR_9 = FUNC_2(VAR_8->kvm, FUNC_3(VAR_10));
 if (FUNC_4(VAR_9))
  return FUNC_6(VAR_8, VAR_4);
retry:
 VAR_13 = 0;
 FUNC_0(&VAR_7->mm->mmap_sem);
 VAR_14 = FUNC_10(VAR_7->mm, VAR_9);
 if (VAR_14 < 0) {
  VAR_14 = FUNC_1(VAR_7, VAR_7->mm, VAR_9,
          VAR_2, &VAR_13);
  if (!VAR_14) {
   FUNC_12(&VAR_7->mm->mmap_sem);
   goto retry;
  }
 }
 FUNC_12(&VAR_7->mm->mmap_sem);
 if (VAR_14 == -VAR_1)
  return FUNC_6(VAR_8, VAR_4);
 if (VAR_14 < 0)
  return VAR_14;
 FUNC_9(VAR_8, VAR_14);
 return 0;
}
