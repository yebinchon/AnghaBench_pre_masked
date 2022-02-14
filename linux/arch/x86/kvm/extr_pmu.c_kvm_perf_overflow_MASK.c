
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct perf_sample_data {int dummy; } ;
struct perf_event {struct kvm_pmc* overflow_handler_context; } ;
struct kvm_pmu {int global_status; int reprogram_pmi; } ;
struct kvm_pmc {int vcpu; int idx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long*) ;
 int FUNC_1 (int ,int ) ;
 struct kvm_pmu* FUNC_2 (struct kvm_pmc*) ;
 int FUNC_3 (int ,unsigned long*) ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_1,
         struct perf_sample_data *VAR_2,
         struct pt_regs *VAR_3)
{
 struct kvm_pmc *VAR_4 = VAR_1->overflow_handler_context;
 struct kvm_pmu *VAR_5 = FUNC_2(VAR_4);

 if (!FUNC_3(VAR_4->idx,
         (unsigned long *)&VAR_5->reprogram_pmi)) {
  FUNC_0(VAR_4->idx, (unsigned long *)&VAR_5->global_status);
  FUNC_1(VAR_0, VAR_4->vcpu);
 }
}
