
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {TYPE_1__* stats; } ;
typedef int ssize_t ;
struct TYPE_2__ {int total_trans; } ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct cpufreq_policy *VAR_0, char *VAR_1)
{
 return FUNC_0(VAR_1, "%d\n", VAR_0->stats->total_trans);
}
