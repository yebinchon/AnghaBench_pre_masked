
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* sie_block; } ;
struct kvm_vcpu {TYPE_3__ arch; } ;
struct TYPE_4__ {int mask; } ;
struct TYPE_5__ {TYPE_1__ gpsw; } ;


 int VAR_0 ;

int FUNC_0(struct kvm_vcpu *VAR_1)
{
 return !(VAR_1->arch.sie_block->gpsw.mask & VAR_0);
}
