
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ vector; int error_code; scalar_t__ error_code_valid; } ;
struct x86_emulate_ctxt {TYPE_2__ exception; } ;
struct TYPE_3__ {struct x86_emulate_ctxt emulate_ctxt; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct kvm_vcpu*,TYPE_2__*) ;
 int FUNC_1 (struct kvm_vcpu*,scalar_t__) ;
 int FUNC_2 (struct kvm_vcpu*,scalar_t__,int ) ;

__attribute__((used)) static bool FUNC_3(struct kvm_vcpu *VAR_1)
{
 struct x86_emulate_ctxt *VAR_2 = &VAR_1->arch.emulate_ctxt;
 if (VAR_2->exception.vector == VAR_0)
  return FUNC_0(VAR_1, &VAR_2->exception);

 if (VAR_2->exception.error_code_valid)
  FUNC_2(VAR_1, VAR_2->exception.vector,
          VAR_2->exception.error_code);
 else
  FUNC_1(VAR_1, VAR_2->exception.vector);
 return 0;
}
