
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

int FUNC_4(struct kvm_vcpu *VAR_1)
{
 switch (VAR_1->arch.sie_block->ipa & 0x00ff) {
 case 0x8a:
 case 0x8e:
 case 0x8f:
  return FUNC_2(VAR_1);
 case 0x8d:
  return FUNC_0(VAR_1);
 case 0xab:
  return FUNC_1(VAR_1);
 case 0xaf:
  return FUNC_3(VAR_1);
 default:
  return -VAR_0;
 }
}
