
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct rapl_pmu {int cpu; } ;
struct TYPE_8__ {int config; int idx; int event_base; } ;
struct TYPE_7__ {int config; scalar_t__ type; scalar_t__ sample_period; } ;
struct perf_event {TYPE_3__ hw; struct rapl_pmu* pmu_private; int cpu; TYPE_2__ attr; int event_caps; } ;
struct TYPE_10__ {int msr; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_9__ {TYPE_1__ pmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (long,int) ;
 struct rapl_pmu* FUNC_1 (int ) ;
 int VAR_5 ;
 TYPE_5__* VAR_6 ;
 TYPE_4__* VAR_7 ;

__attribute__((used)) static int FUNC_2(struct perf_event *VAR_8)
{
 u64 VAR_9 = VAR_8->attr.config & VAR_4;
 int VAR_10, VAR_11 = 0;
 struct rapl_pmu *VAR_12;


 if (VAR_8->attr.type != VAR_7->pmu.type)
  return -VAR_1;


 if (VAR_8->attr.config & ~VAR_4)
  return -VAR_0;

 if (VAR_8->cpu < 0)
  return -VAR_0;

 VAR_8->event_caps |= VAR_3;

 if (!VAR_9 || VAR_9 >= VAR_2 + 1)
  return -VAR_0;

 VAR_9 = FUNC_0((long)VAR_9, VAR_2 + 1);
 VAR_10 = VAR_9 - 1;


 if (!(VAR_5 & (1 << VAR_10)))
  return -VAR_0;


 if (VAR_8->attr.sample_period)
  return -VAR_0;


 VAR_12 = FUNC_1(VAR_8->cpu);
 if (!VAR_12)
  return -VAR_0;
 VAR_8->cpu = VAR_12->cpu;
 VAR_8->pmu_private = VAR_12;
 VAR_8->hw.event_base = VAR_6[VAR_10].msr;
 VAR_8->hw.config = VAR_9;
 VAR_8->hw.idx = VAR_10;

 return VAR_11;
}
