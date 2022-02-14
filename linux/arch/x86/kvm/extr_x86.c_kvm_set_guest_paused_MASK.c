
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pvclock_set_guest_stopped_request; int pv_time_enabled; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_2)
{
 if (!VAR_2->arch.pv_time_enabled)
  return -VAR_0;
 VAR_2->arch.pvclock_set_guest_stopped_request = 1;
 FUNC_0(VAR_1, VAR_2);
 return 0;
}
