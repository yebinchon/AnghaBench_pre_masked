
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cpufreq_policy {size_t cpu; } ;
struct TYPE_3__ {scalar_t__ epp_policy; } ;


 TYPE_1__** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (size_t) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct cpufreq_policy *VAR_3)
{
 if (!VAR_1)
  return 0;

 FUNC_2(&VAR_2);

 if (VAR_3->cpu == 0)
  FUNC_0(VAR_0[VAR_3->cpu]);

 VAR_0[VAR_3->cpu]->epp_policy = 0;
 FUNC_1(VAR_3->cpu);

 FUNC_3(&VAR_2);

 return 0;
}
