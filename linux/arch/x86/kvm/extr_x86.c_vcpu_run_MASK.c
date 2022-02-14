
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int signal_exits; int request_irq_exits; } ;
struct TYPE_4__ {int l1tf_flush_l1d; } ;
struct kvm_vcpu {void* srcu_idx; TYPE_3__ stat; TYPE_2__* run; TYPE_1__ arch; struct kvm* kvm; } ;
struct kvm {int srcu; } ;
struct TYPE_5__ {int exit_reason; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct kvm_vcpu*) ;
 int FUNC_2 (struct kvm_vcpu*) ;
 int FUNC_3 (int ,struct kvm_vcpu*) ;
 scalar_t__ FUNC_4 (struct kvm_vcpu*) ;
 int FUNC_5 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_6 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_7 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 void* FUNC_10 (int *) ;
 int FUNC_11 (int *,void*) ;
 int FUNC_12 (struct kvm*,struct kvm_vcpu*) ;
 int FUNC_13 (struct kvm_vcpu*) ;

__attribute__((used)) static int FUNC_14(struct kvm_vcpu *VAR_5)
{
 int VAR_6;
 struct kvm *VAR_7 = VAR_5->kvm;

 VAR_5->srcu_idx = FUNC_10(&VAR_7->srcu);
 VAR_5->arch.l1tf_flush_l1d = 1;

 for (;;) {
  if (FUNC_7(VAR_5)) {
   VAR_6 = FUNC_13(VAR_5);
  } else {
   VAR_6 = FUNC_12(VAR_7, VAR_5);
  }

  if (VAR_6 <= 0)
   break;

  FUNC_3(VAR_3, VAR_5);
  if (FUNC_4(VAR_5))
   FUNC_5(VAR_5);

  if (FUNC_1(VAR_5) &&
   FUNC_6(VAR_5)) {
   VAR_6 = 0;
   VAR_5->run->exit_reason = VAR_2;
   ++VAR_5->stat.request_irq_exits;
   break;
  }

  FUNC_2(VAR_5);

  if (FUNC_9(VAR_4)) {
   VAR_6 = -VAR_0;
   VAR_5->run->exit_reason = VAR_1;
   ++VAR_5->stat.signal_exits;
   break;
  }
  if (FUNC_8()) {
   FUNC_11(&VAR_7->srcu, VAR_5->srcu_idx);
   FUNC_0();
   VAR_5->srcu_idx = FUNC_10(&VAR_7->srcu);
  }
 }

 FUNC_11(&VAR_7->srcu, VAR_5->srcu_idx);

 return VAR_6;
}
