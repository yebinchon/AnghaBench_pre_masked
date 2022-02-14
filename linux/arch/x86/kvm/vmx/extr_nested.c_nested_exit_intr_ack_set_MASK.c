
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int vm_exit_controls; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct kvm_vcpu*) ;

__attribute__((used)) static bool FUNC_1(struct kvm_vcpu *VAR_1)
{
 return FUNC_0(VAR_1)->vm_exit_controls &
  VAR_0;
}
