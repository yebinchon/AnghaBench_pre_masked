
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmx_msr_entry {scalar_t__ index; } ;
struct kvm_vcpu {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*,struct vmx_msr_entry*) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_2,
          struct vmx_msr_entry *VAR_3)
{
 if (FUNC_0(VAR_3->index == VAR_1) ||
     FUNC_1(VAR_2, VAR_3))
  return -VAR_0;
 return 0;
}
