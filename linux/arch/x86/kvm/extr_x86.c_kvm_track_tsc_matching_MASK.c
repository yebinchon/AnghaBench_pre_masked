
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vclock_mode; } ;
struct pvclock_gtod_data {TYPE_1__ clock; } ;
struct kvm_vcpu {TYPE_2__* kvm; int vcpu_id; } ;
struct kvm_arch {scalar_t__ nr_vcpus_matched_tsc; scalar_t__ use_master_clock; } ;
struct TYPE_4__ {int online_vcpus; struct kvm_arch arch; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,struct kvm_vcpu*) ;
 struct pvclock_gtod_data VAR_1 ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_2)
{
}
