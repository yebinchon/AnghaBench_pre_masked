
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmcs12 {int vm_entry_msr_load_addr; int vm_entry_msr_load_count; } ;
struct kvm_vcpu {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct kvm_vcpu*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct kvm_vcpu *VAR_1,
                                                      struct vmcs12 *VAR_2)
{
 if (FUNC_0(FUNC_1(VAR_1,
        VAR_2->vm_entry_msr_load_count,
        VAR_2->vm_entry_msr_load_addr)))
                return -VAR_0;

 return 0;
}
