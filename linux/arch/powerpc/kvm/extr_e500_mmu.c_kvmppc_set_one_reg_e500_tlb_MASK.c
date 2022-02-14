
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union kvmppc_one_reg {int dummy; } kvmppc_one_reg ;
typedef int u64 ;
typedef void* u32 ;
struct TYPE_4__ {void** tlbps; void** tlbcfg; void* eptcfg; void* mmucfg; TYPE_1__* shared; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {void* mas6; void* mas4; void* mas7_3; void* mas2; void* mas1; void* mas0; } ;


 int VAR_0 ;
 void* FUNC_0 (int,union kvmppc_one_reg) ;

int FUNC_1(struct kvm_vcpu *VAR_1, u64 VAR_2,
          union kvmppc_one_reg *VAR_3)
{
 int VAR_4 = 0;
 long int VAR_5;

 switch (VAR_2) {
 case 142:
  VAR_1->arch.shared->mas0 = FUNC_0(VAR_2, *VAR_3);
  break;
 case 141:
  VAR_1->arch.shared->mas1 = FUNC_0(VAR_2, *VAR_3);
  break;
 case 140:
  VAR_1->arch.shared->mas2 = FUNC_0(VAR_2, *VAR_3);
  break;
 case 137:
  VAR_1->arch.shared->mas7_3 = FUNC_0(VAR_2, *VAR_3);
  break;
 case 139:
  VAR_1->arch.shared->mas4 = FUNC_0(VAR_2, *VAR_3);
  break;
 case 138:
  VAR_1->arch.shared->mas6 = FUNC_0(VAR_2, *VAR_3);
  break;

 case 136: {
  u32 VAR_6 = FUNC_0(VAR_2, *VAR_3);
  if (VAR_6 != VAR_1->arch.mmucfg)
   VAR_4 = -VAR_0;
  break;
 }
 case 143: {
  u32 VAR_7 = FUNC_0(VAR_2, *VAR_3);
  if (VAR_7 != VAR_1->arch.eptcfg)
   VAR_4 = -VAR_0;
  break;
 }
 case 135:
 case 133:
 case 131:
 case 129: {

  u32 VAR_8 = FUNC_0(VAR_2, *VAR_3);
  VAR_5 = VAR_2 - 135;
  if (VAR_8 != VAR_1->arch.tlbcfg[VAR_5])
   VAR_4 = -VAR_0;
  break;
 }
 case 134:
 case 132:
 case 130:
 case 128: {
  u32 VAR_9 = FUNC_0(VAR_2, *VAR_3);
  VAR_5 = VAR_2 - 134;
  if (VAR_9 != VAR_1->arch.tlbps[VAR_5])
   VAR_4 = -VAR_0;
  break;
 }
 default:
  VAR_4 = -VAR_0;
  break;
 }

 return VAR_4;
}
