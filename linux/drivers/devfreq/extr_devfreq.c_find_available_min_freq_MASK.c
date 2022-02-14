
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct devfreq {TYPE_1__ dev; } ;
struct dev_pm_opp {int dummy; } ;


 scalar_t__ FUNC_0 (struct dev_pm_opp*) ;
 struct dev_pm_opp* FUNC_1 (int ,unsigned long*) ;
 int FUNC_2 (struct dev_pm_opp*) ;

__attribute__((used)) static unsigned long FUNC_3(struct devfreq *VAR_0)
{
 struct dev_pm_opp *VAR_1;
 unsigned long VAR_2 = 0;

 VAR_1 = FUNC_1(VAR_0->dev.parent, &VAR_2);
 if (FUNC_0(VAR_1))
  VAR_2 = 0;
 else
  FUNC_2(VAR_1);

 return VAR_2;
}
