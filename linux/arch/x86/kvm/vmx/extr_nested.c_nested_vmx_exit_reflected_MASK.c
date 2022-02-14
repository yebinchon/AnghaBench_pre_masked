
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int u32 ;
struct vmcs12 {unsigned int exception_bitmap; int vmwrite_bitmap; int vmread_bitmap; } ;
struct TYPE_6__ {int host_apf_reason; } ;
struct TYPE_7__ {TYPE_2__ apf; } ;
struct TYPE_8__ {TYPE_3__ arch; } ;
struct TYPE_5__ {scalar_t__ nested_run_pending; } ;
struct vcpu_vmx {TYPE_4__ vcpu; int idt_vectoring_info; int fail; TYPE_1__ nested; } ;
struct kvm_vcpu {int guest_debug; } ;


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
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 struct vmcs12* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct vmcs12*,int ) ;
 int FUNC_7 (struct vmcs12*,int ) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*,struct vmcs12*) ;
 int FUNC_10 (struct kvm_vcpu*,struct vmcs12*) ;
 int FUNC_11 (struct kvm_vcpu*,struct vmcs12*,unsigned int) ;
 int FUNC_12 (struct kvm_vcpu*,struct vmcs12*,int ) ;
 struct vcpu_vmx* FUNC_13 (struct kvm_vcpu*) ;
 int FUNC_14 (char*,unsigned int) ;
 int FUNC_15 (int ,unsigned int,int ,int ,unsigned int,unsigned int,int ) ;
 scalar_t__ FUNC_16 (int ) ;
 unsigned int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;

bool FUNC_19(struct kvm_vcpu *VAR_30, u32 VAR_31)
{
 u32 VAR_32 = FUNC_17(VAR_27);
 struct vcpu_vmx *VAR_33 = FUNC_13(VAR_30);
 struct vmcs12 *VAR_34 = FUNC_0(VAR_30);

 if (VAR_33->nested.nested_run_pending)
  return 0;

 if (FUNC_16(VAR_33->fail)) {
  FUNC_14(
   "hardware VM-instruction error: ",
   FUNC_17(VAR_28));
  return 1;
 }
 FUNC_8(VAR_30);

 FUNC_15(FUNC_5(VAR_30), VAR_31,
    FUNC_18(VAR_12),
    VAR_33->idt_vectoring_info,
    VAR_32,
    FUNC_17(VAR_26),
    VAR_17);

 switch (VAR_31) {
 case 175:
  if (FUNC_3(VAR_32))
   return 0;
  else if (FUNC_4(VAR_32))
   return !VAR_33->vcpu.arch.apf.host_apf_reason && VAR_29;
  else if (FUNC_2(VAR_32) &&
    VAR_30->guest_debug &
    (VAR_14 | VAR_15))
   return 0;
  else if (FUNC_1(VAR_32) &&
    VAR_30->guest_debug & VAR_16)
   return 0;
  return VAR_34->exception_bitmap &
    (1u << (VAR_32 & VAR_13));
 case 174:
  return 0;
 case 144:
  return 1;
 case 155:
  return FUNC_6(VAR_34, VAR_10);
 case 157:
  return FUNC_6(VAR_34, VAR_11);
 case 147:
  return 1;
 case 182:
  return 1;
 case 172:
  return FUNC_6(VAR_34, VAR_0);
 case 170:
  return 1;
 case 168:
  return FUNC_6(VAR_34, VAR_1);
 case 152:
  return FUNC_6(VAR_34, VAR_7);
 case 151:
  return FUNC_7(VAR_34, VAR_22);
 case 150:
  return FUNC_7(VAR_34, VAR_23);
 case 149: case 148:
  return FUNC_6(VAR_34, VAR_8);
 case 134:
  return FUNC_12(VAR_30, VAR_34,
   VAR_34->vmread_bitmap);
 case 132:
  return FUNC_12(VAR_30, VAR_34,
   VAR_34->vmwrite_bitmap);
 case 142: case 141:
 case 139: case 136:
 case 135: case 133:
 case 138: case 137:
 case 169: case 166:




  return 1;
 case 181:
  return FUNC_9(VAR_30, VAR_34);
 case 180:
  return FUNC_6(VAR_34, VAR_4);
 case 165:
  return FUNC_10(VAR_30, VAR_34);
 case 173: case 164:
  return FUNC_7(VAR_34, VAR_18);
 case 160:
 case 159:
  return FUNC_11(VAR_30, VAR_34, VAR_31);
 case 171:
  return 1;
 case 158:
  return FUNC_6(VAR_34, VAR_5);
 case 161:
  return FUNC_6(VAR_34, VAR_3);
 case 162:
  return FUNC_6(VAR_34, VAR_2);
 case 156:
  return FUNC_6(VAR_34, VAR_6) ||
   FUNC_7(VAR_34,
    VAR_21);
 case 163:
  return 0;
 case 145:
  return FUNC_6(VAR_34, VAR_9);
 case 184:
 case 183:
 case 178:





  return 1;
 case 176:






  return 0;
 case 177:






  return 0;
 case 167:
  return
   FUNC_7(VAR_34, VAR_19) &&
   FUNC_6(VAR_34, VAR_1);
 case 131:
  return FUNC_7(VAR_34, VAR_24);
 case 128:
  return 1;
 case 129: case 130:






  return FUNC_7(VAR_34, VAR_25);
 case 153:
  return 0;
 case 154:

  return 0;
 case 140:

  return 0;
 case 179:

  return 0;
 case 143:
 case 146:
  return FUNC_7(VAR_34,
   VAR_20);
 default:
  return 1;
 }
}
