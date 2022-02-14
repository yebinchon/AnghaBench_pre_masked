
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x86_emulate_ctxt {int op_bytes; int ad_bytes; int eflags; scalar_t__ eip; scalar_t__ _eip; } ;
struct TYPE_2__ {struct x86_emulate_ctxt emulate_ctxt; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct x86_emulate_ctxt*,int) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (int ,struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*,scalar_t__) ;
 int FUNC_4 (struct kvm_vcpu*,int ) ;

void FUNC_5(struct kvm_vcpu *VAR_2, int VAR_3, int VAR_4)
{
 struct x86_emulate_ctxt *VAR_5 = &VAR_2->arch.emulate_ctxt;
 int VAR_6;

 FUNC_1(VAR_2);

 VAR_5->op_bytes = 2;
 VAR_5->ad_bytes = 2;
 VAR_5->_eip = VAR_5->eip + VAR_4;
 VAR_6 = FUNC_0(VAR_5, VAR_3);

 if (VAR_6 != VAR_1) {
  FUNC_2(VAR_0, VAR_2);
 } else {
  VAR_5->eip = VAR_5->_eip;
  FUNC_3(VAR_2, VAR_5->eip);
  FUNC_4(VAR_2, VAR_5->eflags);
 }
}
