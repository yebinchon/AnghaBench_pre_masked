
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct vmcs12 {int idt_vectoring_info_field; int vm_exit_intr_error_code; } ;
struct TYPE_3__ {unsigned int nr; int error_code; scalar_t__ has_error_code; } ;
struct TYPE_4__ {TYPE_1__ exception; } ;
struct kvm_vcpu {TYPE_2__ arch; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 struct vmcs12* FUNC_0 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (struct kvm_vcpu*,int ,unsigned int,unsigned long) ;
 scalar_t__ FUNC_3 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_4(struct kvm_vcpu *VAR_7,
            unsigned long VAR_8)
{
 struct vmcs12 *VAR_9 = FUNC_0(VAR_7);
 unsigned int VAR_10 = VAR_7->arch.exception.nr;
 u32 VAR_11 = VAR_10 | VAR_3;

 if (VAR_7->arch.exception.has_error_code) {
  VAR_9->vm_exit_intr_error_code = VAR_7->arch.exception.error_code;
  VAR_11 |= VAR_1;
 }

 if (FUNC_1(VAR_10))
  VAR_11 |= VAR_5;
 else
  VAR_11 |= VAR_4;

 if (!(VAR_9->idt_vectoring_info_field & VAR_6) &&
     FUNC_3(VAR_7))
  VAR_11 |= VAR_2;

 FUNC_2(VAR_7, VAR_0, VAR_11, VAR_8);
}
