
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {unsigned int cur; int cpu; } ;
typedef int ssize_t ;
struct TYPE_2__ {unsigned int (* get ) (int ) ;scalar_t__ setpolicy; } ;


 unsigned int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char*,char*,unsigned int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct cpufreq_policy *VAR_1, char *VAR_2)
{
 ssize_t VAR_3;
 unsigned int VAR_4;

 VAR_4 = FUNC_0(VAR_1->cpu);
 if (VAR_4)
  VAR_3 = FUNC_1(VAR_2, "%u\n", VAR_4);
 else if (VAR_0 && VAR_0->setpolicy &&
   VAR_0->get)
  VAR_3 = FUNC_1(VAR_2, "%u\n", VAR_0->get(VAR_1->cpu));
 else
  VAR_3 = FUNC_1(VAR_2, "%u\n", VAR_1->cur);
 return VAR_3;
}
