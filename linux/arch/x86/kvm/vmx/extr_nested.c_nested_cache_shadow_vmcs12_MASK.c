
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmcs12 {unsigned long long vmcs_link_pointer; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_host_map {int hva; } ;


 int VAR_0 ;
 struct vmcs12* FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (unsigned long long) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*,int ,struct kvm_host_map*) ;
 int FUNC_3 (struct kvm_vcpu*,struct kvm_host_map*,int) ;
 int FUNC_4 (struct vmcs12*,int ,int ) ;
 int FUNC_5 (struct vmcs12*) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_1,
           struct vmcs12 *VAR_2)
{
 struct kvm_host_map VAR_3;
 struct vmcs12 *VAR_4;

 if (!FUNC_5(VAR_2) ||
     VAR_2->vmcs_link_pointer == -1ull)
  return;

 VAR_4 = FUNC_0(VAR_1);

 if (FUNC_2(VAR_1, FUNC_1(VAR_2->vmcs_link_pointer), &VAR_3))
  return;

 FUNC_4(VAR_4, VAR_3.hva, VAR_0);
 FUNC_3(VAR_1, &VAR_3, 0);
}
