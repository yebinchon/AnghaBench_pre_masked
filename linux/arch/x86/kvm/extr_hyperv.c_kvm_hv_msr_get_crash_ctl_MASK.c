
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct kvm_vcpu {TYPE_2__* kvm; } ;
struct kvm_hv {int hv_crash_ctl; } ;
struct TYPE_3__ {struct kvm_hv hyperv; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;



__attribute__((used)) static int FUNC_0(struct kvm_vcpu *VAR_0, u64 *VAR_1)
{
 struct kvm_hv *VAR_2 = &VAR_0->kvm->arch.hyperv;

 *VAR_1 = VAR_2->hv_crash_ctl;
 return 0;
}
