
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; int config; } ;
struct hw_perf_event {int config; int idx; } ;
struct perf_event {int attach_state; int cpu; TYPE_2__ attr; TYPE_1__* pmu; struct hw_perf_event hw; } ;
struct amd_uncore {int cpu; } ;
struct TYPE_6__ {int cpu_core_id; int apicid; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__ FUNC_0 (int ) ;
 struct amd_uncore* FUNC_1 (struct perf_event*) ;
 scalar_t__ FUNC_2 (struct perf_event*) ;
 scalar_t__ FUNC_3 (struct perf_event*) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_4(struct perf_event *VAR_10)
{
 struct amd_uncore *VAR_11;
 struct hw_perf_event *VAR_12 = &VAR_10->hw;

 if (VAR_10->attr.type != VAR_10->pmu->type)
  return -VAR_6;
 if (FUNC_3(VAR_10) || VAR_10->attach_state & VAR_7)
  return -VAR_4;


 VAR_12->config = VAR_10->attr.config & VAR_3;
 VAR_12->idx = -1;

 if (VAR_10->cpu < 0)
  return -VAR_4;





 if (VAR_8 && FUNC_2(VAR_10)) {
  int VAR_13 = 2 * (FUNC_0(VAR_10->cpu).cpu_core_id % 4);

  if (VAR_9 > 1)
   VAR_13 += FUNC_0(VAR_10->cpu).apicid & 1;

  VAR_12->config |= (1ULL << (VAR_2 + VAR_13) &
    VAR_1) | VAR_0;
 }

 VAR_11 = FUNC_1(VAR_10);
 if (!VAR_11)
  return -VAR_5;





 VAR_10->cpu = VAR_11->cpu;

 return 0;
}
