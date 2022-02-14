
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_6__ {int idx; struct task_struct* target; } ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ sample_period; } ;
struct perf_event {TYPE_1__* pmu; TYPE_3__ hw; TYPE_2__ attr; } ;
struct TYPE_4__ {scalar_t__ type; int task_ctx_nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct perf_event *VAR_4)
{
 struct task_struct *VAR_5;

 if (VAR_4->attr.type != VAR_4->pmu->type)
  return -VAR_2;

 if (!FUNC_0(VAR_0))
  return -VAR_1;


 if (VAR_4->attr.sample_period == 0)
  return -VAR_2;

 VAR_4->hw.idx = -1;
 VAR_5 = VAR_4->hw.target;

 VAR_4->pmu->task_ctx_nr = VAR_3;
 return 0;
}
