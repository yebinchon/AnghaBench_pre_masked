
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {int dummy; } ;
struct TYPE_2__ {scalar_t__ driver_data; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct cpufreq_policy *VAR_3,
  unsigned int VAR_4)
{

 if (VAR_1[VAR_4].driver_data > VAR_2) {
  FUNC_1("invalid target frequency\n");
  return -VAR_0;
 }

 FUNC_0(VAR_4);

 return 0;
}
