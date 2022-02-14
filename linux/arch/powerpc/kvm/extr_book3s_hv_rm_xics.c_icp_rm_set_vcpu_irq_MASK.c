
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvmppc_icp {struct kvm_vcpu* rm_kick_target; int rm_action; } ;
struct TYPE_4__ {int thread_cpu; int pending_exceptions; struct kvmppc_icp* icp; } ;
struct TYPE_3__ {int queue_intr; } ;
struct kvm_vcpu {TYPE_2__ arch; TYPE_1__ stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,struct kvm_vcpu*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_6 ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct kvm_vcpu *VAR_7,
    struct kvm_vcpu *VAR_8)
{
 struct kvmppc_icp *VAR_9 = VAR_8->arch.icp;
 int VAR_10;
 int VAR_11;


 VAR_7->stat.queue_intr++;
 FUNC_6(VAR_0, &VAR_7->arch.pending_exceptions);


 if (VAR_7 == VAR_8) {
  FUNC_5(VAR_2, FUNC_4(VAR_2) | VAR_1);
  return;
 }

 if (FUNC_8() && FUNC_2()) {

  VAR_9->rm_action |= VAR_3;
  VAR_9->rm_kick_target = VAR_7;
  return;
 }






 VAR_10 = VAR_7->arch.thread_cpu;
 if (VAR_10 < 0 || VAR_10 >= VAR_6) {
  VAR_11 = -1;
  if (VAR_5 && VAR_4)
   VAR_11 = FUNC_0(VAR_3);
  if (VAR_11 != -1) {
   FUNC_1(VAR_11, VAR_7);
  } else {
   VAR_9->rm_action |= VAR_3;
   VAR_9->rm_kick_target = VAR_7;
  }
  return;
 }

 FUNC_7();
 FUNC_3(VAR_10);
}
