
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


struct TYPE_16__ {TYPE_2__* sie_block; int pgm; } ;
struct TYPE_14__ {int instruction_pfmf; } ;
struct kvm_vcpu {TYPE_5__* run; TYPE_3__ arch; int kvm; TYPE_1__ stat; } ;
struct TYPE_22__ {TYPE_10__* mm; } ;
struct TYPE_21__ {int mask; } ;
struct TYPE_20__ {scalar_t__ eaba; } ;
struct TYPE_17__ {int* gprs; } ;
struct TYPE_19__ {TYPE_4__ regs; } ;
struct TYPE_18__ {TYPE_6__ s; } ;
struct TYPE_15__ {TYPE_8__ gpsw; } ;
struct TYPE_13__ {int mmap_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (TYPE_10__*,unsigned long,unsigned char,int *,int,int,int) ;
 TYPE_9__* VAR_22 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_9__*,TYPE_10__*,unsigned long,int ,int*) ;
 unsigned long FUNC_3 (int ,int ) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (int ,unsigned long,unsigned long) ;
 scalar_t__ FUNC_6 (unsigned long) ;
 scalar_t__ FUNC_7 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_8 (struct kvm_vcpu*,int*,int*) ;
 int FUNC_9 (struct kvm_vcpu*,int *) ;
 int FUNC_10 (struct kvm_vcpu*,int ) ;
 unsigned long FUNC_11 (struct kvm_vcpu*,unsigned long) ;
 unsigned long FUNC_12 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_13 (struct kvm_vcpu*) ;
 TYPE_7__ FUNC_14 (TYPE_8__) ;
 scalar_t__ FUNC_15 (int ,int) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static int FUNC_17(struct kvm_vcpu *VAR_23)
{
 bool VAR_24 = 0, VAR_25 = 0, VAR_26;
 int VAR_27, VAR_28;
 unsigned long VAR_29, VAR_30;
 unsigned char VAR_31;

 VAR_23->stat.instruction_pfmf++;

 FUNC_8(VAR_23, &VAR_27, &VAR_28);

 if (!FUNC_15(VAR_23->kvm, 8))
  return FUNC_10(VAR_23, VAR_14);

 if (VAR_23->arch.sie_block->gpsw.mask & VAR_19)
  return FUNC_10(VAR_23, VAR_15);

 if (VAR_23->run->s.regs.gprs[VAR_27] & VAR_11)
  return FUNC_10(VAR_23, VAR_16);


 if (VAR_23->run->s.regs.gprs[VAR_27] & VAR_10 &&
     !FUNC_15(VAR_23->kvm, 14))
  return FUNC_10(VAR_23, VAR_16);


 if (VAR_23->run->s.regs.gprs[VAR_27] & VAR_12 &&
     FUNC_15(VAR_23->kvm, 10)) {
  VAR_24 = VAR_23->run->s.regs.gprs[VAR_27] & VAR_9;
  VAR_25 = VAR_23->run->s.regs.gprs[VAR_27] & VAR_8;
 }

 VAR_26 = VAR_23->run->s.regs.gprs[VAR_27] & VAR_10;
 VAR_31 = VAR_23->run->s.regs.gprs[VAR_27] & VAR_7;
 VAR_29 = VAR_23->run->s.regs.gprs[VAR_28] & VAR_3;
 VAR_29 = FUNC_11(VAR_23, VAR_29);

 if (VAR_23->run->s.regs.gprs[VAR_27] & VAR_5) {
  if (FUNC_7(VAR_23, VAR_29))
   return FUNC_9(VAR_23, &VAR_23->arch.pgm);
 }

 switch (VAR_23->run->s.regs.gprs[VAR_27] & VAR_6) {
 case 0x00000000:

  VAR_29 = FUNC_12(VAR_23, VAR_29);
  VAR_30 = (VAR_29 + VAR_4) & ~(VAR_4 - 1);
  break;
 case 0x00001000:
  VAR_30 = (VAR_29 + VAR_21) & ~(VAR_21 - 1);
  break;
 case 0x00002000:


  if (!FUNC_15(VAR_23->kvm, 78) ||
      FUNC_14(VAR_23->arch.sie_block->gpsw).eaba == VAR_17)
   return FUNC_10(VAR_23, VAR_16);
  VAR_30 = (VAR_29 + VAR_20) & ~(VAR_20 - 1);
  break;
 default:
  return FUNC_10(VAR_23, VAR_16);
 }

 while (VAR_29 != VAR_30) {
  unsigned long VAR_32;
  bool VAR_33 = 0;


  VAR_32 = FUNC_3(VAR_23->kvm, FUNC_4(VAR_29));
  if (FUNC_6(VAR_32))
   return FUNC_10(VAR_23, VAR_13);

  if (VAR_23->run->s.regs.gprs[VAR_27] & VAR_5) {
   if (FUNC_5(VAR_23->kvm, VAR_29, VAR_4))
    return FUNC_10(VAR_23, VAR_13);
  }

  if (VAR_23->run->s.regs.gprs[VAR_27] & VAR_12) {
   int VAR_34 = FUNC_13(VAR_23);

   if (VAR_34)
    return VAR_34;
   FUNC_1(&VAR_22->mm->mmap_sem);
   VAR_34 = FUNC_0(VAR_22->mm, VAR_32,
       VAR_31, ((void*)0), VAR_26, VAR_24, VAR_25);
   if (VAR_34 < 0) {
    VAR_34 = FUNC_2(VAR_22, VAR_22->mm, VAR_32,
            VAR_2, &VAR_33);
    VAR_34 = !VAR_34 ? -VAR_0 : VAR_34;
   }
   FUNC_16(&VAR_22->mm->mmap_sem);
   if (VAR_34 == -VAR_1)
    return FUNC_10(VAR_23, VAR_13);
   if (VAR_34 == -VAR_0)
    continue;
   if (VAR_34 < 0)
    return VAR_34;
  }
  VAR_29 += VAR_4;
 }
 if (VAR_23->run->s.regs.gprs[VAR_27] & VAR_6) {
  if (FUNC_14(VAR_23->arch.sie_block->gpsw).eaba == VAR_18) {
   VAR_23->run->s.regs.gprs[VAR_28] = VAR_30;
  } else {
   VAR_23->run->s.regs.gprs[VAR_28] &= ~0xffffffffUL;
   VAR_30 = FUNC_11(VAR_23, VAR_30);
   VAR_23->run->s.regs.gprs[VAR_28] |= VAR_30;
  }
 }
 return 0;
}
