
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int max_freq; } ;
struct cpufreq_policy {TYPE_1__ cpuinfo; int cpu; } ;
typedef int ssize_t ;
struct TYPE_4__ {int (* bios_limit ) (int ,unsigned int*) ;} ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char*,char*,unsigned int) ;
 int FUNC_1 (int ,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_2(struct cpufreq_policy *VAR_1, char *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;
 VAR_4 = VAR_0->bios_limit(VAR_1->cpu, &VAR_3);
 if (!VAR_4)
  return FUNC_0(VAR_2, "%u\n", VAR_3);
 return FUNC_0(VAR_2, "%u\n", VAR_1->cpuinfo.max_freq);
}
