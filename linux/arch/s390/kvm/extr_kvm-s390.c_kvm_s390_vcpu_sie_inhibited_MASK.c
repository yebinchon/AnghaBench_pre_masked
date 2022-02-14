
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
struct TYPE_3__ {int prog20; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

bool FUNC_1(struct kvm_vcpu *VAR_2)
{
 return FUNC_0(&VAR_2->arch.sie_block->prog20) &
        (VAR_0 | VAR_1);
}
