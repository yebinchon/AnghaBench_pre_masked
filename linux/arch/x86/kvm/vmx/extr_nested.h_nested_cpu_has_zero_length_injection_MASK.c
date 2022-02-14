
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_4__ {int misc_low; } ;
struct TYPE_5__ {TYPE_1__ msrs; } ;
struct TYPE_6__ {TYPE_2__ nested; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static inline bool FUNC_1(struct kvm_vcpu *VAR_1)
{
 return FUNC_0(VAR_1)->nested.msrs.misc_low & VAR_0;
}
