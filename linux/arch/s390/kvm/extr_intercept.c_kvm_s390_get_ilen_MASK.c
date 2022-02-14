
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct kvm_s390_sie_block* sie_block; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_s390_sie_block {int icptcode; int ipa; int icptstatus; int pgmilc; } ;
 int FUNC_0 (int) ;

u8 FUNC_1(struct kvm_vcpu *VAR_0)
{
 struct kvm_s390_sie_block *VAR_1 = VAR_0->arch.sie_block;
 u8 VAR_2 = 0;

 switch (VAR_0->arch.sie_block->icptcode) {
 case 133:
 case 132:
 case 130:
 case 129:
 case 131:

  VAR_2 = FUNC_0(VAR_0->arch.sie_block->ipa >> 8);

  if (VAR_1->icptstatus & 1) {
   VAR_2 = (VAR_1->icptstatus >> 4) & 0x6;
   if (!VAR_2)
    VAR_2 = 4;
  }
  break;
 case 128:

  VAR_2 = VAR_0->arch.sie_block->pgmilc & 0x6;
  break;
 }
 return VAR_2;
}
