
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cpufreq_policy {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int frequency; } ;
struct TYPE_3__ {size_t nominal; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct cpufreq_policy *VAR_2,
     char *VAR_3)
{
 return FUNC_0(VAR_3, "%u\n",
  VAR_0[VAR_1.nominal].frequency);
}
