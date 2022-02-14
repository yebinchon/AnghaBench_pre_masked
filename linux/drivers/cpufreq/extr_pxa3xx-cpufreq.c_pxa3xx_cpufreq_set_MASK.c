
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa3xx_freq_info {int dummy; } ;
struct cpufreq_policy {scalar_t__ cpu; } ;


 int VAR_0 ;
 int FUNC_0 (struct pxa3xx_freq_info*) ;
 int FUNC_1 (struct pxa3xx_freq_info*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 struct pxa3xx_freq_info* VAR_1 ;

__attribute__((used)) static int FUNC_4(struct cpufreq_policy *VAR_2, unsigned int VAR_3)
{
 struct pxa3xx_freq_info *VAR_4;
 unsigned long VAR_5;

 if (VAR_2->cpu != 0)
  return -VAR_0;

 VAR_4 = &VAR_1[VAR_3];

 FUNC_3(VAR_5);
 FUNC_1(VAR_4);
 FUNC_0(VAR_4);
 FUNC_2(VAR_5);

 return 0;
}
