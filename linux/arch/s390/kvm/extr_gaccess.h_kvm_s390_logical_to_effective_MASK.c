
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* sie_block; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;
typedef int psw_t ;
struct TYPE_6__ {scalar_t__ eaba; } ;
struct TYPE_4__ {int gpsw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__ FUNC_0 (int ) ;

__attribute__((used)) static inline unsigned long FUNC_1(struct kvm_vcpu *VAR_2,
         unsigned long VAR_3)
{
 psw_t *VAR_4 = &VAR_2->arch.sie_block->gpsw;

 if (FUNC_0(*VAR_4).eaba == VAR_1)
  return VAR_3;
 if (FUNC_0(*VAR_4).eaba == VAR_0)
  return VAR_3 & ((1UL << 31) - 1);
 return VAR_3 & ((1UL << 24) - 1);
}
