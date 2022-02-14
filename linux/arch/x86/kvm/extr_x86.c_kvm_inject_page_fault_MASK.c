
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct x86_exception {int address; int error_code; scalar_t__ async_page_fault; } ;
struct TYPE_5__ {int nested_apf_token; } ;
struct TYPE_7__ {int nested_apf; } ;
struct TYPE_8__ {TYPE_1__ apf; TYPE_3__ exception; } ;
struct TYPE_6__ {int pf_guest; } ;
struct kvm_vcpu {TYPE_4__ arch; TYPE_2__ stat; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_vcpu*) ;
 int FUNC_1 (struct kvm_vcpu*,int ,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int ,int ) ;

void FUNC_3(struct kvm_vcpu *VAR_1, struct x86_exception *VAR_2)
{
 ++VAR_1->stat.pf_guest;
 VAR_1->arch.exception.nested_apf =
  FUNC_0(VAR_1) && VAR_2->async_page_fault;
 if (VAR_1->arch.exception.nested_apf) {
  VAR_1->arch.apf.nested_apf_token = VAR_2->address;
  FUNC_1(VAR_1, VAR_0, VAR_2->error_code);
 } else {
  FUNC_2(VAR_1, VAR_0, VAR_2->error_code,
     VAR_2->address);
 }
}
