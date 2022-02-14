
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_5__ {int nip; } ;
struct TYPE_6__ {int epr_flags; int ivpr; int* ivor; scalar_t__ irq_type; int epcr; int pending_exceptions; int queued_dear; int queued_esr; TYPE_2__ regs; TYPE_1__* shared; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
typedef enum int_class { ____Placeholder_int_class } int_class ;
struct TYPE_4__ {int critical; int msr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (unsigned int,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*,int) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*,int ) ;
 int FUNC_7 (struct kvm_vcpu*,int ) ;
 int FUNC_8 (struct kvm_vcpu*,int) ;
 int FUNC_9 (struct kvm_vcpu*,int) ;
 int FUNC_10 (struct kvm_vcpu*,int,int) ;
 int FUNC_11 (struct kvm_vcpu*,int,int) ;
 int FUNC_12 (struct kvm_vcpu*,int,int) ;
 int FUNC_13 (struct kvm_vcpu*,int,int) ;

__attribute__((used)) static int FUNC_14(struct kvm_vcpu *VAR_16,
                                        unsigned int VAR_17)
{
 int VAR_18 = 0;
 ulong VAR_19 = 0;
 bool VAR_20 = 0, VAR_21 = 0, VAR_22 = 0;
 ulong VAR_23 = VAR_16->arch.shared->critical;
 ulong VAR_24 = FUNC_4(VAR_16, 1);
 bool VAR_25;
 bool VAR_26 = 0;
 enum int_class VAR_27;
 ulong VAR_28 = VAR_16->arch.shared->msr;


 if (!(VAR_16->arch.shared->msr & VAR_14)) {
  VAR_23 &= 0xffffffff;
  VAR_24 &= 0xffffffff;
 }


 VAR_25 = (VAR_23 == VAR_24);

 VAR_25 = VAR_25 && !(VAR_16->arch.shared->msr & VAR_13);

 if (VAR_17 == VAR_2) {
  VAR_17 = 143;
  VAR_26 = 1;
 }

 if ((VAR_17 == 143) && VAR_16->arch.epr_flags)
  VAR_22 = 1;

 switch (VAR_17) {
 case 144:
 case 149:
 case 154:
  VAR_21 = 1;

 case 140:
 case 137:
  VAR_20 = 1;

 case 139:
 case 133:
 case 141:
 case 151:
  VAR_18 = 1;
  VAR_19 = VAR_8 | VAR_12 | VAR_10;
  VAR_27 = 128;
  break;
 case 132:
 case 150:
 case 147:
  VAR_18 = VAR_16->arch.shared->msr & VAR_8;
  VAR_18 = VAR_18 && !VAR_25;
  VAR_19 = VAR_12;
  VAR_27 = 131;
  break;
 case 138:
  VAR_18 = VAR_16->arch.shared->msr & VAR_12;
  VAR_18 = VAR_18 && !VAR_25;
  VAR_27 = 129;
  break;
 case 145:
 case 142:
  VAR_26 = 1;

 case 143:
 case 148:
  VAR_18 = VAR_16->arch.shared->msr & VAR_11;
  VAR_18 = VAR_18 && !VAR_25;
  VAR_19 = VAR_8 | VAR_12 | VAR_10;
  VAR_27 = 128;
  break;
 case 146:
  VAR_18 = VAR_16->arch.shared->msr & VAR_10;
  VAR_18 = VAR_18 && !VAR_25;
  VAR_19 = VAR_12;
  if (FUNC_2(VAR_3))
   VAR_27 = 130;
  else
   VAR_27 = 131;

  break;
 }

 if (VAR_18) {
  switch (VAR_27) {
  case 128:
   FUNC_13(VAR_16, VAR_16->arch.regs.nip,
          VAR_16->arch.shared->msr);
   break;
  case 131:
   FUNC_10(VAR_16, VAR_16->arch.regs.nip,
           VAR_16->arch.shared->msr);
   break;
  case 130:
   FUNC_11(VAR_16, VAR_16->arch.regs.nip,
           VAR_16->arch.shared->msr);
   break;
  case 129:
   FUNC_12(VAR_16, VAR_16->arch.regs.nip,
     VAR_16->arch.shared->msr);
   break;
  }

  VAR_16->arch.regs.nip = VAR_16->arch.ivpr |
     VAR_16->arch.ivor[VAR_17];
  if (VAR_20 == 1)
   FUNC_7(VAR_16, VAR_16->arch.queued_esr);
  if (VAR_21 == 1)
   FUNC_6(VAR_16, VAR_16->arch.queued_dear);
  if (VAR_22 == 1) {
   if (VAR_16->arch.epr_flags & VAR_5)
    FUNC_3(VAR_7, VAR_16);
   else if (VAR_16->arch.epr_flags & VAR_4) {
    FUNC_0(VAR_16->arch.irq_type != VAR_6);
    FUNC_5(VAR_16);
   }
  }

  VAR_28 &= VAR_19;




  FUNC_8(VAR_16, VAR_28);

  if (!VAR_26)
   FUNC_1(VAR_17, &VAR_16->arch.pending_exceptions);
 }
 return VAR_18;
}
