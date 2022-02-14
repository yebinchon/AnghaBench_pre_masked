
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * gpr; } ;
struct TYPE_8__ {int prodded; scalar_t__ hcall_needed; TYPE_2__ regs; int ceded; } ;
struct kvm_vcpu {TYPE_3__ arch; TYPE_4__* kvm; } ;
struct TYPE_6__ {int rtas_tokens; int enabled_hcalls; } ;
struct TYPE_9__ {int srcu; TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;






 unsigned long VAR_2 ;

 unsigned long VAR_3 ;
 unsigned long VAR_4 ;




 unsigned long VAR_5 ;

 unsigned long VAR_6 ;
 unsigned long VAR_7 ;

 unsigned long VAR_8 ;


 unsigned long VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned long FUNC_0 (struct kvm_vcpu*,void*,void*,void*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 unsigned long FUNC_2 (struct kvm_vcpu*) ;
 unsigned long FUNC_3 (struct kvm_vcpu*) ;
 unsigned long FUNC_4 (struct kvm_vcpu*) ;
 unsigned long FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 struct kvm_vcpu* FUNC_7 (TYPE_4__*,unsigned long) ;
 void* FUNC_8 (struct kvm_vcpu*,int) ;
 int FUNC_9 (struct kvm_vcpu*) ;
 unsigned long FUNC_10 (struct kvm_vcpu*,void*,void*) ;
 unsigned long FUNC_11 (struct kvm_vcpu*) ;
 unsigned long FUNC_12 (struct kvm_vcpu*) ;
 unsigned long FUNC_13 (struct kvm_vcpu*,void*,void*,void*) ;
 unsigned long FUNC_14 (struct kvm_vcpu*,void*,void*,void*) ;
 unsigned long FUNC_15 (struct kvm_vcpu*,void*,void*,void*,void*) ;
 unsigned long FUNC_16 (struct kvm_vcpu*,void*) ;
 unsigned long FUNC_17 (struct kvm_vcpu*,void*,void*,void*,void*) ;
 unsigned long FUNC_18 (struct kvm_vcpu*,void*,void*) ;
 unsigned long FUNC_19 (struct kvm_vcpu*,void*,void*,void*,void*) ;
 int FUNC_20 (struct kvm_vcpu*) ;
 int FUNC_21 (struct kvm_vcpu*,int,unsigned long) ;
 int FUNC_22 (struct kvm_vcpu*) ;
 unsigned long FUNC_23 (struct kvm_vcpu*,unsigned long) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (TYPE_4__*) ;
 int FUNC_26 (int *) ;
 int FUNC_27 () ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *,int) ;
 int FUNC_30 (unsigned long,int ) ;
 int FUNC_31 () ;

int FUNC_32(struct kvm_vcpu *VAR_12)
{
 unsigned long VAR_13 = FUNC_8(VAR_12, 3);
 unsigned long VAR_14, VAR_15 = VAR_7;
 int VAR_16;
 struct kvm_vcpu *VAR_17;
 int VAR_18, VAR_19;

 if (VAR_13 <= VAR_9 &&
     !FUNC_30(VAR_13/4, VAR_12->kvm->arch.enabled_hcalls))
  return VAR_11;

 switch (VAR_13) {
 case 153:
  break;
 case 141:
  VAR_14 = FUNC_8(VAR_12, 4);
  VAR_17 = FUNC_7(VAR_12->kvm, VAR_14);
  if (!VAR_17) {
   VAR_15 = VAR_6;
   break;
  }
  VAR_17->arch.prodded = 1;
  FUNC_27();
  if (VAR_17->arch.ceded)
   FUNC_6(VAR_17);
  break;
 case 152:
  VAR_14 = FUNC_8(VAR_12, 4);
  if (VAR_14 == -1)
   break;
  VAR_17 = FUNC_7(VAR_12->kvm, VAR_14);
  if (!VAR_17) {
   VAR_15 = VAR_6;
   break;
  }
  VAR_16 = FUNC_8(VAR_12, 5);
  if (FUNC_9(VAR_17) != VAR_16)
   break;
  FUNC_1(VAR_17);
  break;
 case 137:
  VAR_15 = FUNC_0(VAR_12, FUNC_8(VAR_12, 4),
     FUNC_8(VAR_12, 5),
     FUNC_8(VAR_12, 6));
  break;
 case 136:
  if (FUNC_24(&VAR_12->kvm->arch.rtas_tokens))
   return VAR_11;

  VAR_18 = FUNC_28(&VAR_12->kvm->srcu);
  VAR_19 = FUNC_20(VAR_12);
  FUNC_29(&VAR_12->kvm->srcu, VAR_18);

  if (VAR_19 == -VAR_1)
   return VAR_11;
  else if (VAR_19 == 0)
   break;


  return VAR_19;
 case 144:
  VAR_15 = FUNC_11(VAR_12);
  if (VAR_15 == VAR_8)
   return VAR_11;
  break;
 case 143:
  VAR_15 = FUNC_12(VAR_12);
  if (VAR_15 == VAR_8)
   return VAR_11;
  break;
 case 134:
  VAR_15 = FUNC_17(VAR_12, FUNC_8(VAR_12, 4),
     FUNC_8(VAR_12, 5),
     FUNC_8(VAR_12, 6),
     FUNC_8(VAR_12, 7));
  if (VAR_15 == VAR_8)
   return VAR_11;
  break;
 case 129:
 case 150:
 case 148:
 case 146:
 case 145:
 case 128:
  if (FUNC_22(VAR_12)) {
   if (FUNC_31()) {
    VAR_15 = VAR_5;
    return VAR_10;
   }
   VAR_15 = FUNC_23(VAR_12, VAR_13);
   break;
  }
  return VAR_11;
 case 135:
  VAR_15 = FUNC_16(VAR_12, FUNC_8(VAR_12, 4));
  break;
 case 132:
  VAR_15 = FUNC_18(VAR_12, FUNC_8(VAR_12, 4),
      FUNC_8(VAR_12, 5));
  break;
 case 138:
  if (!FUNC_26(&VAR_12->arch.regs.gpr[4]))
   VAR_15 = VAR_3;
  break;

 case 133:
  VAR_15 = VAR_2;
  if (FUNC_25(VAR_12->kvm))
   VAR_15 = FUNC_5(VAR_12);
  break;
 case 149:
  VAR_15 = VAR_2;
  if (!FUNC_25(VAR_12->kvm))
   break;
  VAR_15 = FUNC_4(VAR_12);
  if (VAR_15 == VAR_4) {
   FUNC_21(VAR_12, 3, 0);
   VAR_12->arch.hcall_needed = 0;
   return -VAR_0;
  } else if (VAR_15 == VAR_8) {
   FUNC_21(VAR_12, 3, 0);
   VAR_12->arch.hcall_needed = 0;
   return VAR_11;
  }
  break;
 case 130:
  VAR_15 = VAR_2;
  if (FUNC_25(VAR_12->kvm))
   VAR_15 = FUNC_3(VAR_12);
  break;
 case 151:
  VAR_15 = VAR_2;
  if (FUNC_25(VAR_12->kvm))
   VAR_15 = FUNC_2(VAR_12);
  break;
 case 142:
  VAR_15 = FUNC_13(VAR_12, FUNC_8(VAR_12, 4),
      FUNC_8(VAR_12, 5),
      FUNC_8(VAR_12, 6));
  break;
 default:
  return VAR_11;
 }
 FUNC_21(VAR_12, 3, VAR_15);
 VAR_12->arch.hcall_needed = 0;
 return VAR_10;
}
