
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_arch {scalar_t__ nr_vcpus_matched_tsc; int use_master_clock; int boot_vcpu_runs_old_kvmclock; int backwards_tsc_observed; int master_cycle_now; int master_kernel_ns; } ;
struct kvm {int online_vcpus; struct kvm_arch arch; } ;
struct TYPE_3__ {int vclock_mode; } ;
struct TYPE_4__ {TYPE_1__ clock; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_3 (int,int,int) ;

__attribute__((used)) static void FUNC_4(struct kvm *VAR_2)
{
}
