
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {unsigned int cur; } ;
struct TYPE_2__ {unsigned int (* get ) (unsigned int) ;scalar_t__ setpolicy; } ;


 struct cpufreq_policy* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct cpufreq_policy*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned int FUNC_4 (unsigned int) ;

unsigned int FUNC_5(unsigned int VAR_2)
{
 struct cpufreq_policy *VAR_3;
 unsigned int VAR_4 = 0;
 unsigned long VAR_5;

 FUNC_2(&VAR_1, VAR_5);

 if (VAR_0 && VAR_0->setpolicy && VAR_0->get) {
  VAR_4 = VAR_0->get(VAR_2);
  FUNC_3(&VAR_1, VAR_5);
  return VAR_4;
 }

 FUNC_3(&VAR_1, VAR_5);

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3) {
  VAR_4 = VAR_3->cur;
  FUNC_1(VAR_3);
 }

 return VAR_4;
}
