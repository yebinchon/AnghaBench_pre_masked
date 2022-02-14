
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int wait; int pending_exceptions; int pc; } ;
struct TYPE_5__ {int wait_exits; } ;
struct kvm_vcpu {TYPE_1__* run; TYPE_3__ arch; TYPE_2__ stat; } ;
typedef enum emulation_result { ____Placeholder_emulation_result } emulation_result ;
struct TYPE_4__ {int exit_reason; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,struct kvm_vcpu*) ;
 int FUNC_1 (int ,struct kvm_vcpu*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct kvm_vcpu*) ;
 int FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*,int ) ;

enum emulation_result FUNC_6(struct kvm_vcpu *VAR_4)
{
 FUNC_2("[%#lx] !!!WAIT!!! (%#lx)\n", VAR_4->arch.pc,
    VAR_4->arch.pending_exceptions);

 ++VAR_4->stat.wait_exits;
 FUNC_5(VAR_4, VAR_3);
 if (!VAR_4->arch.pending_exceptions) {
  FUNC_4(VAR_4);
  VAR_4->arch.wait = 1;
  FUNC_3(VAR_4);





  if (FUNC_0(VAR_2, VAR_4)) {
   FUNC_1(VAR_2, VAR_4);
   VAR_4->run->exit_reason = VAR_1;
  }
 }

 return VAR_0;
}
