
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_7__ {int nip; int ccr; } ;
struct TYPE_6__ {int srr1; int msr; int srr0; } ;
struct TYPE_8__ {int emul_inst; int hfscr; TYPE_3__ regs; TYPE_2__ shregs; TYPE_1__* vcore; int cfar; } ;
struct kvm_vcpu {TYPE_4__ arch; } ;
struct TYPE_5__ {int pcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;




 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct kvm_vcpu*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;

int FUNC_5(struct kvm_vcpu *VAR_13)
{
 u32 VAR_14 = VAR_13->arch.emul_inst;
 u64 VAR_15, VAR_16, VAR_17;
 int VAR_18;

 switch (VAR_14 & 0xfc0007ff) {
 case 129:

  VAR_15 = VAR_13->arch.shregs.srr1;

  if (!(FUNC_0(VAR_15) && (VAR_15 & VAR_6)))
   return 0;
  VAR_15 = FUNC_4(VAR_15);
  VAR_13->arch.shregs.msr = VAR_15;
  VAR_13->arch.cfar = VAR_13->arch.regs.nip - 4;
  VAR_13->arch.regs.nip = VAR_13->arch.shregs.srr0;
  return 1;

 case 130:

  VAR_16 = VAR_13->arch.shregs.msr;
  if ((VAR_16 & VAR_5) && (VAR_13->arch.vcore->pcr & VAR_9))
   return 0;

  if (!(VAR_13->arch.hfscr & VAR_2) ||
      ((VAR_16 & VAR_5) && !(FUNC_2(VAR_12) & VAR_1)))
   return 0;
  VAR_17 = FUNC_2(VAR_10);

  if (((VAR_17 >> 30) & 3) != 2)
   return 0;
  VAR_17 &= ~VAR_0;
  if (VAR_14 & (1 << 11))
   VAR_17 |= VAR_0;
  FUNC_3(VAR_10, VAR_17);
  VAR_16 = (VAR_16 & ~VAR_7) | VAR_8;
  VAR_13->arch.shregs.msr = VAR_16;
  VAR_13->arch.cfar = VAR_13->arch.regs.nip - 4;
  VAR_13->arch.regs.nip = FUNC_2(VAR_11);
  return 1;

 case 131:

  VAR_18 = (VAR_14 >> 21) & 0x1f;
  VAR_15 = FUNC_1(VAR_13, VAR_18);
  VAR_16 = VAR_13->arch.shregs.msr;

  if (!(FUNC_0(VAR_15) && (VAR_15 & VAR_6)))
   return 0;

  VAR_15 = (VAR_15 & ~VAR_4) | (VAR_16 & VAR_4);
  VAR_15 = FUNC_4(VAR_15);
  VAR_13->arch.shregs.msr = VAR_15;
  return 1;

 case 128:

  VAR_16 = VAR_13->arch.shregs.msr;

  if ((VAR_16 & VAR_5) && (VAR_13->arch.vcore->pcr & VAR_9))
   return 0;

  if (!(VAR_13->arch.hfscr & VAR_3) || !(VAR_16 & VAR_6))
   return 0;

  if (VAR_14 & (1 << 21))
   VAR_13->arch.shregs.msr = (VAR_16 & ~VAR_7) | VAR_8;

  VAR_13->arch.regs.ccr = (VAR_13->arch.regs.ccr & 0x0fffffff) |
   0x20000000;
  return 1;
 }

 return 0;
}
