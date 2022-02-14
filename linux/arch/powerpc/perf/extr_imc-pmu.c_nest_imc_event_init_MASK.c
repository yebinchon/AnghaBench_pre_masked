
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_6__ {scalar_t__ event_base; scalar_t__ sample_period; } ;
struct TYPE_4__ {int config; scalar_t__ type; } ;
struct perf_event {scalar_t__ cpu; int destroy; TYPE_3__ hw; TYPE_2__* pmu; TYPE_1__ attr; } ;
struct imc_pmu_ref {scalar_t__ refc; int lock; } ;
struct imc_pmu {int counter_mem_size; struct imc_mem_info* mem_info; } ;
struct imc_mem_info {scalar_t__ vbase; int id; } ;
struct TYPE_5__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 struct imc_pmu_ref* FUNC_3 (scalar_t__) ;
 struct imc_pmu* FUNC_4 (struct perf_event*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*,int) ;

__attribute__((used)) static int FUNC_9(struct perf_event *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 u32 VAR_10, VAR_11 = VAR_6->attr.config;
 struct imc_mem_info *VAR_12;
 struct imc_pmu *VAR_13;
 struct imc_pmu_ref *VAR_14;
 bool VAR_15 = 0;

 if (VAR_6->attr.type != VAR_6->pmu->type)
  return -VAR_2;


 if (VAR_6->hw.sample_period)
  return -VAR_0;

 if (VAR_6->cpu < 0)
  return -VAR_0;

 VAR_13 = FUNC_4(VAR_6);


 if ((VAR_11 & VAR_3) > VAR_13->counter_mem_size)
  return -VAR_0;





 VAR_7 = FUNC_0(VAR_6->cpu);


 if (VAR_7 < 0)
  return -VAR_1;

 VAR_12 = VAR_13->mem_info;
 do {
  if (VAR_12->id == VAR_7) {
   VAR_15 = 1;
   break;
  }
  VAR_12++;
 } while (VAR_12->vbase != 0);

 if (!VAR_15)
  return -VAR_1;




 VAR_10 = VAR_11 & VAR_3;
 VAR_6->hw.event_base = (u64)VAR_12->vbase + VAR_10;
 VAR_9 = FUNC_1(VAR_6->cpu);






 VAR_14 = FUNC_3(VAR_6->cpu);
 if (!VAR_14)
  return -VAR_0;

 FUNC_5(&VAR_14->lock);
 if (VAR_14->refc == 0) {
  VAR_8 = FUNC_7(VAR_4,
          FUNC_2(VAR_6->cpu));
  if (VAR_8) {
   FUNC_6(&VAR_14->lock);
   FUNC_8("nest-imc: Unable to start the counters for node %d\n",
         VAR_9);
   return VAR_8;
  }
 }
 ++VAR_14->refc;
 FUNC_6(&VAR_14->lock);

 VAR_6->destroy = VAR_5;
 return 0;
}
