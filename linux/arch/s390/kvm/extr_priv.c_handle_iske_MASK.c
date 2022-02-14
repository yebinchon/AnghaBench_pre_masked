
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
struct TYPE_12__ {int instruction_iske; } ;
struct kvm_vcpu {TYPE_7__* run; int kvm; TYPE_4__ arch; TYPE_1__ stat; } ;
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
 int FUNC_2 (TYPE_8__*,unsigned long,unsigned char*) ;
 unsigned long FUNC_3 (int ,int ) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 int FUNC_6 (struct kvm_vcpu*,int*,int*) ;
 int FUNC_7 (struct kvm_vcpu*,int ) ;
 unsigned long FUNC_8 (struct kvm_vcpu*,unsigned long) ;
 unsigned long FUNC_9 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct kvm_vcpu *VAR_8)
{
 unsigned long VAR_9, VAR_10;
 unsigned char VAR_11;
 int VAR_12, VAR_13;
 bool VAR_14;
 int VAR_15;

 VAR_8->stat.instruction_iske++;

 if (VAR_8->arch.sie_block->gpsw.mask & VAR_6)
  return FUNC_7(VAR_8, VAR_5);

 VAR_15 = FUNC_10(VAR_8);
 if (VAR_15)
  return VAR_15 != -VAR_0 ? VAR_15 : 0;

 FUNC_6(VAR_8, &VAR_12, &VAR_13);

 VAR_9 = VAR_8->run->s.regs.gprs[VAR_13] & VAR_3;
 VAR_9 = FUNC_8(VAR_8, VAR_9);
 VAR_9 = FUNC_9(VAR_8, VAR_9);
 VAR_10 = FUNC_3(VAR_8->kvm, FUNC_4(VAR_9));
 if (FUNC_5(VAR_10))
  return FUNC_7(VAR_8, VAR_4);
retry:
 VAR_14 = 0;
 FUNC_0(&VAR_7->mm->mmap_sem);
 VAR_15 = FUNC_2(VAR_7->mm, VAR_10, &VAR_11);

 if (VAR_15) {
  VAR_15 = FUNC_1(VAR_7, VAR_7->mm, VAR_10,
          VAR_2, &VAR_14);
  if (!VAR_15) {
   FUNC_11(&VAR_7->mm->mmap_sem);
   goto retry;
  }
 }
 FUNC_11(&VAR_7->mm->mmap_sem);
 if (VAR_15 == -VAR_1)
  return FUNC_7(VAR_8, VAR_4);
 if (VAR_15 < 0)
  return VAR_15;
 VAR_8->run->s.regs.gprs[VAR_12] &= ~0xff;
 VAR_8->run->s.regs.gprs[VAR_12] |= VAR_11;
 return 0;
}
