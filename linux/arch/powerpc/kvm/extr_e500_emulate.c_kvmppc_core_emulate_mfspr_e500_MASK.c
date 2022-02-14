
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ulong ;
typedef int u32 ;
struct kvmppc_vcpu_e500 {int* pid; int l1csr0; int l1csr1; int hid0; int hid1; int svr; } ;
struct TYPE_4__ {int decar; int* tlbcfg; int* tlbps; int mmucfg; int eptcfg; int pwrmgtcr0; int* ivor; TYPE_1__* shared; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int mas0; int mas1; int mas2; int mas7_3; int mas4; int mas6; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int,int*) ;
 struct kvmppc_vcpu_e500* FUNC_2 (struct kvm_vcpu*) ;

int FUNC_3(struct kvm_vcpu *VAR_11, int VAR_12, ulong *VAR_13)
{
 struct kvmppc_vcpu_e500 *VAR_14 = FUNC_2(VAR_11);
 int VAR_15 = VAR_8;

 switch (VAR_12) {

 case 136:
  *VAR_13 = VAR_14->pid[0];
  break;
 case 135:
  *VAR_13 = VAR_14->pid[1];
  break;
 case 134:
  *VAR_13 = VAR_14->pid[2];
  break;
 case 145:
  *VAR_13 = VAR_11->arch.shared->mas0;
  break;
 case 144:
  *VAR_13 = VAR_11->arch.shared->mas1;
  break;
 case 143:
  *VAR_13 = VAR_11->arch.shared->mas2;
  break;
 case 142:
  *VAR_13 = (u32)VAR_11->arch.shared->mas7_3;
  break;
 case 141:
  *VAR_13 = VAR_11->arch.shared->mas4;
  break;
 case 140:
  *VAR_13 = VAR_11->arch.shared->mas6;
  break;
 case 139:
  *VAR_13 = VAR_11->arch.shared->mas7_3 >> 32;
  break;

 case 157:
  *VAR_13 = VAR_11->arch.decar;
  break;
 case 131:
  *VAR_13 = VAR_11->arch.tlbcfg[0];
  break;
 case 129:
  *VAR_13 = VAR_11->arch.tlbcfg[1];
  break;
 case 130:
  if (!FUNC_0(VAR_11, VAR_10))
   return VAR_9;
  *VAR_13 = VAR_11->arch.tlbps[0];
  break;
 case 128:
  if (!FUNC_0(VAR_11, VAR_10))
   return VAR_9;
  *VAR_13 = VAR_11->arch.tlbps[1];
  break;
 case 147:
  *VAR_13 = VAR_14->l1csr0;
  break;
 case 146:
  *VAR_13 = VAR_14->l1csr1;
  break;
 case 155:
  *VAR_13 = VAR_14->hid0;
  break;
 case 154:
  *VAR_13 = VAR_14->hid1;
  break;
 case 132:
  *VAR_13 = VAR_14->svr;
  break;

 case 137:
  *VAR_13 = 0;
  break;

 case 138:
  *VAR_13 = VAR_11->arch.mmucfg;
  break;
 case 156:
  if (!FUNC_0(VAR_11, VAR_10))
   return VAR_9;




  *VAR_13 = VAR_11->arch.eptcfg;
  break;

 case 133:
  *VAR_13 = VAR_11->arch.pwrmgtcr0;
  break;
 case 150:
  *VAR_13 = VAR_11->arch.ivor[VAR_4];
  break;
 default:
  VAR_15 = FUNC_1(VAR_11, VAR_12, VAR_13);
 }

 return VAR_15;
}
