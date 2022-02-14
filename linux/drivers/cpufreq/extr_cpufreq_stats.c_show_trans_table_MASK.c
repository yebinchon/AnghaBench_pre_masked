
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_stats {int state_num; int* freq_table; int* trans_table; int max_state; } ;
struct cpufreq_policy {scalar_t__ fast_switch_enabled; struct cpufreq_stats* stats; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct cpufreq_policy *VAR_2, char *VAR_3)
{
 struct cpufreq_stats *VAR_4 = VAR_2->stats;
 ssize_t VAR_5 = 0;
 int VAR_6, VAR_7;

 if (VAR_2->fast_switch_enabled)
  return 0;

 VAR_5 += FUNC_1(VAR_3 + VAR_5, VAR_1 - VAR_5, "   From  :    To\n");
 VAR_5 += FUNC_1(VAR_3 + VAR_5, VAR_1 - VAR_5, "         : ");
 for (VAR_6 = 0; VAR_6 < VAR_4->state_num; VAR_6++) {
  if (VAR_5 >= VAR_1)
   break;
  VAR_5 += FUNC_1(VAR_3 + VAR_5, VAR_1 - VAR_5, "%9u ",
    VAR_4->freq_table[VAR_6]);
 }
 if (VAR_5 >= VAR_1)
  return VAR_1;

 VAR_5 += FUNC_1(VAR_3 + VAR_5, VAR_1 - VAR_5, "\n");

 for (VAR_6 = 0; VAR_6 < VAR_4->state_num; VAR_6++) {
  if (VAR_5 >= VAR_1)
   break;

  VAR_5 += FUNC_1(VAR_3 + VAR_5, VAR_1 - VAR_5, "%9u: ",
    VAR_4->freq_table[VAR_6]);

  for (VAR_7 = 0; VAR_7 < VAR_4->state_num; VAR_7++) {
   if (VAR_5 >= VAR_1)
    break;
   VAR_5 += FUNC_1(VAR_3 + VAR_5, VAR_1 - VAR_5, "%9u ",
     VAR_4->trans_table[VAR_6*VAR_4->max_state+VAR_7]);
  }
  if (VAR_5 >= VAR_1)
   break;
  VAR_5 += FUNC_1(VAR_3 + VAR_5, VAR_1 - VAR_5, "\n");
 }

 if (VAR_5 >= VAR_1) {
  FUNC_0("cpufreq transition table exceeds PAGE_SIZE. Disabling\n");
  return -VAR_0;
 }
 return VAR_5;
}
