
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct x86_exception {int error_code_valid; int nested_page_fault; int async_page_fault; int address; scalar_t__ error_code; scalar_t__ vector; } ;
struct TYPE_7__ {int msr_val; int halted; } ;
struct TYPE_5__ {int pending; scalar_t__ nr; int injected; int has_error_code; int has_payload; scalar_t__ payload; scalar_t__ error_code; } ;
struct TYPE_8__ {int mp_state; TYPE_3__ apf; TYPE_1__ exception; } ;
struct kvm_vcpu {TYPE_4__ arch; } ;
struct TYPE_6__ {int token; int gfn; } ;
struct kvm_async_pf {TYPE_2__ arch; int gva; scalar_t__ wakeup_all; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct kvm_vcpu*,scalar_t__*) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ) ;
 int FUNC_3 (struct kvm_vcpu*,struct x86_exception*) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5(struct kvm_vcpu *VAR_5,
     struct kvm_async_pf *VAR_6)
{
 struct x86_exception VAR_7;
 u32 VAR_8;

 if (VAR_6->wakeup_all)
  VAR_6->arch.token = ~0;
 else
  FUNC_2(VAR_5, VAR_6->arch.gfn);
 FUNC_4(VAR_6->arch.token, VAR_6->gva);

 if (VAR_5->arch.apf.msr_val & VAR_0 &&
     !FUNC_0(VAR_5, &VAR_8)) {
  if (VAR_8 == VAR_2 &&
      VAR_5->arch.exception.pending &&
      VAR_5->arch.exception.nr == VAR_4 &&
      !FUNC_1(VAR_5, 0)) {
   VAR_5->arch.exception.injected = 0;
   VAR_5->arch.exception.pending = 0;
   VAR_5->arch.exception.nr = 0;
   VAR_5->arch.exception.has_error_code = 0;
   VAR_5->arch.exception.error_code = 0;
   VAR_5->arch.exception.has_payload = 0;
   VAR_5->arch.exception.payload = 0;
  } else if (!FUNC_1(VAR_5, VAR_3)) {
   VAR_7.vector = VAR_4;
   VAR_7.error_code_valid = 1;
   VAR_7.error_code = 0;
   VAR_7.nested_page_fault = 0;
   VAR_7.address = VAR_6->arch.token;
   VAR_7.async_page_fault = 1;
   FUNC_3(VAR_5, &VAR_7);
  }
 }
 VAR_5->arch.apf.halted = 0;
 VAR_5->arch.mp_state = VAR_1;
}
