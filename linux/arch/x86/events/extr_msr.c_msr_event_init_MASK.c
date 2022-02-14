
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int idx; int config; int event_base; } ;
struct TYPE_7__ {int config; scalar_t__ type; scalar_t__ sample_period; } ;
struct perf_event {TYPE_1__ hw; TYPE_3__ attr; TYPE_2__* pmu; } ;
struct TYPE_8__ {int msr; } ;
struct TYPE_6__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long,int) ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct perf_event *VAR_5)
{
 u64 VAR_6 = VAR_5->attr.config;

 if (VAR_5->attr.type != VAR_5->pmu->type)
  return -VAR_1;


 if (VAR_5->attr.sample_period)
  return -VAR_0;

 if (VAR_6 >= VAR_2)
  return -VAR_0;

 VAR_6 = FUNC_0((unsigned long)VAR_6, VAR_2);

 if (!(VAR_4 & (1 << VAR_6)))
  return -VAR_0;

 VAR_5->hw.idx = -1;
 VAR_5->hw.event_base = VAR_3[VAR_6].msr;
 VAR_5->hw.config = VAR_6;

 return 0;
}
