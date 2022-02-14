
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct swait_queue_head {int dummy; } ;
struct TYPE_4__ {int thread_cpu; } ;
struct TYPE_3__ {int halt_wakeup; } ;
struct kvm_vcpu {int cpu; TYPE_2__ arch; TYPE_1__ stat; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct swait_queue_head* FUNC_2 (struct kvm_vcpu*) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct swait_queue_head*) ;
 scalar_t__ FUNC_6 (struct swait_queue_head*) ;

__attribute__((used)) static void FUNC_7(struct kvm_vcpu *VAR_1)
{
 int VAR_2;
 struct swait_queue_head *VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (FUNC_6(VAR_3)) {
  FUNC_5(VAR_3);
  ++VAR_1->stat.halt_wakeup;
 }

 VAR_2 = FUNC_0(VAR_1->arch.thread_cpu);
 if (VAR_2 >= 0 && FUNC_3(VAR_2))
  return;


 VAR_2 = VAR_1->cpu;
 if (VAR_2 >= 0 && VAR_2 < VAR_0 && FUNC_1(VAR_2))
  FUNC_4(VAR_2);
}
