
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * debugfs_exit_timing; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct kvm_vcpu *VAR_0)
{
 if (VAR_0->arch.debugfs_exit_timing) {
  FUNC_0(VAR_0->arch.debugfs_exit_timing);
  VAR_0->arch.debugfs_exit_timing = ((void*)0);
 }
}
