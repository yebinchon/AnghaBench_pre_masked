
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpufreq_policy {int dummy; } ;
struct TYPE_2__ {unsigned int frequency; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 TYPE_1__* VAR_1 ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct cpufreq_policy *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = FUNC_1(0);
 unsigned int VAR_5;

 VAR_5 = VAR_1[VAR_3].frequency;

 if (VAR_5 > VAR_4)
  FUNC_0(VAR_4, VAR_5);

 VAR_0 = VAR_3;

 if (VAR_5 < VAR_4)
  FUNC_0(VAR_4, VAR_5);

 return 0;
}
