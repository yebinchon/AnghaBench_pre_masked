
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct kvm_vcpu {TYPE_2__* kvm; } ;
struct kvm_hv {int * hv_crash_param; } ;
struct TYPE_3__ {struct kvm_hv hyperv; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_1,
         u32 VAR_2, u64 *VAR_3)
{
 struct kvm_hv *VAR_4 = &VAR_1->kvm->arch.hyperv;

 if (FUNC_1(VAR_2 >= FUNC_0(VAR_4->hv_crash_param)))
  return -VAR_0;

 *VAR_3 = VAR_4->hv_crash_param[VAR_2];
 return 0;
}
