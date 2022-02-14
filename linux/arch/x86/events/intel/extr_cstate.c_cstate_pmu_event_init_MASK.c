
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_8__ {int config; int idx; int event_base; } ;
struct TYPE_7__ {int config; scalar_t__ type; scalar_t__ sample_period; } ;
struct perf_event {int cpu; TYPE_2__ hw; TYPE_4__* pmu; TYPE_1__ attr; } ;
struct TYPE_11__ {int msr; } ;
struct TYPE_10__ {scalar_t__ type; } ;
struct TYPE_9__ {int msr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned long,int) ;
 TYPE_6__* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int VAR_7 ;
 TYPE_4__ VAR_8 ;
 int VAR_9 ;
 TYPE_4__ VAR_10 ;
 int VAR_11 ;
 TYPE_3__* VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct perf_event *VAR_14)
{
 u64 VAR_15 = VAR_14->attr.config;
 int VAR_16;

 if (VAR_14->attr.type != VAR_14->pmu->type)
  return -VAR_2;


 if (VAR_14->attr.sample_period)
  return -VAR_0;

 if (VAR_14->cpu < 0)
  return -VAR_0;

 if (VAR_14->pmu == &VAR_8) {
  if (VAR_15 >= VAR_3)
   return -VAR_0;
  VAR_15 = FUNC_0((unsigned long)VAR_15, VAR_3);
  if (!(VAR_6 & (1 << VAR_15)))
   return -VAR_0;
  VAR_14->hw.event_base = VAR_5[VAR_15].msr;
  VAR_16 = FUNC_1(&VAR_7,
          FUNC_3(VAR_14->cpu));
 } else if (VAR_14->pmu == &VAR_10) {
  if (VAR_15 >= VAR_4)
   return -VAR_0;
  VAR_15 = FUNC_0((unsigned long)VAR_15, VAR_4);
  if (!(VAR_13 & (1 << VAR_15)))
   return -VAR_0;
  VAR_14->hw.event_base = VAR_12[VAR_15].msr;
  VAR_16 = FUNC_1(&VAR_9,
          FUNC_2(VAR_14->cpu));
 } else {
  return -VAR_2;
 }

 if (VAR_16 >= VAR_11)
  return -VAR_1;

 VAR_14->cpu = VAR_16;
 VAR_14->hw.config = VAR_15;
 VAR_14->hw.idx = -1;
 return 0;
}
