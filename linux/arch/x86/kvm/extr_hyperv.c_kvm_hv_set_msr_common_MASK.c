
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct kvm_vcpu {TYPE_3__* kvm; } ;
struct TYPE_4__ {int hv_lock; } ;
struct TYPE_5__ {TYPE_1__ hyperv; } ;
struct TYPE_6__ {TYPE_2__ arch; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct kvm_vcpu*,int ,int ,int) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct kvm_vcpu *VAR_0, u32 VAR_1, u64 VAR_2, bool VAR_3)
{
 if (FUNC_0(VAR_1)) {
  int VAR_4;

  FUNC_3(&VAR_0->kvm->arch.hyperv.hv_lock);
  VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
  FUNC_4(&VAR_0->kvm->arch.hyperv.hv_lock);
  return VAR_4;
 } else
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
