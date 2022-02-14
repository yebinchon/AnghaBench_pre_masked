
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* sie_block; } ;
struct TYPE_4__ {int exit_pei; } ;
struct kvm_vcpu {TYPE_3__ arch; TYPE_1__ stat; } ;
struct TYPE_5__ {int ipa; } ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_1)
{
 VAR_1->stat.exit_pei++;

 if (VAR_1->arch.sie_block->ipa == 0xb254)
  return FUNC_0(VAR_1);
 if (VAR_1->arch.sie_block->ipa >> 8 == 0xae)
  return FUNC_1(VAR_1);

 return -VAR_0;
}
