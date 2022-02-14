
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {int max; int min; } ;
struct TYPE_2__ {unsigned int (* fast_switch ) (struct cpufreq_policy*,unsigned int) ;} ;


 unsigned int FUNC_0 (unsigned int,int ,int ) ;
 TYPE_1__* VAR_0 ;
 unsigned int FUNC_1 (struct cpufreq_policy*,unsigned int) ;

unsigned int FUNC_2(struct cpufreq_policy *VAR_1,
     unsigned int VAR_2)
{
 VAR_2 = FUNC_0(VAR_2, VAR_1->min, VAR_1->max);

 return VAR_0->fast_switch(VAR_1, VAR_2);
}
