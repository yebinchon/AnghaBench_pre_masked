
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int singlestep_rip; } ;
struct kvm_vcpu {int guest_debug; TYPE_1__ arch; struct kvm_run* run; } ;
struct TYPE_6__ {int dr6; int exception; int pc; } ;
struct TYPE_5__ {TYPE_3__ arch; } ;
struct kvm_run {int exit_reason; TYPE_2__ debug; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kvm_vcpu*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct kvm_vcpu *VAR_6)
{
 struct kvm_run *VAR_7 = VAR_6->run;

 if (VAR_6->guest_debug & VAR_5) {
  VAR_7->debug.arch.dr6 = VAR_1 | VAR_2 | VAR_3;
  VAR_7->debug.arch.pc = VAR_6->arch.singlestep_rip;
  VAR_7->debug.arch.exception = VAR_0;
  VAR_7->exit_reason = VAR_4;
  return 0;
 }
 FUNC_0(VAR_6, VAR_0, VAR_1);
 return 1;
}
