
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int turbo_pstate; int min_pstate; } ;
struct cpudata {TYPE_1__ pstate; } ;


 struct cpudata** VAR_0 ;

__attribute__((used)) static int FUNC_0(void)
{
 struct cpudata *VAR_1 = VAR_0[0];
 int VAR_2 = VAR_1->pstate.turbo_pstate;

 return VAR_2 ?
  (VAR_1->pstate.min_pstate * 100 / VAR_2) : 0;
}
