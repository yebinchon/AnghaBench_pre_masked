
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct task_struct {int dummy; } ;
struct TYPE_4__ {int idx; struct task_struct* target; scalar_t__ sample_period; } ;
struct TYPE_5__ {int config; scalar_t__ type; } ;
struct perf_event {TYPE_3__* pmu; TYPE_1__ hw; TYPE_2__ attr; } ;
struct imc_pmu {int counter_mem_size; } ;
struct TYPE_6__ {scalar_t__ type; int task_ctx_nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct imc_pmu* FUNC_1 (struct perf_event*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct perf_event *VAR_6)
{
 u32 VAR_7 = VAR_6->attr.config;
 struct task_struct *VAR_8;
 struct imc_pmu *VAR_9;

 if (VAR_6->attr.type != VAR_6->pmu->type)
  return -VAR_3;

 if (!FUNC_0(VAR_0))
  return -VAR_1;


 if (VAR_6->hw.sample_period)
  return -VAR_2;

 VAR_6->hw.idx = -1;
 VAR_9 = FUNC_1(VAR_6);


 if (((VAR_7 & VAR_4) > VAR_9->counter_mem_size))
  return -VAR_2;

 VAR_8 = VAR_6->hw.target;
 if (!VAR_8)
  return -VAR_2;

 VAR_6->pmu->task_ctx_nr = VAR_5;
 return 0;
}
