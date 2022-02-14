
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct perf_sample_data {int dummy; } ;
struct perf_event {struct kvm_pmc* overflow_handler_context; } ;
struct kvm_pmu {int irq_work; int global_status; int reprogram_pmi; } ;
struct kvm_pmc {int vcpu; int idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 struct kvm_pmu* FUNC_4 (struct kvm_pmc*) ;
 int FUNC_5 (int ,unsigned long*) ;

__attribute__((used)) static void FUNC_6(struct perf_event *VAR_2,
       struct perf_sample_data *VAR_3,
       struct pt_regs *VAR_4)
{
 struct kvm_pmc *VAR_5 = VAR_2->overflow_handler_context;
 struct kvm_pmu *VAR_6 = FUNC_4(VAR_5);

 if (!FUNC_5(VAR_5->idx,
         (unsigned long *)&VAR_6->reprogram_pmi)) {
  FUNC_0(VAR_5->idx, (unsigned long *)&VAR_6->global_status);
  FUNC_3(VAR_1, VAR_5->vcpu);
  if (!FUNC_2())
   FUNC_1(&FUNC_4(VAR_5)->irq_work);
  else
   FUNC_3(VAR_0, VAR_5->vcpu);
 }
}
