
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_7__ {int idx; int event_base; scalar_t__ sample_period; } ;
struct TYPE_5__ {int config; scalar_t__ type; } ;
struct perf_event {int cpu; int destroy; TYPE_3__ hw; TYPE_2__* pmu; TYPE_1__ attr; } ;
struct imc_pmu_ref {scalar_t__ refc; int lock; } ;
struct imc_pmu {int counter_mem_size; } ;
struct imc_mem_info {scalar_t__ vbase; } ;
struct TYPE_8__ {struct imc_mem_info* mem_info; } ;
struct TYPE_6__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 struct imc_pmu_ref* VAR_7 ;
 int FUNC_0 (int) ;
 struct imc_pmu* FUNC_1 (struct perf_event*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_7(struct perf_event *VAR_9)
{
 int VAR_10, VAR_11;
 u64 VAR_12 = VAR_9->attr.config;
 struct imc_mem_info *VAR_13;
 struct imc_pmu *VAR_14;
 struct imc_pmu_ref *VAR_15;

 if (VAR_9->attr.type != VAR_9->pmu->type)
  return -VAR_2;


 if (VAR_9->hw.sample_period)
  return -VAR_0;

 if (VAR_9->cpu < 0)
  return -VAR_0;

 VAR_9->hw.idx = -1;
 VAR_14 = FUNC_1(VAR_9);


 if (((VAR_12 & VAR_3) > VAR_14->counter_mem_size))
  return -VAR_0;

 if (!FUNC_2(VAR_9->cpu))
  return -VAR_1;

 VAR_10 = VAR_9->cpu / VAR_8;
 VAR_13 = &VAR_6->mem_info[VAR_10];
 if ((!VAR_13->vbase))
  return -VAR_1;


 VAR_15 = &VAR_7[VAR_10];
 if (!VAR_15)
  return -VAR_0;







 FUNC_3(&VAR_15->lock);
 if (VAR_15->refc == 0) {
  VAR_11 = FUNC_5(VAR_4,
          FUNC_0(VAR_9->cpu));
  if (VAR_11) {
   FUNC_4(&VAR_15->lock);
   FUNC_6("core-imc: Unable to start the counters for core %d\n",
         VAR_10);
   return VAR_11;
  }
 }
 ++VAR_15->refc;
 FUNC_4(&VAR_15->lock);

 VAR_9->hw.event_base = (u64)VAR_13->vbase + (VAR_12 & VAR_3);
 VAR_9->destroy = VAR_5;
 return 0;
}
