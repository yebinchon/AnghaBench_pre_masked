
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int cbrlo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct kvm_vcpu *VAR_2)
{
 VAR_2->arch.sie_block->cbrlo = FUNC_0(VAR_1);
 if (!VAR_2->arch.sie_block->cbrlo)
  return -VAR_0;
 return 0;
}
