
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int preempted; int version; int steal; } ;
struct TYPE_8__ {int msr_val; TYPE_4__ steal; int stime; scalar_t__ last_steal; } ;
struct TYPE_9__ {TYPE_2__ st; } ;
struct kvm_vcpu {TYPE_3__ arch; int kvm; int vcpu_id; } ;
struct kvm_steal_time {int dummy; } ;
struct TYPE_7__ {scalar_t__ run_delay; } ;
struct TYPE_11__ {TYPE_1__ sched_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 int FUNC_0 (int ,int *,TYPE_4__*,int) ;
 int FUNC_1 (struct kvm_vcpu*,int) ;
 int FUNC_2 (int ,int *,TYPE_4__*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int*,int ) ;

__attribute__((used)) static void FUNC_7(struct kvm_vcpu *VAR_3)
{
 if (!(VAR_3->arch.st.msr_val & VAR_0))
  return;

 if (FUNC_5(FUNC_0(VAR_3->kvm, &VAR_3->arch.st.stime,
  &VAR_3->arch.st.steal, sizeof(struct kvm_steal_time))))
  return;





 FUNC_4(VAR_3->vcpu_id,
  VAR_3->arch.st.steal.preempted & VAR_1);
 if (FUNC_6(&VAR_3->arch.st.steal.preempted, 0) & VAR_1)
  FUNC_1(VAR_3, 0);

 if (VAR_3->arch.st.steal.version & 1)
  VAR_3->arch.st.steal.version += 1;

 VAR_3->arch.st.steal.version += 1;

 FUNC_2(VAR_3->kvm, &VAR_3->arch.st.stime,
  &VAR_3->arch.st.steal, sizeof(struct kvm_steal_time));

 FUNC_3();

 VAR_3->arch.st.steal.steal += VAR_2->sched_info.run_delay -
  VAR_3->arch.st.last_steal;
 VAR_3->arch.st.last_steal = VAR_2->sched_info.run_delay;

 FUNC_2(VAR_3->kvm, &VAR_3->arch.st.stime,
  &VAR_3->arch.st.steal, sizeof(struct kvm_steal_time));

 FUNC_3();

 VAR_3->arch.st.steal.version += 1;

 FUNC_2(VAR_3->kvm, &VAR_3->arch.st.stime,
  &VAR_3->arch.st.steal, sizeof(struct kvm_steal_time));
}
