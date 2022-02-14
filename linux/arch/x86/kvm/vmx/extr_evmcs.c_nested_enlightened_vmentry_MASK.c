
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct kvm_vcpu {int dummy; } ;
struct hv_vp_assist_page {unsigned long long current_nested_vmcs; int enlighten_vmentry; } ;


 int FUNC_0 (struct kvm_vcpu*,struct hv_vp_assist_page*) ;
 scalar_t__ FUNC_1 (int) ;

bool FUNC_2(struct kvm_vcpu *VAR_0, u64 *VAR_1)
{
 struct hv_vp_assist_page VAR_2;

 *VAR_1 = -1ull;

 if (FUNC_1(!FUNC_0(VAR_0, &VAR_2)))
  return 0;

 if (FUNC_1(!VAR_2.enlighten_vmentry))
  return 0;

 *VAR_1 = VAR_2.current_nested_vmcs;

 return 1;
}
