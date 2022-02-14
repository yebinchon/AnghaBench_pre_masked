
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ulong ;
typedef unsigned long u64 ;
typedef int u32 ;
struct TYPE_7__ {int xer; int ccr; } ;
struct TYPE_6__ {int (* mfsrin ) (struct kvm_vcpu*,int) ;int (* slbmfee ) (struct kvm_vcpu*,int) ;int (* slbmfev ) (struct kvm_vcpu*,int) ;int (* slbfee ) (struct kvm_vcpu*,int,int*) ;int (* slbia ) (struct kvm_vcpu*) ;int (* slbie ) (struct kvm_vcpu*,int) ;int (* slbmte ) (struct kvm_vcpu*,int,int) ;int (* tlbie ) (struct kvm_vcpu*,int,int) ;int (* mtsrin ) (struct kvm_vcpu*,int,int) ;} ;
struct TYPE_8__ {int hcall_needed; int fault_dar; int fault_dsisr; unsigned long texasr; int tfiar; int tfhar; TYPE_3__ regs; TYPE_2__ mmu; int papr_enabled; } ;
struct kvm_vcpu {TYPE_4__ arch; } ;
struct TYPE_5__ {int nr; int* args; } ;
struct kvm_run {int exit_reason; TYPE_1__ papr_hcall; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 unsigned long VAR_22 ;
 unsigned long VAR_23 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long) ;
 unsigned long VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 unsigned long VAR_28 ;
 unsigned long VAR_29 ;
 unsigned long VAR_30 ;
 unsigned long VAR_31 ;
 unsigned long VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (struct kvm_vcpu*,int ) ;
 int FUNC_11 (struct kvm_vcpu*,int ) ;
 int FUNC_12 (struct kvm_run*,struct kvm_vcpu*) ;
 int FUNC_13 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_14 (struct kvm_vcpu*) ;
 int FUNC_15 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_16 (struct kvm_vcpu*) ;
 int FUNC_17 (unsigned int,int,int) ;
 int FUNC_18 (struct kvm_vcpu*,int) ;
 unsigned long FUNC_19 (struct kvm_vcpu*) ;
 int FUNC_20 (struct kvm_vcpu*) ;
 int FUNC_21 (struct kvm_vcpu*) ;
 unsigned long FUNC_22 (struct kvm_vcpu*) ;
 int FUNC_23 (struct kvm_vcpu*,int) ;
 int FUNC_24 (struct kvm_vcpu*) ;
 int FUNC_25 (struct kvm_vcpu*,int) ;
 int FUNC_26 (struct kvm_vcpu*,int) ;
 int FUNC_27 (struct kvm_vcpu*,int) ;
 int FUNC_28 (struct kvm_vcpu*,int,int) ;
 int FUNC_29 (struct kvm_vcpu*,int) ;
 int FUNC_30 (struct kvm_vcpu*,int) ;
 int FUNC_31 (struct kvm_vcpu*,int ) ;
 int FUNC_32 (struct kvm_vcpu*,int*,int,int*,int) ;
 int FUNC_33 (struct kvm_vcpu*,int ) ;
 unsigned long FUNC_34 (int ) ;
 int FUNC_35 () ;
 int FUNC_36 () ;
 int FUNC_37 (struct kvm_vcpu*,int) ;
 int FUNC_38 (struct kvm_vcpu*,int) ;
 int FUNC_39 (struct kvm_vcpu*,int) ;
 int FUNC_40 (struct kvm_vcpu*,int) ;
 int FUNC_41 (struct kvm_vcpu*,unsigned int,int) ;
 int FUNC_42 (struct kvm_vcpu*,int,int) ;
 int FUNC_43 (struct kvm_vcpu*,int,int) ;
 int FUNC_44 (struct kvm_vcpu*,int,int) ;
 int FUNC_45 (struct kvm_vcpu*,int) ;
 int FUNC_46 (struct kvm_vcpu*) ;
 int FUNC_47 (struct kvm_vcpu*,int,int*) ;
 unsigned int FUNC_48 (int) ;
 int FUNC_49 () ;
 int FUNC_50 () ;

int FUNC_51(struct kvm_run *VAR_35, struct kvm_vcpu *VAR_36,
         unsigned int VAR_37, int *VAR_38)
{
 int VAR_39 = VAR_9;
 int VAR_40 = FUNC_8(VAR_37);
 int VAR_41 = FUNC_7(VAR_37);
 int VAR_42 = FUNC_5(VAR_37);
 int VAR_43 = FUNC_6(VAR_37);
 u32 VAR_44 = 0x44000002;

 switch (FUNC_4(VAR_37)) {
 case 0:
  VAR_39 = VAR_11;
  if ((FUNC_19(VAR_36) & VAR_19) &&
      (VAR_37 == FUNC_48(VAR_44))) {







   FUNC_28(VAR_36, 3, VAR_14);
   FUNC_31(VAR_36, FUNC_20(VAR_36) + 4);
   VAR_39 = VAR_9;
  }
  break;
 case 19:
  switch (FUNC_9(VAR_37)) {
  case 151:
  case 152: {
   unsigned long VAR_45 = FUNC_22(VAR_36);
   FUNC_31(VAR_36, FUNC_21(VAR_36));
   FUNC_29(VAR_36, VAR_45);
   *VAR_38 = 0;
   break;
  }

  default:
   VAR_39 = VAR_11;
   break;
  }
  break;
 case 31:
  switch (FUNC_9(VAR_37)) {
  case 146:
   FUNC_28(VAR_36, VAR_40, FUNC_19(VAR_36));
   break;
  case 142:
  {
   ulong VAR_46 = FUNC_18(VAR_36, VAR_41);
   if (VAR_37 & 0x10000) {
    ulong VAR_47 = FUNC_19(VAR_36);
    VAR_47 &= ~(VAR_21 | VAR_17);
    VAR_47 |= VAR_46 & (VAR_21 | VAR_17);
    FUNC_30(VAR_36, VAR_47);
   } else
    FUNC_29(VAR_36, VAR_46);
   break;
  }
  case 143:
   FUNC_29(VAR_36, FUNC_18(VAR_36, VAR_41));
   break;
  case 145:
  {
   int VAR_48;

   VAR_48 = FUNC_17(VAR_37, 12 + 32, 15 + 32);
   if (VAR_36->arch.mmu.mfsrin) {
    u32 VAR_49;
    VAR_49 = VAR_36->arch.mmu.mfsrin(VAR_36, VAR_48);
    FUNC_28(VAR_36, VAR_40, VAR_49);
   }
   break;
  }
  case 144:
  {
   int VAR_50;

   VAR_50 = (FUNC_18(VAR_36, VAR_43) >> 28) & 0xf;
   if (VAR_36->arch.mmu.mfsrin) {
    u32 VAR_51;
    VAR_51 = VAR_36->arch.mmu.mfsrin(VAR_36, VAR_50);
    FUNC_28(VAR_36, VAR_40, VAR_51);
   }
   break;
  }
  case 141:
   VAR_36->arch.mmu.mtsrin(VAR_36,
    (VAR_37 >> 16) & 0xf,
    FUNC_18(VAR_36, VAR_41));
   break;
  case 140:
   VAR_36->arch.mmu.mtsrin(VAR_36,
    (FUNC_18(VAR_36, VAR_43) >> 28) & 0xf,
    FUNC_18(VAR_36, VAR_41));
   break;
  case 131:
  case 130:
  {
   bool VAR_52 = (VAR_37 & 0x00200000) ? 1 : 0;
   ulong VAR_53 = FUNC_18(VAR_36, VAR_43);
   VAR_36->arch.mmu.tlbie(VAR_36, VAR_53, VAR_52);
   break;
  }
  case 148:
   break;
  case 134:
   if (!VAR_36->arch.mmu.slbmte)
    return VAR_11;

   VAR_36->arch.mmu.slbmte(VAR_36,
     FUNC_18(VAR_36, VAR_41),
     FUNC_18(VAR_36, VAR_43));
   break;
  case 137:
   if (!VAR_36->arch.mmu.slbie)
    return VAR_11;

   VAR_36->arch.mmu.slbie(VAR_36,
     FUNC_18(VAR_36, VAR_43));
   break;
  case 138:
   if (!VAR_36->arch.mmu.slbia)
    return VAR_11;

   VAR_36->arch.mmu.slbia(VAR_36);
   break;
  case 139:
   if (!(VAR_37 & 1) || !VAR_36->arch.mmu.slbfee) {
    return VAR_11;
   } else {
    ulong VAR_54, VAR_55;
    ulong VAR_56 = FUNC_16(VAR_36) & ~VAR_2;

    VAR_54 = FUNC_18(VAR_36, VAR_43);
    if (!VAR_36->arch.mmu.slbfee(VAR_36, VAR_54, &VAR_55))
     VAR_56 |= 2 << VAR_3;
    FUNC_28(VAR_36, VAR_40, VAR_55);

    VAR_56 |= (VAR_36->arch.regs.xer & 0x80000000) >>
     (31 - VAR_3);
    FUNC_25(VAR_36, VAR_56);
   }
   break;
  case 136:
   if (!VAR_36->arch.mmu.slbmfee) {
    VAR_39 = VAR_11;
   } else {
    ulong VAR_57, VAR_58;

    VAR_58 = FUNC_18(VAR_36, VAR_43);
    VAR_57 = VAR_36->arch.mmu.slbmfee(VAR_36, VAR_58);
    FUNC_28(VAR_36, VAR_40, VAR_57);
   }
   break;
  case 135:
   if (!VAR_36->arch.mmu.slbmfev) {
    VAR_39 = VAR_11;
   } else {
    ulong VAR_59, VAR_60;

    VAR_60 = FUNC_18(VAR_36, VAR_43);
    VAR_59 = VAR_36->arch.mmu.slbmfev(VAR_36, VAR_60);
    FUNC_28(VAR_36, VAR_40, VAR_59);
   }
   break;
  case 150:

   break;
  case 149:
  {
   ulong VAR_61 = FUNC_18(VAR_36, VAR_43);
   ulong VAR_62 = 0;
   ulong VAR_63, VAR_64;
   u32 VAR_65[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
   u32 VAR_66;
   int VAR_67;

   if (VAR_42)
    VAR_62 = FUNC_18(VAR_36, VAR_42);

   VAR_63 = (VAR_62 + VAR_61) & ~31ULL;
   if (!(FUNC_19(VAR_36) & VAR_22))
    VAR_63 &= 0xffffffff;
   VAR_64 = VAR_63;

   VAR_67 = FUNC_32(VAR_36, &VAR_63, 32, VAR_65, 1);
   if ((VAR_67 == -VAR_12) || (VAR_67 == -VAR_13)) {
    *VAR_38 = 0;
    FUNC_26(VAR_36, VAR_64);
    VAR_36->arch.fault_dar = VAR_64;

    VAR_66 = VAR_5;
    if (VAR_67 == -VAR_12)
     VAR_66 |= VAR_6;
    else if (VAR_67 == -VAR_13)
     VAR_66 |= VAR_7;

    FUNC_27(VAR_36, VAR_66);
    VAR_36->arch.fault_dsisr = VAR_66;

    FUNC_10(VAR_36,
     VAR_0);
   }

   break;
  }
  default:
   VAR_39 = VAR_11;
  }
  break;
 default:
  VAR_39 = VAR_11;
 }

 if (VAR_39 == VAR_11)
  VAR_39 = FUNC_12(VAR_35, VAR_36);

 return VAR_39;
}
