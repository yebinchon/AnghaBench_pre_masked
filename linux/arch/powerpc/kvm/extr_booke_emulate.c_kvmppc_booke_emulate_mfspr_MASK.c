
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ulong ;
struct TYPE_5__ {int iac1; int iac2; int iac3; int iac4; int dac1; int dac2; int dbcr0; int dbcr1; int dbcr2; } ;
struct TYPE_6__ {int ivpr; int epr; int csrr0; int csrr1; int dsrr0; int dsrr1; int dbsr; int tsr; int tcr; int* ivor; int mcsr; int epcr; TYPE_2__ dbg_reg; TYPE_1__* shared; } ;
struct kvm_vcpu {TYPE_3__ arch; int guest_debug; } ;
struct TYPE_4__ {int dar; int esr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
int FUNC_0(struct kvm_vcpu *VAR_19, int VAR_20, ulong *VAR_21)
{
 int VAR_22 = VAR_17;

 switch (VAR_20) {
 case 131:
  *VAR_21 = VAR_19->arch.ivpr;
  break;
 case 157:
  *VAR_21 = VAR_19->arch.shared->dar;
  break;
 case 152:
  *VAR_21 = VAR_19->arch.shared->esr;
  break;
 case 153:
  *VAR_21 = VAR_19->arch.epr;
  break;
 case 165:
  *VAR_21 = VAR_19->arch.csrr0;
  break;
 case 164:
  *VAR_21 = VAR_19->arch.csrr1;
  break;
 case 156:
  *VAR_21 = VAR_19->arch.dsrr0;
  break;
 case 155:
  *VAR_21 = VAR_19->arch.dsrr1;
  break;
 case 151:
  *VAR_21 = VAR_19->arch.dbg_reg.iac1;
  break;
 case 150:
  *VAR_21 = VAR_19->arch.dbg_reg.iac2;
  break;
 case 163:
  *VAR_21 = VAR_19->arch.dbg_reg.dac1;
  break;
 case 162:
  *VAR_21 = VAR_19->arch.dbg_reg.dac2;
  break;
 case 161:
  *VAR_21 = VAR_19->arch.dbg_reg.dbcr0;
  if (VAR_19->guest_debug)
   *VAR_21 = *VAR_21 | VAR_16;
  break;
 case 160:
  *VAR_21 = VAR_19->arch.dbg_reg.dbcr1;
  break;
 case 159:
  *VAR_21 = VAR_19->arch.dbg_reg.dbcr2;
  break;
 case 158:
  *VAR_21 = VAR_19->arch.dbsr;
  break;
 case 128:
  *VAR_21 = VAR_19->arch.tsr;
  break;
 case 129:
  *VAR_21 = VAR_19->arch.tcr;
  break;

 case 147:
  *VAR_21 = VAR_19->arch.ivor[VAR_2];
  break;
 case 146:
  *VAR_21 = VAR_19->arch.ivor[VAR_12];
  break;
 case 139:
  *VAR_21 = VAR_19->arch.ivor[VAR_3];
  break;
 case 138:
  *VAR_21 = VAR_19->arch.ivor[VAR_10];
  break;
 case 137:
  *VAR_21 = VAR_19->arch.ivor[VAR_7];
  break;
 case 136:
  *VAR_21 = VAR_19->arch.ivor[VAR_0];
  break;
 case 135:
  *VAR_21 = VAR_19->arch.ivor[VAR_13];
  break;
 case 134:
  *VAR_21 = VAR_19->arch.ivor[VAR_9];
  break;
 case 133:
  *VAR_21 = VAR_19->arch.ivor[VAR_14];
  break;
 case 132:
  *VAR_21 = VAR_19->arch.ivor[VAR_1];
  break;
 case 145:
  *VAR_21 = VAR_19->arch.ivor[VAR_5];
  break;
 case 144:
  *VAR_21 = VAR_19->arch.ivor[VAR_8];
  break;
 case 143:
  *VAR_21 = VAR_19->arch.ivor[VAR_15];
  break;
 case 142:
  *VAR_21 = VAR_19->arch.ivor[VAR_6];
  break;
 case 141:
  *VAR_21 = VAR_19->arch.ivor[VAR_11];
  break;
 case 140:
  *VAR_21 = VAR_19->arch.ivor[VAR_4];
  break;
 case 130:
  *VAR_21 = VAR_19->arch.mcsr;
  break;






 default:
  VAR_22 = VAR_18;
 }

 return VAR_22;
}
