
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int u64 ;
struct TYPE_16__ {TYPE_2__* sie_block; } ;
struct TYPE_14__ {int instruction_sske; } ;
struct kvm_vcpu {TYPE_6__* run; TYPE_3__ arch; int kvm; TYPE_1__ stat; } ;
struct TYPE_22__ {TYPE_10__* mm; } ;
struct TYPE_21__ {int mask; } ;
struct TYPE_20__ {scalar_t__ eaba; } ;
struct TYPE_17__ {int* gprs; } ;
struct TYPE_18__ {TYPE_4__ regs; } ;
struct TYPE_19__ {TYPE_5__ s; } ;
struct TYPE_15__ {int ipb; TYPE_8__ gpsw; } ;
struct TYPE_13__ {int mmap_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned long VAR_13 ;
 int FUNC_0 (TYPE_10__*,unsigned long,unsigned char,unsigned char*,unsigned char,unsigned char,unsigned char) ;
 TYPE_9__* VAR_14 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_9__*,TYPE_10__*,unsigned long,int ,int*) ;
 unsigned long FUNC_3 (int ,int ) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long) ;
 int FUNC_6 (struct kvm_vcpu*,int*,int*) ;
 int FUNC_7 (struct kvm_vcpu*,int ) ;
 unsigned long FUNC_8 (struct kvm_vcpu*,unsigned long) ;
 unsigned long FUNC_9 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_10 (struct kvm_vcpu*,int) ;
 TYPE_7__ FUNC_11 (TYPE_8__) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (struct kvm_vcpu*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct kvm_vcpu *VAR_15)
{
 unsigned char VAR_16 = VAR_15->arch.sie_block->ipb >> 28;
 unsigned long VAR_17, VAR_18;
 unsigned char VAR_19, VAR_20;
 int VAR_21, VAR_22;
 bool VAR_23;
 int VAR_24;

 VAR_15->stat.instruction_sske++;

 if (VAR_15->arch.sie_block->gpsw.mask & VAR_8)
  return FUNC_7(VAR_15, VAR_6);

 VAR_24 = FUNC_13(VAR_15);
 if (VAR_24)
  return VAR_24 != -VAR_0 ? VAR_24 : 0;

 if (!FUNC_12(VAR_15->kvm, 8))
  VAR_16 &= ~VAR_9;
 if (!FUNC_12(VAR_15->kvm, 10))
  VAR_16 &= ~(VAR_10 | VAR_11);
 if (!FUNC_12(VAR_15->kvm, 14))
  VAR_16 &= ~VAR_12;

 FUNC_6(VAR_15, &VAR_21, &VAR_22);

 VAR_19 = VAR_15->run->s.regs.gprs[VAR_21] & 0xfe;
 VAR_17 = VAR_15->run->s.regs.gprs[VAR_22] & VAR_3;
 VAR_17 = FUNC_8(VAR_15, VAR_17);
 if (VAR_16 & VAR_9) {

  VAR_18 = (VAR_17 + VAR_13) & ~(VAR_13 - 1);
 } else {
  VAR_17 = FUNC_9(VAR_15, VAR_17);
  VAR_18 = VAR_17 + VAR_4;
 }

 while (VAR_17 != VAR_18) {
  unsigned long VAR_25 = FUNC_3(VAR_15->kvm, FUNC_4(VAR_17));
  VAR_23 = 0;

  if (FUNC_5(VAR_25))
   return FUNC_7(VAR_15, VAR_5);

  FUNC_1(&VAR_14->mm->mmap_sem);
  VAR_24 = FUNC_0(VAR_14->mm, VAR_25, VAR_19, &VAR_20,
      VAR_16 & VAR_12, VAR_16 & VAR_11,
      VAR_16 & VAR_10);

  if (VAR_24 < 0) {
   VAR_24 = FUNC_2(VAR_14, VAR_14->mm, VAR_25,
           VAR_2, &VAR_23);
   VAR_24 = !VAR_24 ? -VAR_0 : VAR_24;
  }
  FUNC_14(&VAR_14->mm->mmap_sem);
  if (VAR_24 == -VAR_1)
   return FUNC_7(VAR_15, VAR_5);
  if (VAR_24 < 0)
   return VAR_24;
  VAR_17 += VAR_4;
 }

 if (VAR_16 & (VAR_10 | VAR_11)) {
  if (VAR_16 & VAR_9) {

   FUNC_10(VAR_15, 3);
  } else {
   FUNC_10(VAR_15, VAR_24);
   VAR_15->run->s.regs.gprs[VAR_21] &= ~0xff00UL;
   VAR_15->run->s.regs.gprs[VAR_21] |= (u64) VAR_20 << 8;
  }
 }
 if (VAR_16 & VAR_9) {
  if (FUNC_11(VAR_15->arch.sie_block->gpsw).eaba == VAR_7)
   VAR_15->run->s.regs.gprs[VAR_22] &= ~VAR_3;
  else
   VAR_15->run->s.regs.gprs[VAR_22] &= ~0xfffff000UL;
  VAR_18 = FUNC_8(VAR_15, VAR_18);
  VAR_15->run->s.regs.gprs[VAR_22] |= VAR_18;
 }
 return 0;
}
