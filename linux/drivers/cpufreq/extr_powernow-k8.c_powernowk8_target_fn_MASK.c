
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct powernowk8_target_arg {unsigned int newstate; struct cpufreq_policy* pol; } ;
struct powernow_k8_data {scalar_t__ currfid; scalar_t__ currvid; TYPE_1__* powernow_table; } ;
struct cpufreq_policy {int cur; int max; int min; int cpu; } ;
struct TYPE_2__ {int frequency; } ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 struct powernow_k8_data* FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int FUNC_5 (struct powernow_k8_data*,unsigned int) ;
 int FUNC_6 (char*,scalar_t__,scalar_t__,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (struct powernow_k8_data*) ;
 int FUNC_10 (struct powernow_k8_data*,unsigned int) ;

__attribute__((used)) static long FUNC_11(void *VAR_4)
{
 struct powernowk8_target_arg *VAR_5 = VAR_4;
 struct cpufreq_policy *VAR_6 = VAR_5->pol;
 unsigned VAR_7 = VAR_5->newstate;
 struct powernow_k8_data *VAR_8 = FUNC_4(VAR_3, VAR_6->cpu);
 u32 VAR_9;
 u32 VAR_10;
 int VAR_11;

 if (!VAR_8)
  return -VAR_0;

 VAR_9 = VAR_8->currfid;
 VAR_10 = VAR_8->currvid;

 if (FUNC_3()) {
  FUNC_7("failing targ, change pending bit set\n");
  return -VAR_1;
 }

 FUNC_6("targ: cpu %d, %d kHz, min %d, max %d\n",
  VAR_6->cpu, VAR_8->powernow_table[VAR_7].frequency, VAR_6->min,
  VAR_6->max);

 if (FUNC_9(VAR_8))
  return -VAR_1;

 FUNC_6("targ: curr fid 0x%x, vid 0x%x\n",
  VAR_8->currfid, VAR_8->currvid);

 if ((VAR_10 != VAR_8->currvid) ||
     (VAR_9 != VAR_8->currfid)) {
  FUNC_8("error - out of sync, fix 0x%x 0x%x, vid 0x%x 0x%x\n",
         VAR_9, VAR_8->currfid,
         VAR_10, VAR_8->currvid);
 }

 FUNC_1(&VAR_2);

 FUNC_5(VAR_8, VAR_7);

 VAR_11 = FUNC_10(VAR_8, VAR_7);

 if (VAR_11) {
  FUNC_7("transition frequency failed\n");
  FUNC_2(&VAR_2);
  return 1;
 }
 FUNC_2(&VAR_2);

 VAR_6->cur = FUNC_0(VAR_8->currfid);

 return 0;
}
