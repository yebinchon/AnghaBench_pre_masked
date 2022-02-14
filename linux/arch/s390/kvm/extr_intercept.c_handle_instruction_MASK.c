
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* sie_block; } ;
struct TYPE_4__ {int exit_instruction; } ;
struct kvm_vcpu {TYPE_3__ arch; TYPE_1__ stat; } ;
struct TYPE_5__ {int ipa; int ipb; } ;


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
 int FUNC_12 (struct kvm_vcpu*,int,int ) ;

__attribute__((used)) static int FUNC_13(struct kvm_vcpu *VAR_1)
{
 VAR_1->stat.exit_instruction++;
 FUNC_12(VAR_1,
          VAR_1->arch.sie_block->ipa,
          VAR_1->arch.sie_block->ipb);

 switch (VAR_1->arch.sie_block->ipa >> 8) {
 case 0x01:
  return FUNC_0(VAR_1);
 case 0x82:
  return FUNC_9(VAR_1);
 case 0x83:
  return FUNC_4(VAR_1);
 case 0xaa:
  return FUNC_1(VAR_1);
 case 0xae:
  return FUNC_10(VAR_1);
 case 0xb2:
  return FUNC_2(VAR_1);
 case 0xb6:
  return FUNC_11(VAR_1);
 case 0xb7:
  return FUNC_8(VAR_1);
 case 0xb9:
  return FUNC_3(VAR_1);
 case 0xe3:
  return FUNC_5(VAR_1);
 case 0xe5:
  return FUNC_6(VAR_1);
 case 0xeb:
  return FUNC_7(VAR_1);
 default:
  return -VAR_0;
 }
}
