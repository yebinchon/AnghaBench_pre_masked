
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct cpumask {int dummy; } ;
struct vmbus_channel {int numa_node; int target_cpu; scalar_t__ affinity_policy; void* target_vp; struct cpumask alloced_cpus_in_node; struct vmbus_channel* primary_channel; } ;
typedef int cpumask_var_t ;
struct TYPE_4__ {struct cpumask* hv_numa_map; } ;
struct TYPE_3__ {int perf_device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct cpumask*) ;
 int FUNC_2 (int ,struct cpumask*) ;
 scalar_t__ FUNC_3 (struct cpumask*) ;
 scalar_t__ FUNC_4 (struct cpumask*,struct cpumask*) ;
 int FUNC_5 (int,int ) ;
 struct cpumask* FUNC_6 (int) ;
 int FUNC_7 (int,struct cpumask*) ;
 int FUNC_8 (int,struct cpumask*) ;
 scalar_t__ FUNC_9 (struct cpumask*) ;
 int FUNC_10 (int ,struct cpumask*,struct cpumask*) ;
 int FUNC_11 (int ) ;
 TYPE_2__ VAR_6 ;
 void* FUNC_12 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 TYPE_1__* VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void FUNC_15(struct vmbus_channel *VAR_12, u16 VAR_13)
{
 u32 VAR_14;
 bool VAR_15 = VAR_10[VAR_13].perf_device;
 struct vmbus_channel *VAR_16 = VAR_12->primary_channel;
 int VAR_17;
 cpumask_var_t VAR_18;
 struct cpumask *VAR_19;

 if ((VAR_11 == VAR_4) ||
     (VAR_11 == VAR_3) || (!VAR_15) ||
     !FUNC_0(&VAR_18, VAR_0)) {







  VAR_12->numa_node = 0;
  VAR_12->target_cpu = 0;
  VAR_12->target_vp = FUNC_12(0);
  return;
 }

 FUNC_13(&VAR_5);






 if ((VAR_12->affinity_policy == VAR_1) || (!VAR_16)) {
  while (1) {
   VAR_17 = VAR_7++;
   if (VAR_17 == VAR_9) {
    VAR_17 = VAR_7 = 0;
    continue;
   }
   if (FUNC_3(FUNC_6(VAR_17)))
    continue;
   break;
  }
  VAR_12->numa_node = VAR_17;
  VAR_16 = VAR_12;
 }
 VAR_19 = &VAR_6.hv_numa_map[VAR_16->numa_node];

 if (FUNC_9(VAR_19) ==
     FUNC_9(FUNC_6(VAR_16->numa_node))) {




  FUNC_1(VAR_19);
 }

 FUNC_10(VAR_18, VAR_19,
      FUNC_6(VAR_16->numa_node));

 VAR_14 = -1;

 if (VAR_16->affinity_policy == VAR_2) {






  if (FUNC_4(&VAR_16->alloced_cpus_in_node,
      FUNC_6(VAR_16->numa_node)))
   FUNC_1(&VAR_16->alloced_cpus_in_node);
 }

 while (1) {
  VAR_14 = FUNC_5(VAR_14, VAR_18);
  if (VAR_14 >= VAR_8) {
   VAR_14 = -1;
   FUNC_2(VAR_18,
         FUNC_6(VAR_16->numa_node));
   continue;
  }

  if (VAR_16->affinity_policy == VAR_2) {
   if (!FUNC_8(VAR_14,
           &VAR_16->alloced_cpus_in_node)) {
    FUNC_7(VAR_14,
      &VAR_16->alloced_cpus_in_node);
    FUNC_7(VAR_14, VAR_19);
    break;
   }
  } else {
   FUNC_7(VAR_14, VAR_19);
   break;
  }
 }

 VAR_12->target_cpu = VAR_14;
 VAR_12->target_vp = FUNC_12(VAR_14);

 FUNC_14(&VAR_5);

 FUNC_11(VAR_18);
}
