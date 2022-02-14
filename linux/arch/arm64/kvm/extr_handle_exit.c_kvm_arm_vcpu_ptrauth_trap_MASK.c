
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct kvm_cpu_context* host_cpu_context; } ;
struct kvm_vcpu {TYPE_1__ arch; } ;
struct kvm_cpu_context {int sys_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (struct kvm_vcpu*) ;

void FUNC_4(struct kvm_vcpu *VAR_5)
{
 struct kvm_cpu_context *VAR_6;

 if (FUNC_2(VAR_5)) {
  FUNC_3(VAR_5);
  VAR_6 = VAR_5->arch.host_cpu_context;
  FUNC_0(VAR_6->sys_regs, VAR_3);
  FUNC_0(VAR_6->sys_regs, VAR_4);
  FUNC_0(VAR_6->sys_regs, VAR_0);
  FUNC_0(VAR_6->sys_regs, VAR_1);
  FUNC_0(VAR_6->sys_regs, VAR_2);
 } else {
  FUNC_1(VAR_5);
 }
}
