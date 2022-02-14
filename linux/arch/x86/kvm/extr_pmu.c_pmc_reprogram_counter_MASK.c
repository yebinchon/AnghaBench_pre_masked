
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct perf_event_attr {int size; int pinned; int exclude_idle; int exclude_host; int exclude_user; int exclude_kernel; unsigned int config; int sample_period; int type; } ;
struct perf_event {int dummy; } ;
struct kvm_pmc {int counter; int idx; struct perf_event* perf_event; } ;
typedef int attr ;
struct TYPE_2__ {int reprogram_pmi; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (int ,unsigned long*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct perf_event* FUNC_3 (struct perf_event_attr*,int,int ,int ,struct kvm_pmc*) ;
 int FUNC_4 (struct kvm_pmc*) ;
 TYPE_1__* FUNC_5 (struct kvm_pmc*) ;
 int FUNC_6 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct kvm_pmc *VAR_5, u32 VAR_6,
      unsigned VAR_7, bool VAR_8,
      bool VAR_9, bool VAR_10,
      bool VAR_11, bool VAR_12)
{
 struct perf_event *VAR_13;
 struct perf_event_attr VAR_14 = {
  .type = VAR_6,
  .size = sizeof(VAR_14),
  .pinned = 1,
  .exclude_idle = 1,
  .exclude_host = 1,
  .exclude_user = VAR_8,
  .exclude_kernel = VAR_9,
  .config = VAR_7,
 };

 VAR_14.sample_period = (-VAR_5->counter) & FUNC_4(VAR_5);

 if (VAR_11)
  VAR_14.config |= VAR_0;
 if (VAR_12) {





  VAR_14.sample_period = 0;
  VAR_14.config |= VAR_1;
 }

 VAR_13 = FUNC_3(&VAR_14, -1, VAR_2,
       VAR_10 ? VAR_4 :
       VAR_3, VAR_5);
 if (FUNC_0(VAR_13)) {
  FUNC_6("kvm_pmu: event creation failed %ld for pmc->idx = %d\n",
       FUNC_1(VAR_13), VAR_5->idx);
  return;
 }

 VAR_5->perf_event = VAR_13;
 FUNC_2(VAR_5->idx, (unsigned long*)&FUNC_5(VAR_5)->reprogram_pmi);
}
