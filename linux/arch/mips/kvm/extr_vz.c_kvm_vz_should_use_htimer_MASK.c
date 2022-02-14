
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count_hz; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct TYPE_4__ {int gtoffset_mask; } ;


 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static bool FUNC_1(struct kvm_vcpu *VAR_2)
{
 if (FUNC_0(VAR_2))
  return 0;


 if (VAR_1 != VAR_2->arch.count_hz)
  return 0;


 if (VAR_0.gtoffset_mask != 0xffffffff)
  return 0;

 return 1;
}
