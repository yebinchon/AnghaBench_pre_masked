
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ptid; struct kvmppc_vcore* kvm_vcore; scalar_t__ fake_suspend; struct kvm_vcpu* kvm_vcpu; } ;
struct paca_struct {TYPE_3__ kvm_hstate; } ;
struct kvmppc_vcore {int pcpu; struct kvm* kvm; } ;
struct TYPE_4__ {int thread_cpu; scalar_t__ ptid; scalar_t__ timer_running; int dec_timer; } ;
struct kvm_vcpu {int cpu; TYPE_1__ arch; } ;
struct TYPE_5__ {int cpu_in_guest; } ;
struct kvm {TYPE_2__ arch; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 struct paca_struct** VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct kvm_vcpu *VAR_1, struct kvmppc_vcore *VAR_2)
{
 int VAR_3;
 struct paca_struct *VAR_4;
 struct kvm *VAR_5 = VAR_2->kvm;

 VAR_3 = VAR_2->pcpu;
 if (VAR_1) {
  if (VAR_1->arch.timer_running) {
   FUNC_1(&VAR_1->arch.dec_timer);
   VAR_1->arch.timer_running = 0;
  }
  VAR_3 += VAR_1->arch.ptid;
  VAR_1->cpu = VAR_2->pcpu;
  VAR_1->arch.thread_cpu = VAR_3;
  FUNC_0(VAR_3, &VAR_5->arch.cpu_in_guest);
 }
 VAR_4 = VAR_0[VAR_3];
 VAR_4->kvm_hstate.kvm_vcpu = VAR_1;
 VAR_4->kvm_hstate.ptid = VAR_3 - VAR_2->pcpu;
 VAR_4->kvm_hstate.fake_suspend = 0;

 FUNC_4();
 VAR_4->kvm_hstate.kvm_vcore = VAR_2;
 if (VAR_3 != FUNC_3())
  FUNC_2(VAR_3);
}
