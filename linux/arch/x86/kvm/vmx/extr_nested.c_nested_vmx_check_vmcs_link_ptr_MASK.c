
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ revision_id; scalar_t__ shadow_vmcs; } ;
struct vmcs12 {unsigned long long vmcs_link_pointer; TYPE_1__ hdr; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_host_map {struct vmcs12* hva; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (unsigned long long) ;
 int FUNC_2 (struct kvm_vcpu*,int ,struct kvm_host_map*) ;
 int FUNC_3 (struct kvm_vcpu*,struct kvm_host_map*,int) ;
 scalar_t__ FUNC_4 (struct vmcs12*) ;
 int FUNC_5 (struct kvm_vcpu*,unsigned long long) ;

__attribute__((used)) static int FUNC_6(struct kvm_vcpu *VAR_2,
       struct vmcs12 *VAR_3)
{
 int VAR_4 = 0;
 struct vmcs12 *VAR_5;
 struct kvm_host_map VAR_6;

 if (VAR_3->vmcs_link_pointer == -1ull)
  return 0;

 if (FUNC_0(!FUNC_5(VAR_2, VAR_3->vmcs_link_pointer)))
  return -VAR_0;

 if (FUNC_0(FUNC_2(VAR_2, FUNC_1(VAR_3->vmcs_link_pointer), &VAR_6)))
  return -VAR_0;

 VAR_5 = VAR_6.hva;

 if (FUNC_0(VAR_5->hdr.revision_id != VAR_1) ||
     FUNC_0(VAR_5->hdr.shadow_vmcs != FUNC_4(VAR_3)))
  VAR_4 = -VAR_0;

 FUNC_3(VAR_2, &VAR_6, 0);
 return VAR_4;
}
