
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int ipa; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 int FUNC_6 (struct kvm_vcpu*) ;
 int FUNC_7 (struct kvm_vcpu*) ;
 int FUNC_8 (struct kvm_vcpu*) ;
 int FUNC_9 (struct kvm_vcpu*) ;
 int FUNC_10 (struct kvm_vcpu*) ;
 int FUNC_11 (struct kvm_vcpu*) ;
 int FUNC_12 (struct kvm_vcpu*) ;
 int FUNC_13 (struct kvm_vcpu*) ;
 int FUNC_14 (struct kvm_vcpu*) ;
 int FUNC_15 (struct kvm_vcpu*) ;
 int FUNC_16 (struct kvm_vcpu*) ;

int FUNC_17(struct kvm_vcpu *VAR_1)
{
 switch (VAR_1->arch.sie_block->ipa & 0x00ff) {
 case 0x02:
  return FUNC_11(VAR_1);
 case 0x04:
  return FUNC_6(VAR_1);
 case 0x10:
  return FUNC_7(VAR_1);
 case 0x11:
  return FUNC_13(VAR_1);
 case 0x12:
  return FUNC_12(VAR_1);
 case 0x14:
  return FUNC_16(VAR_1);
 case 0x21:
 case 0x50:
  return FUNC_1(VAR_1);
 case 0x29:
  return FUNC_2(VAR_1);
 case 0x2a:
  return FUNC_5(VAR_1);
 case 0x2b:
  return FUNC_8(VAR_1);
 case 0x2c:
  return FUNC_15(VAR_1);
 case 0x30:
 case 0x31:
 case 0x32:
 case 0x33:
 case 0x34:
 case 0x35:
 case 0x36:
 case 0x37:
 case 0x38:
 case 0x39:
 case 0x3a:
 case 0x3b:
 case 0x3c:
 case 0x5f:
 case 0x74:
 case 0x76:
  return FUNC_0(VAR_1);
 case 0x56:
  return FUNC_10(VAR_1);
 case 0x7d:
  return FUNC_14(VAR_1);
 case 0xaf:
  return FUNC_4(VAR_1);
 case 0xb1:
  return FUNC_9(VAR_1);
 case 0xb2:
  return FUNC_3(VAR_1);
 default:
  return -VAR_0;
 }
}
