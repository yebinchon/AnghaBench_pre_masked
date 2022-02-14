
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct devfreq {TYPE_1__ dev; } ;
struct dev_pm_opp {int dummy; } ;


 scalar_t__ FUNC_0 (struct dev_pm_opp*) ;
 unsigned long VAR_0 ;
 struct dev_pm_opp* FUNC_1 (int ,unsigned long*) ;
 int FUNC_2 (struct dev_pm_opp*) ;

__attribute__((used)) static unsigned long FUNC_3(struct devfreq *VAR_1)
{
 struct dev_pm_opp *VAR_2;
 unsigned long VAR_3 = VAR_0;

 VAR_2 = FUNC_1(VAR_1->dev.parent, &VAR_3);
 if (FUNC_0(VAR_2))
  VAR_3 = 0;
 else
  FUNC_2(VAR_2);

 return VAR_3;
}
