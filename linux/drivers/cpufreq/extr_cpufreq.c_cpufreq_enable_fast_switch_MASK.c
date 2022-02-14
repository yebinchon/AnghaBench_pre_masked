
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {int fast_switch_enabled; int cpu; int fast_switch_possible; int rwsem; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;

void FUNC_5(struct cpufreq_policy *VAR_2)
{
 FUNC_1(&VAR_2->rwsem);

 if (!VAR_2->fast_switch_possible)
  return;

 FUNC_2(&VAR_1);
 if (VAR_0 >= 0) {
  VAR_0++;
  VAR_2->fast_switch_enabled = 1;
 } else {
  FUNC_4("CPU%u: Fast frequency switching not enabled\n",
   VAR_2->cpu);
  FUNC_0();
 }
 FUNC_3(&VAR_1);
}
