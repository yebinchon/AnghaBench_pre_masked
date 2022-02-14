
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct powernow_k8_data {int currvid; int currfid; TYPE_1__* powernow_table; } ;
struct cpufreq_policy {int dummy; } ;
struct cpufreq_freqs {void* new; void* old; } ;
struct TYPE_2__ {int driver_data; } ;


 struct cpufreq_policy* FUNC_0 (int ) ;
 int FUNC_1 (struct cpufreq_policy*) ;
 int FUNC_2 (struct cpufreq_policy*,struct cpufreq_freqs*) ;
 int FUNC_3 (struct cpufreq_policy*,struct cpufreq_freqs*,int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (char*,int,int,...) ;
 scalar_t__ FUNC_6 (struct powernow_k8_data*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct powernow_k8_data*,int,int) ;

__attribute__((used)) static int FUNC_9(struct powernow_k8_data *VAR_0,
  unsigned int VAR_1)
{
 struct cpufreq_policy *VAR_2;
 u32 VAR_3 = 0;
 u32 VAR_4 = 0;
 int VAR_5;
 struct cpufreq_freqs VAR_6;

 FUNC_5("cpu %d transition to index %u\n", FUNC_7(), VAR_1);






 VAR_3 = VAR_0->powernow_table[VAR_1].driver_data & 0xFF;
 VAR_4 = (VAR_0->powernow_table[VAR_1].driver_data & 0xFF00) >> 8;

 FUNC_5("table matched fid 0x%x, giving vid 0x%x\n", VAR_3, VAR_4);

 if (FUNC_6(VAR_0))
  return 1;

 if ((VAR_0->currvid == VAR_4) && (VAR_0->currfid == VAR_3)) {
  FUNC_5("target matches current values (fid 0x%x, vid 0x%x)\n",
   VAR_3, VAR_4);
  return 0;
 }

 FUNC_5("cpu %d, changing to fid 0x%x, vid 0x%x\n",
  FUNC_7(), VAR_3, VAR_4);
 VAR_6.old = FUNC_4(VAR_0->currfid);
 VAR_6.new = FUNC_4(VAR_3);

 VAR_2 = FUNC_0(FUNC_7());
 FUNC_1(VAR_2);

 FUNC_2(VAR_2, &VAR_6);
 VAR_5 = FUNC_8(VAR_0, VAR_3, VAR_4);
 FUNC_3(VAR_2, &VAR_6, VAR_5);

 return VAR_5;
}
