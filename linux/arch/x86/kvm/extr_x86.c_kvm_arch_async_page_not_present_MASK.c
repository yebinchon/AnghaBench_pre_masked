
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x86_exception {int error_code_valid; int nested_page_fault; int async_page_fault; int address; scalar_t__ error_code; int vector; } ;
struct kvm_vcpu {int dummy; } ;
struct TYPE_2__ {int token; int gfn; } ;
struct kvm_async_pf {TYPE_1__ arch; int gva; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct kvm_vcpu*,int ) ;
 int FUNC_1 (struct kvm_vcpu*,int ) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,struct x86_exception*) ;
 int FUNC_4 (int ,struct kvm_vcpu*) ;
 int FUNC_5 (int ,int ) ;

void FUNC_6(struct kvm_vcpu *VAR_3,
         struct kvm_async_pf *VAR_4)
{
 struct x86_exception VAR_5;

 FUNC_5(VAR_4->arch.token, VAR_4->gva);
 FUNC_1(VAR_3, VAR_4->arch.gfn);

 if (FUNC_2(VAR_3) &&
     !FUNC_0(VAR_3, VAR_0)) {
  VAR_5.vector = VAR_2;
  VAR_5.error_code_valid = 1;
  VAR_5.error_code = 0;
  VAR_5.nested_page_fault = 0;
  VAR_5.address = VAR_4->arch.token;
  VAR_5.async_page_fault = 1;
  FUNC_3(VAR_3, &VAR_5);
 } else {
  FUNC_4(VAR_1, VAR_3);
 }
}
