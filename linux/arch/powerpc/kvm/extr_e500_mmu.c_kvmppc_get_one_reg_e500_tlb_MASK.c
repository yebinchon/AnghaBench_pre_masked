
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union kvmppc_one_reg {int dummy; } kvmppc_one_reg ;
typedef int u64 ;
struct TYPE_4__ {int * tlbps; int * tlbcfg; int eptcfg; int mmucfg; TYPE_1__* shared; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int mas6; int mas4; int mas7_3; int mas2; int mas1; int mas0; } ;


 int VAR_0 ;
 union kvmppc_one_reg FUNC_0 (int,int ) ;

int FUNC_1(struct kvm_vcpu *VAR_1, u64 VAR_2,
    union kvmppc_one_reg *VAR_3)
{
 int VAR_4 = 0;
 long int VAR_5;

 switch (VAR_2) {
 case 142:
  *VAR_3 = FUNC_0(VAR_2, VAR_1->arch.shared->mas0);
  break;
 case 141:
  *VAR_3 = FUNC_0(VAR_2, VAR_1->arch.shared->mas1);
  break;
 case 140:
  *VAR_3 = FUNC_0(VAR_2, VAR_1->arch.shared->mas2);
  break;
 case 137:
  *VAR_3 = FUNC_0(VAR_2, VAR_1->arch.shared->mas7_3);
  break;
 case 139:
  *VAR_3 = FUNC_0(VAR_2, VAR_1->arch.shared->mas4);
  break;
 case 138:
  *VAR_3 = FUNC_0(VAR_2, VAR_1->arch.shared->mas6);
  break;
 case 136:
  *VAR_3 = FUNC_0(VAR_2, VAR_1->arch.mmucfg);
  break;
 case 143:
  *VAR_3 = FUNC_0(VAR_2, VAR_1->arch.eptcfg);
  break;
 case 135:
 case 133:
 case 131:
 case 129:
  VAR_5 = VAR_2 - 135;
  *VAR_3 = FUNC_0(VAR_2, VAR_1->arch.tlbcfg[VAR_5]);
  break;
 case 134:
 case 132:
 case 130:
 case 128:
  VAR_5 = VAR_2 - 134;
  *VAR_3 = FUNC_0(VAR_2, VAR_1->arch.tlbps[VAR_5]);
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }

 return VAR_4;
}
