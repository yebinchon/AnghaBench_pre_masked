
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kernfs_node {int dummy; } ;
struct TYPE_5__ {scalar_t__ expires; } ;
struct global_pstate_info {int gpstate_lock; TYPE_1__ timer; struct cpufreq_policy* policy; } ;
struct TYPE_7__ {int sd; } ;
struct cpufreq_policy {int fast_switch_possible; struct global_pstate_info* driver_data; int freq_table; int cpu; TYPE_3__ kobj; int cpus; } ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct kernfs_node* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct kernfs_node*) ;
 struct global_pstate_info* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_8 ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*) ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 int FUNC_10 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_11(struct cpufreq_policy *VAR_11)
{
 int VAR_12, VAR_13;
 struct kernfs_node *VAR_14;
 struct global_pstate_info *VAR_15;

 VAR_12 = FUNC_0(VAR_11->cpu);

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++)
  FUNC_1(VAR_12 + VAR_13, VAR_11->cpus);

 VAR_14 = FUNC_2(VAR_11->kobj.sd, VAR_10.name);
 if (!VAR_14) {
  int VAR_16;

  VAR_16 = FUNC_9(&VAR_11->kobj, &VAR_10);
  if (VAR_16) {
   FUNC_6("Failed to create throttle stats directory for cpu %d\n",
    VAR_11->cpu);
   return VAR_16;
  }
 } else {
  FUNC_3(VAR_14);
 }

 VAR_11->freq_table = VAR_8;
 VAR_11->fast_switch_possible = 1;

 if (FUNC_7(VAR_3))
  return 0;


 VAR_15 = FUNC_4(sizeof(*VAR_15), VAR_1);
 if (!VAR_15)
  return -VAR_0;

 VAR_11->driver_data = VAR_15;


 VAR_15->policy = VAR_11;
 FUNC_10(&VAR_15->timer, VAR_6,
      VAR_5 | VAR_4);
 VAR_15->timer.expires = VAR_7 +
    FUNC_5(VAR_2);
 FUNC_8(&VAR_15->gpstate_lock);

 return 0;
}
