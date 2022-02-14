
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct x86_exception {int address; int error_code; } ;
struct vmcs12 {int vm_exit_intr_error_code; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_3__ {int nested_run_pending; } ;
struct TYPE_4__ {TYPE_1__ nested; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 struct vmcs12* FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,struct x86_exception*) ;
 scalar_t__ FUNC_4 (struct vmcs12*,int ) ;
 int FUNC_5 (struct kvm_vcpu*,int ,int,int ) ;
 TYPE_2__* FUNC_6 (struct kvm_vcpu*) ;

__attribute__((used)) static void FUNC_7(struct kvm_vcpu *VAR_5,
  struct x86_exception *VAR_6)
{
 struct vmcs12 *VAR_7 = FUNC_1(VAR_5);

 FUNC_0(!FUNC_2(VAR_5));

 if (FUNC_4(VAR_7, VAR_6->error_code) &&
  !FUNC_6(VAR_5)->nested.nested_run_pending) {
  VAR_7->vm_exit_intr_error_code = VAR_6->error_code;
  FUNC_5(VAR_5, VAR_0,
      VAR_4 | VAR_3 |
      VAR_1 | VAR_2,
      VAR_6->address);
 } else {
  FUNC_3(VAR_5, VAR_6);
 }
}
