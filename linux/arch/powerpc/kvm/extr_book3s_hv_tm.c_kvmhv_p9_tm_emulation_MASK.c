
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
struct TYPE_5__ {int msr; int srr1; int srr0; } ;
struct TYPE_8__ {int ccr; int nip; } ;
struct TYPE_7__ {int emul_inst; int hfscr; int fscr; int bescr; int orig_texasr; int texasr; TYPE_1__ shregs; TYPE_4__ regs; TYPE_2__* vcore; int ebbrr; int cfar; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_6__ {int pcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;






 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*,int) ;
 int FUNC_7 (struct kvm_vcpu*,int ) ;
 int FUNC_8 (struct kvm_vcpu*,int ) ;
 int FUNC_9 (struct kvm_vcpu*,int) ;
 int FUNC_10 (int) ;

int FUNC_11(struct kvm_vcpu *VAR_19)
{
 u32 VAR_20 = VAR_19->arch.emul_inst;
 u64 VAR_21 = VAR_19->arch.shregs.msr;
 u64 VAR_22, VAR_23;
 int VAR_24, VAR_25;

 switch (VAR_20 & 0xfc0007ff) {
 case 131:

  VAR_22 = VAR_19->arch.shregs.srr1;

  FUNC_3(!(FUNC_1(VAR_21) &&
          FUNC_2(VAR_22) &&
          (VAR_22 & VAR_9)));
  VAR_22 = FUNC_10(VAR_22);
  VAR_19->arch.shregs.msr = VAR_22;
  VAR_19->arch.cfar = VAR_19->arch.regs.nip - 4;
  VAR_19->arch.regs.nip = VAR_19->arch.shregs.srr0;
  return VAR_15;

 case 132:
  if ((VAR_21 & VAR_8) && (VAR_19->arch.vcore->pcr & VAR_14)) {

   FUNC_8(VAR_19, VAR_16);
   return VAR_15;
  }

  if (!(VAR_19->arch.hfscr & VAR_5)) {

   FUNC_8(VAR_19, VAR_16);
   return VAR_15;
  }
  if ((VAR_21 & VAR_8) && !(VAR_19->arch.fscr & VAR_2)) {

   VAR_19->arch.fscr = (VAR_19->arch.fscr & ~(0xffull << 56)) |
    ((u64)VAR_3 << 56);
   FUNC_7(VAR_19, VAR_1);
   return VAR_15;
  }
  VAR_23 = VAR_19->arch.bescr;

  FUNC_3(!(FUNC_1(VAR_21) &&
          ((VAR_23 >> 30) & 3) == 2));
  VAR_23 &= ~VAR_0;
  if (VAR_20 & (1 << 11))
   VAR_23 |= VAR_0;
  VAR_19->arch.bescr = VAR_23;
  VAR_21 = (VAR_21 & ~VAR_10) | VAR_13;
  VAR_19->arch.shregs.msr = VAR_21;
  VAR_19->arch.cfar = VAR_19->arch.regs.nip - 4;
  VAR_19->arch.regs.nip = VAR_19->arch.ebbrr;
  return VAR_15;

 case 133:

  VAR_25 = (VAR_20 >> 21) & 0x1f;
  VAR_22 = FUNC_9(VAR_19, VAR_25);

  FUNC_3(!(FUNC_1(VAR_21) &&
          FUNC_2(VAR_22) &&
          (VAR_22 & VAR_9)));

  VAR_22 = (VAR_22 & ~VAR_7) | (VAR_21 & VAR_7);
  VAR_22 = FUNC_10(VAR_22);
  VAR_19->arch.shregs.msr = VAR_22;
  return VAR_15;

 case 128:

  if ((VAR_21 & VAR_8) && (VAR_19->arch.vcore->pcr & VAR_14)) {

   FUNC_8(VAR_19, VAR_16);
   return VAR_15;
  }

  if (!(VAR_19->arch.hfscr & VAR_6)) {

   FUNC_8(VAR_19, VAR_16);
   return VAR_15;
  }
  if (!(VAR_21 & VAR_9)) {

   VAR_19->arch.fscr = (VAR_19->arch.fscr & ~(0xffull << 56)) |
    ((u64)VAR_4 << 56);
   FUNC_7(VAR_19,
      VAR_1);
   return VAR_15;
  }

  VAR_19->arch.regs.ccr = (VAR_19->arch.regs.ccr & 0x0fffffff) |
   (((VAR_21 & VAR_10) >> VAR_12) << 29);

  if (VAR_20 & (1 << 21)) {
   if (FUNC_1(VAR_21))
    VAR_21 = (VAR_21 & ~VAR_10) | VAR_13;
  } else {
   if (FUNC_2(VAR_21))
    VAR_21 = (VAR_21 & ~VAR_10) | VAR_11;
  }
  VAR_19->arch.shregs.msr = VAR_21;
  return VAR_15;

 case 129:

  if (!(VAR_19->arch.hfscr & VAR_6)) {

   FUNC_8(VAR_19, VAR_16);
   return VAR_15;
  }
  if (!(VAR_21 & VAR_9)) {

   VAR_19->arch.fscr = (VAR_19->arch.fscr & ~(0xffull << 56)) |
    ((u64)VAR_4 << 56);
   FUNC_7(VAR_19,
      VAR_1);
   return VAR_15;
  }

  if (!FUNC_0(VAR_21)) {
   FUNC_8(VAR_19, VAR_17);
   return VAR_15;
  }

  if (!(VAR_19->arch.orig_texasr & VAR_18)) {
   VAR_24 = (VAR_20 >> 16) & 0x1f;
   if (VAR_24)
    VAR_24 = FUNC_9(VAR_19, VAR_24) & 0xff;
   FUNC_6(VAR_19, VAR_24);
  }

  FUNC_4(VAR_19);


  VAR_19->arch.regs.ccr = (VAR_19->arch.regs.ccr & 0x0fffffff) |
   (((VAR_21 & VAR_10) >> VAR_12) << 29);
  VAR_19->arch.shregs.msr &= ~VAR_10;
  return VAR_15;

 case 130:


  if (!(VAR_19->arch.hfscr & VAR_6)) {

   FUNC_8(VAR_19, VAR_16);
   return VAR_15;
  }
  if (!(VAR_21 & VAR_9)) {

   VAR_19->arch.fscr = (VAR_19->arch.fscr & ~(0xffull << 56)) |
    ((u64)VAR_4 << 56);
   FUNC_7(VAR_19,
      VAR_1);
   return VAR_15;
  }

  if (FUNC_0(VAR_21) || !(VAR_19->arch.texasr & VAR_18)) {
   FUNC_8(VAR_19, VAR_17);
   return VAR_15;
  }

  FUNC_5(VAR_19);


  VAR_19->arch.regs.ccr = (VAR_19->arch.regs.ccr & 0x0fffffff) |
   (((VAR_21 & VAR_10) >> VAR_12) << 29);
  VAR_19->arch.shregs.msr = VAR_21 | VAR_11;
  return VAR_15;
 }


 FUNC_3(1);
 return VAR_15;
}
