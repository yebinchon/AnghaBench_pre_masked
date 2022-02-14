
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ pv_eoi; } ;
struct kvm_vcpu {TYPE_2__ arch; int kvm; } ;
struct hv_vp_assist_page {int dummy; } ;


 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (int ,int *,struct hv_vp_assist_page*,int) ;

bool FUNC_2(struct kvm_vcpu *VAR_0,
       struct hv_vp_assist_page *VAR_1)
{
 if (!FUNC_0(VAR_0))
  return 0;
 return !FUNC_1(VAR_0->kvm, &VAR_0->arch.pv_eoi.data,
          VAR_1, sizeof(*VAR_1));
}
