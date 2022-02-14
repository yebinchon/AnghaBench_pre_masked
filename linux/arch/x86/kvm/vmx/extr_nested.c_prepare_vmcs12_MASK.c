
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct vmcs12 {int vm_exit_reason; unsigned long exit_qualification; int launch_state; int vm_exit_msr_store_count; int vm_exit_msr_store_addr; int vm_entry_intr_info_field; void* vmx_instruction_info; void* vm_exit_instruction_len; scalar_t__ idt_vectoring_info_field; void* vm_exit_intr_info; } ;
struct TYPE_2__ {int nmi_injected; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_4 (struct kvm_vcpu*,struct vmcs12*) ;
 void* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct kvm_vcpu *VAR_5, struct vmcs12 *VAR_6,
      u32 VAR_7, u32 VAR_8,
      unsigned long VAR_9)
{

 VAR_6->vm_exit_reason = VAR_7;
 VAR_6->exit_qualification = VAR_9;
 VAR_6->vm_exit_intr_info = VAR_8;

 VAR_6->idt_vectoring_info_field = 0;
 VAR_6->vm_exit_instruction_len = FUNC_5(VAR_4);
 VAR_6->vmx_instruction_info = FUNC_5(VAR_3);

 if (!(VAR_6->vm_exit_reason & VAR_2)) {
  VAR_6->launch_state = 1;



  VAR_6->vm_entry_intr_info_field &= ~VAR_0;





  FUNC_4(VAR_5, VAR_6);







  if (FUNC_3(VAR_5,
      VAR_6->vm_exit_msr_store_addr,
      VAR_6->vm_exit_msr_store_count))
   FUNC_2(VAR_5,
      VAR_1);
 }





 VAR_5->arch.nmi_injected = 0;
 FUNC_0(VAR_5);
 FUNC_1(VAR_5);
}
